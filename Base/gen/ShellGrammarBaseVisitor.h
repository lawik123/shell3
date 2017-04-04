
// Generated from /home/lars/Desktop/test/shell3/Base/ShellGrammar.g4 by ANTLR 4.6

#pragma once


#include "antlr4-runtime.h"
#include "ShellGrammarVisitor.h"


/**
 * This class provides an empty implementation of ShellGrammarVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ShellGrammarBaseVisitor : public ShellGrammarVisitor {
public:

  virtual antlrcpp::Any visitProgram(ShellGrammarParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGetDirExpression(ShellGrammarParser::GetDirExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChangeDirExpression(ShellGrammarParser::ChangeDirExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGetDir(ShellGrammarParser::GetDirContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChangeDir(ShellGrammarParser::ChangeDirContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExecCommands(ShellGrammarParser::ExecCommandsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIoCommands(ShellGrammarParser::IoCommandsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPath(ShellGrammarParser::PathContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArguments(ShellGrammarParser::ArgumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDirName(ShellGrammarParser::DirNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFileName(ShellGrammarParser::FileNameContext *ctx) override {
    return visitChildren(ctx);
  }


};

