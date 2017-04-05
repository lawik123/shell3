//
// Created by l on 4-4-17.
//

#ifndef SHELL_MYVISITOR_H
#define SHELL_MYVISITOR_H


#include "../gen/ShellGrammarBaseVisitor.h"

class MyVisitor: public ShellGrammarBaseVisitor {
public:
    antlrcpp::Any visitProgram(ShellGrammarParser::ProgramContext *ctx) override;

    antlrcpp::Any visitGetDir(ShellGrammarParser::GetDirContext *ctx) override;

    antlrcpp::Any visitExecCommands(ShellGrammarParser::ExecCommandsContext *ctx) override;

    antlrcpp::Any visitInputCommand(ShellGrammarParser::InputCommandContext *ctx) override;

    antlrcpp::Any visitOutputCommand(ShellGrammarParser::OutputCommandContext *ctx) override;

    antlrcpp::Any visitChangeDir(ShellGrammarParser::ChangeDirContext *ctx) override;

    antlrcpp::Any visitDirName(ShellGrammarParser::DirNameContext *ctx) override;

    antlrcpp::Any visitErrorCommand(ShellGrammarParser::ErrorCommandContext *ctx) override;
};


#endif //SHELL_MYVISITOR_H
