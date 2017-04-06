
#include <unistd.h>
#include <pwd.h>
#include <fcntl.h>
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

//execute commands
antlrcpp::Any MyVisitor::visitExecCommands(ShellGrammarParser::ExecCommandsContext *ctx) {
    int cid = fork();

    if (cid == 0) {
        std::string fileName = ctx->file->getText();
        char *arg[] = {(char *) fileName.c_str()};
        for (int i = 0; i < ctx->arguments().size(); i++) {
            arg[i + 1] = (char *) ctx->arguments()[i]->getText().c_str();
        }
        arg[ctx->arguments().size() + 1] = NULL;
        execvp(arg[0], arg);
    } else if (cid > 0) {

    } else {
        printf("Error in fork()");
    }
    return nullptr;
}

//IO commands

antlrcpp::Any MyVisitor::visitChangeDir(ShellGrammarParser::ChangeDirContext *ctx) {
    std::string path = ctx->dirPath->getText();
    chdir(path.c_str());

    return ShellGrammarBaseVisitor::visitChangeDir(ctx);
}

antlrcpp::Any MyVisitor::visitIoCommands(ShellGrammarParser::IoCommandsContext *ctx) {
    int cid = fork();




    if (cid == 0) {
        if(ctx->inOp != nullptr) {
            int in = open(ctx->inputfile->getText().c_str(), O_RDONLY);
            if (in == -1) {
                perror("error");
                return EXIT_FAILURE;
            }
            dup2(in, STDIN_FILENO);
            close(in);
        }

        if(ctx->errOp != nullptr) {
            int err = open(ctx->errorfile->getText().c_str(), O_CREAT | O_WRONLY, 0777);
            if (err == -1) {
                perror("error");
                return EXIT_FAILURE;
            }
            dup2(err, STDERR_FILENO);
            close(err);
        }

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

        std::string fileName = ctx->file->getText();
        char *arg[] = {(char *) fileName.c_str()};
        for (int i = 0; i < ctx->arguments().size(); i++) {
            arg[i + 1] = (char *) ctx->arguments()[i]->getText().c_str();
        }
        arg[ctx->arguments().size() + 1] = NULL;

        execvp(arg[0], arg);

        exit(-1);
    } else if (cid > 0) {
        //parent do nothing

    } else {
        printf("Error in fork()");
    }
    return ShellGrammarBaseVisitor::visitIoCommands(ctx);
}

