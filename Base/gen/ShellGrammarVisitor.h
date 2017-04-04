
// Generated from /home/l/Desktop/shell3/Base/ShellGrammar.g4 by ANTLR 4.6

#pragma once


#include "antlr4-runtime.h"
#include "ShellGrammarParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ShellGrammarParser.
 */
class  ShellGrammarVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ShellGrammarParser.
   */
    virtual antlrcpp::Any visitProgram(ShellGrammarParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitGetDirExpression(ShellGrammarParser::GetDirExpressionContext *context) = 0;

    virtual antlrcpp::Any visitChangeDirExpression(ShellGrammarParser::ChangeDirExpressionContext *context) = 0;

    virtual antlrcpp::Any visitGetDir(ShellGrammarParser::GetDirContext *context) = 0;

    virtual antlrcpp::Any visitChangeDir(ShellGrammarParser::ChangeDirContext *context) = 0;

    virtual antlrcpp::Any visitExecCommands(ShellGrammarParser::ExecCommandsContext *context) = 0;

    virtual antlrcpp::Any visitIoCommands(ShellGrammarParser::IoCommandsContext *context) = 0;

    virtual antlrcpp::Any visitPath(ShellGrammarParser::PathContext *context) = 0;

    virtual antlrcpp::Any visitDirName(ShellGrammarParser::DirNameContext *context) = 0;

    virtual antlrcpp::Any visitFileName(ShellGrammarParser::FileNameContext *context) = 0;


};

