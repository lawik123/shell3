#include <iostream>
#include <ANTLRInputStream.h>
#include <CommonTokenStream.h>
#include <tree/ParseTree.h>
#include "../gen/ShellGrammarLexer.h"
#include "../gen/ShellGrammarParser.h"
#include "MyVisitor.h"

int main() {
	std::cout << "Hello, World!" << std::endl;

	// Read some line of input....
	std::string input = "someInputLine";

	// Create input stream, create lexer and use lexer to create stream of tokens
	antlr4::ANTLRInputStream inputStream(input);
	ShellGrammarLexer lexer(&inputStream);
	antlr4::CommonTokenStream tokens(&lexer);

	// Create parser
	ShellGrammarParser parser(&tokens);
	antlr4::tree::ParseTree *parseTree = parser.program();

//	 Then, visit your tree
//	 MyVisitor visitor;
//	 visitor.visit(parseTree);

	return 0;
}
