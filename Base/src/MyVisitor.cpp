
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

antlrcpp::Any MyVisitor::visitErrorCommand(ShellGrammarParser::ErrorCommandContext *ctx) {
    int cid = fork();

    if (cid == 0) {
        int in = open(ctx->inputfile->getText().c_str(), O_RDONLY);
        int err = open(ctx->errorfile->getText().c_str(), O_CREAT | O_WRONLY, 0777);
        int out;
        if (ctx->op->getText() == " > ") {
            out = open(ctx->outputfile->getText().c_str(), O_CREAT | O_WRONLY, 0777);
        } else {
            out = open(ctx->outputfile->getText().c_str(), O_APPEND | O_WRONLY, 0777);
        }
        if (in == -1 || out == -1 || err == -1) {
            perror("error");
            return EXIT_FAILURE;
        }

        fclose(stdin);
        dup2(in, STDIN_FILENO);
        dup2(out, STDOUT_FILENO);
        dup2(err, STDERR_FILENO);

        close(in);
        close(out);
        close(err);

        std::string fileName = ctx->file->getText();
        char *arg[] = {(char *) fileName.c_str()};
        for (int i = 0; i < ctx->arguments().size(); i++) {
            arg[i + 1] = (char *) ctx->arguments()[i]->getText().c_str();
        }
        arg[ctx->arguments().size() + 1] = NULL;

        execvp(arg[0], arg);

        exit(-1);
    } else if (cid > 0) {
        //TODO error

    } else {
        printf("Error in fork()");
    }

    return nullptr;
}

antlrcpp::Any MyVisitor::visitInputCommand(ShellGrammarParser::InputCommandContext *ctx) {
    int cid = fork();

    if (cid == 0) {
        int fd = open(ctx->inputfile->getText().c_str(), O_RDONLY);
        if (fd == -1) {
            perror("error");
            return EXIT_FAILURE;
        }

        fclose(stdin);
        dup2(fd, STDIN_FILENO);
        close(fd);

        std::string fileName = ctx->file->getText();
        char *arg[] = {(char *) fileName.c_str()};
        for (int i = 0; i < ctx->arguments().size(); i++) {
            arg[i + 1] = (char *) ctx->arguments()[i]->getText().c_str();
        }
        arg[ctx->arguments().size() + 1] = NULL;

        execvp(arg[0], arg);

        exit(-1);
    } else if (cid > 0) {

    } else {
        printf("Error in fork()");
    }

    return nullptr;
}

antlrcpp::Any MyVisitor::visitOutputCommand(ShellGrammarParser::OutputCommandContext *ctx) {
    int cid = fork();

    if (cid == 0) {
        int fd;
        if (ctx->op->getText() == " > ") {
            fd = open(ctx->outputfile->getText().c_str(), O_CREAT | O_WRONLY, 0777);
        } else {
            fd = open(ctx->outputfile->getText().c_str(), O_APPEND | O_WRONLY, 0777);

        }
        if (fd == -1) {
            perror("error");
            return EXIT_FAILURE;
        }

        fclose(stdout);
        dup2(fd, STDOUT_FILENO);
        close(fd);

        std::string fileName = ctx->file->getText();
        char *arg[] = {(char *) fileName.c_str()};
        for (int i = 0; i < ctx->arguments().size(); i++) {
            arg[i + 1] = (char *) ctx->arguments()[i]->getText().c_str();
        }
        arg[ctx->arguments().size() + 1] = NULL;

        execvp(arg[0], arg);

        exit(-1);
    }
    return nullptr;
}
