
#include <unistd.h>
#include <pwd.h>
#include <fcntl.h>
#include <wait.h>
#include <cstring>
#include "MyVisitor.h"

antlrcpp::Any MyVisitor::visitProgram(ShellGrammarParser::ProgramContext *ctx) {
    return ShellGrammarBaseVisitor::visitProgram(ctx);
}

//directory commands


antlrcpp::Any MyVisitor::visitGetDir(ShellGrammarParser::GetDirContext *ctx) {
    char buff[PATH_MAX];
    getcwd(buff, PATH_MAX);
    std::string cwd(buff);
    std::cout << cwd << std::endl;
    return nullptr;
}


antlrcpp::Any MyVisitor::visitDirName(ShellGrammarParser::DirNameContext *ctx) {
    return ctx->getText();
}

//IO commands
antlrcpp::Any MyVisitor::visitChangeDir(ShellGrammarParser::ChangeDirContext *ctx) {
    if(ctx->dirPath == nullptr) {
        chdir(getenv("HOME"));
    } else {
        std::string path = ctx->dirPath->getText();
        chdir(path.c_str());
    }
    return ShellGrammarBaseVisitor::visitChangeDir(ctx);
}

antlrcpp::Any MyVisitor::visitIoCommands(ShellGrammarParser::IoCommandsContext *ctx) {
    bool backgroundProcess = false;
    //fork process
    int cid = fork();
    int status;

    //check for background process
    if (ctx->backgroundvalidator != nullptr) {
        backgroundProcess = true;
    }

    if (cid == 0) {
        //when background process add process to diffrent group
        if(backgroundProcess) {
            setpgid(0,0);
        }
        //get input file
        if(ctx->inOp != nullptr) {
            int in = open(ctx->inputfile->getText().c_str(), O_RDONLY);
            if (in == -1) {
                perror("error");
                return EXIT_FAILURE;
            }
            dup2(in, STDIN_FILENO);
            close(in);
        }
        //write error to error-output file
        if(ctx->errOp != nullptr) {
            int err = open(ctx->errorfile->getText().c_str(), O_CREAT | O_WRONLY, 0777);
            if (err == -1) {
                perror("error");
                return EXIT_FAILURE;
            }
            dup2(err, STDERR_FILENO);
            close(err);
        }

        //write output to output file
        if(ctx->outOp != nullptr) {
            int out;
            if (ctx->outOp->getText() == " > ") {
                out = open(ctx->outputfile->getText().c_str(), O_CREAT | O_WRONLY, 0777);
            } else {
                out = open(ctx->outputfile->getText().c_str(), O_APPEND | O_WRONLY, 0777);
            }
            if (out == -1) {
                perror("error");
                return EXIT_FAILURE;
            }
            dup2(out, STDOUT_FILENO);
            close(out);
        }

        //execute program with arguments
        std::string fileName = ctx->file->getText();
        char *arg[] = {(char *) fileName.c_str()};
        for (int i = 0; i < ctx->arguments().size(); i++) {
            arg[i + 1] = (char *) ctx->arguments()[i]->getText().c_str();
        }
        arg[ctx->arguments().size() + 1] = NULL;

        execvp(arg[0], arg);

        exit(-1);
    } else if (cid > 0) {
        //wait for children if no background process is running
        if(!backgroundProcess) {
            cid = waitpid(cid, &status, 0);
        }
    } else {
        printf("Error in fork()");
    }

    return ShellGrammarBaseVisitor::visitIoCommands(ctx);
}



antlrcpp::Any MyVisitor::visitPipeCommands(ShellGrammarParser::PipeCommandsContext *ctx) {
    bool backgroundProcess = false;

    int pipeSize = ctx->pipeExpr().size()+1;
        //initialize pipes
        int pipes[pipeSize][2];

        for (int i = 0; i < pipeSize; i++) {
            pipe(pipes[i]);
        }

        //check for background process
        if (ctx->backgroundvalidator != nullptr) {
             backgroundProcess = true;
        }

        pid_t pid[pipeSize];


        for (int i = 0; i < pipeSize; i++) {
            //fork proces
            pid[i] = fork();
            if (pid[i] == 0) {
                if(backgroundProcess) {
                    //when background process add process to diffrent group
                    setpgid(pid[i],0);
                }

                //get in and output pipes when needed
                if (i > 0) {
                    dup2(pipes[i][0], STDIN_FILENO);
                }
                if (i < pipeSize-1) {
                    dup2(pipes[i + 1][1], STDOUT_FILENO);
                }
                for (int j = 0; j < pipeSize; j++) {
                    close(pipes[j][0]);
                    close(pipes[j][1]);
                }

                //get input file
                if (i == 0) {
                    if(ctx->inOp != nullptr) {
                        int in = open(ctx->inputfile->getText().c_str(), O_RDONLY);
                        if (in == -1) {
                            perror("error");
                            return EXIT_FAILURE;
                        }
                        dup2(in, STDIN_FILENO);
                        close(in);
                    }

                    //write error to error-output file
                    if(ctx->errOp != nullptr) {
                        int err = open(ctx->errorfile->getText().c_str(), O_CREAT | O_WRONLY, 0777);
                        if (err == -1) {
                            perror("error");
                            return EXIT_FAILURE;
                        }
                        dup2(err, STDERR_FILENO);
                        close(err);
                    }

                    //write output to output file
                    if(ctx->outOp != nullptr) {
                        int out;
                        if (ctx->outOp->getText() == " > ") {
                            out = open(ctx->outputfile->getText().c_str(), O_CREAT | O_WRONLY, 0777);
                        } else {
                            out = open(ctx->outputfile->getText().c_str(), O_APPEND | O_WRONLY, 0777);
                        }
                        if (out == -1) {
                            perror("error");
                            return EXIT_FAILURE;
                        }
                        dup2(out, STDOUT_FILENO);
                        close(out);
                    }

                    //execute program with arguments
                    std::string fileName = ctx->startFile->getText();
                    char *arg[] = {(char *) fileName.c_str()};
                    for (int k = 0; k < ctx->arguments().size(); k++) {
                        arg[k + 1] = (char *) ctx->arguments()[k]->getText().c_str();
                    }
                    arg[ctx->arguments().size() + 1] = NULL;
                    execvp(arg[0], arg);
                } else {
                    //get input file
                    if(ctx->pipeExpr()[i-1]->inOp != nullptr) {
                        int in = open(ctx->pipeExpr()[i-1]->inputfile->getText().c_str(), O_RDONLY);
                        if (in == -1) {
                            perror("error");
                            return EXIT_FAILURE;
                        }
                        dup2(in, STDIN_FILENO);
                        close(in);
                    }

                    //write error to error-output file
                    if(ctx->pipeExpr()[i-1]->errOp != nullptr) {
                        int err = open(ctx->pipeExpr()[i-1]->errorfile->getText().c_str(), O_CREAT | O_WRONLY, 0777);
                        if (err == -1) {
                            perror("error");
                            return EXIT_FAILURE;
                        }
                        dup2(err, STDERR_FILENO);
                        close(err);
                    }

                    //write output to ouput file
                    if(ctx->pipeExpr()[i-1]->outOp != nullptr) {
                        int out;
                        if (ctx->pipeExpr()[i-1]->outOp->getText() == " > ") {
                            out = open(ctx->pipeExpr()[i-1]->outputfile->getText().c_str(), O_CREAT | O_WRONLY, 0777);
                        } else {
                            out = open(ctx->pipeExpr()[i-1]->outputfile->getText().c_str(), O_APPEND | O_WRONLY, 0777);
                        }
                        if (out == -1) {
                            perror("error");
                            return EXIT_FAILURE;
                        }
                        dup2(out, STDOUT_FILENO);
                        close(out);
                    }


                    //execute program with arguments
                    std::string fileName = ctx->pipeExpr(i-1)->file->getText();
                    char *arg[] = {(char *) fileName.c_str()};
                    for (int k = 0; k < ctx->pipeExpr(i-1)->arguments().size(); k++) {
                        arg[k + 1] = (char *) ctx->pipeExpr(i-1)->arguments()[k]->getText().c_str();
                    }
                    arg[ctx->pipeExpr(i-1)->arguments().size() + 1] = NULL;
                    execvp(arg[0], arg);
                }


                exit(0);
            }


        }

        //close all pipes
        for (int j = 0; j < pipeSize; j++) {
            close(pipes[j][0]);
            close(pipes[j][1]);
        }
        //wait for children if no background process is running
        for (int j = 0; j < pipeSize; j++) {
            if(!backgroundProcess) {
                int status;
                waitpid(pid[j], &status, 0);
            }
        }

    return ShellGrammarBaseVisitor::visitPipeCommands(ctx);
}

