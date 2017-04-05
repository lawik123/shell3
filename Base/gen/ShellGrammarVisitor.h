
// Generated from /home/lars/Desktop/test/shell3/Base/ShellGrammar.g4 by ANTLR 4.6

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

    virtual antlrcpp::Any visitDirCommands(ShellGrammarParser::DirCommandsContext *context) = 0;

    virtual antlrcpp::Any visitGetDir(ShellGrammarParser::GetDirContext *context) = 0;

    virtual antlrcpp::Any visitChangeDir(ShellGrammarParser::ChangeDirContext *context) = 0;

    virtual antlrcpp::Any visitExecCommands(ShellGrammarParser::ExecCommandsContext *context) = 0;

    virtual antlrcpp::Any visitIoCommands(ShellGrammarParser::IoCommandsContext *context) = 0;

    virtual antlrcpp::Any visitInputCommand(ShellGrammarParser::InputCommandContext *context) = 0;

    virtual antlrcpp::Any visitOutputCommand(ShellGrammarParser::OutputCommandContext *context) = 0;

    virtual antlrcpp::Any visitPath(ShellGrammarParser::PathContext *context) = 0;

    virtual antlrcpp::Any visitInput(ShellGrammarParser::InputContext *context) = 0;

    virtual antlrcpp::Any visitOutput(ShellGrammarParser::OutputContext *context) = 0;

    virtual antlrcpp::Any visitArguments(ShellGrammarParser::ArgumentsContext *context) = 0;

    virtual antlrcpp::Any visitDirName(ShellGrammarParser::DirNameContext *context) = 0;

    virtual antlrcpp::Any visitProgramName(ShellGrammarParser::ProgramNameContext *context) = 0;


};

