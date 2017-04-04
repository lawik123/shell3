
#include <unistd.h>
#include <pwd.h>
#include "MyVisitor.h"

antlrcpp::Any MyVisitor::visitProgram(ShellGrammarParser::ProgramContext *ctx) {
    return ShellGrammarBaseVisitor::visitProgram(ctx);
}

//directory commands
antlrcpp::Any MyVisitor::visitGetDirExpression(ShellGrammarParser::GetDirExpressionContext *ctx) {
    return ShellGrammarBaseVisitor::visitGetDirExpression(ctx);
}

antlrcpp::Any MyVisitor::visitGetDir(ShellGrammarParser::GetDirContext *ctx) {
    char buff[PATH_MAX];
    getcwd(buff,PATH_MAX);
    std::string cwd(buff);
    std::cout << cwd << std::endl;
    return nullptr;
}

antlrcpp::Any MyVisitor::visitChangeDirExpression(ShellGrammarParser::ChangeDirExpressionContext *ctx) {
    return ShellGrammarBaseVisitor::visitChangeDirExpression(ctx);
}


antlrcpp::Any MyVisitor::visitDirName(ShellGrammarParser::DirNameContext *ctx) {
    return ctx->getText();
}

//execute commands
antlrcpp::Any MyVisitor::visitExecCommands(ShellGrammarParser::ExecCommandsContext *ctx) {
    std::string fileName = ctx->file->getText();

    char* arg[] = {(char *) fileName.c_str(), NULL};
    execvp(arg[0], arg);
    return ShellGrammarBaseVisitor::visitExecCommands(ctx);
}

//IO commands
antlrcpp::Any MyVisitor::visitIoCommands(ShellGrammarParser::IoCommandsContext *ctx) {
    return ShellGrammarBaseVisitor::visitIoCommands(ctx);
}

antlrcpp::Any MyVisitor::visitChangeDir(ShellGrammarParser::ChangeDirContext *ctx) {
    std::string path = ctx->dirPath->getText();
    chdir(path.c_str());

    return ShellGrammarBaseVisitor::visitChangeDir(ctx);
}
