
// Generated from /home/l/Desktop/shell3/Base/ShellGrammar.g4 by ANTLR 4.6


#include "ShellGrammarLexer.h"


using namespace antlr4;


ShellGrammarLexer::ShellGrammarLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ShellGrammarLexer::~ShellGrammarLexer() {
  delete _interpreter;
}

std::string ShellGrammarLexer::getGrammarFileName() const {
  return "ShellGrammar.g4";
}

const std::vector<std::string>& ShellGrammarLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& ShellGrammarLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& ShellGrammarLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& ShellGrammarLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> ShellGrammarLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& ShellGrammarLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> ShellGrammarLexer::_decisionToDFA;
atn::PredictionContextCache ShellGrammarLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ShellGrammarLexer::_atn;
std::vector<uint16_t> ShellGrammarLexer::_serializedATN;

std::vector<std::string> ShellGrammarLexer::_ruleNames = {
  "STRING"
};

std::vector<std::string> ShellGrammarLexer::_modeNames = {
  "DEFAULT_MODE"
};

std::vector<std::string> ShellGrammarLexer::_literalNames = {
};

std::vector<std::string> ShellGrammarLexer::_symbolicNames = {
  "", "STRING"
};

dfa::Vocabulary ShellGrammarLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ShellGrammarLexer::_tokenNames;

ShellGrammarLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x430, 0xd6d1, 0x8206, 0xad2d, 0x4417, 0xaef1, 0x8d80, 0xaadd, 
    0x2, 0x3, 0x7, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x3, 0x2, 0x3, 0x2, 0x2, 
    0x2, 0x3, 0x3, 0x3, 0x3, 0x2, 0x3, 0x4, 0x2, 0x43, 0x5c, 0x63, 0x7c, 
    0x6, 0x2, 0x3, 0x3, 0x2, 0x2, 0x2, 0x3, 0x5, 0x3, 0x2, 0x2, 0x2, 0x5, 
    0x6, 0x9, 0x2, 0x2, 0x2, 0x6, 0x4, 0x3, 0x2, 0x2, 0x2, 0x3, 0x2, 0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ShellGrammarLexer::Initializer ShellGrammarLexer::_init;
