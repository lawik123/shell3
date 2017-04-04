
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
    virtual antlrcpp::Any visitCommand(ShellGrammarParser::CommandContext *context) = 0;


};

