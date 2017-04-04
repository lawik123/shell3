
// Generated from /home/l/Desktop/shell3/Base/ShellGrammar.g4 by ANTLR 4.6


#include "ShellGrammarVisitor.h"

#include "ShellGrammarParser.h"


using namespace antlrcpp;
using namespace antlr4;

ShellGrammarParser::ShellGrammarParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ShellGrammarParser::~ShellGrammarParser() {
  delete _interpreter;
}

std::string ShellGrammarParser::getGrammarFileName() const {
  return "ShellGrammar.g4";
}

const std::vector<std::string>& ShellGrammarParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ShellGrammarParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

ShellGrammarParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ShellGrammarParser::DirCommandsContext* ShellGrammarParser::ProgramContext::dirCommands() {
  return getRuleContext<ShellGrammarParser::DirCommandsContext>(0);
}

ShellGrammarParser::ExecCommandsContext* ShellGrammarParser::ProgramContext::execCommands() {
  return getRuleContext<ShellGrammarParser::ExecCommandsContext>(0);
}

ShellGrammarParser::IoCommandsContext* ShellGrammarParser::ProgramContext::ioCommands() {
  return getRuleContext<ShellGrammarParser::IoCommandsContext>(0);
}


size_t ShellGrammarParser::ProgramContext::getRuleIndex() const {
  return ShellGrammarParser::RuleProgram;
}

antlrcpp::Any ShellGrammarParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

ShellGrammarParser::ProgramContext* ShellGrammarParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, ShellGrammarParser::RuleProgram);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(21);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ShellGrammarParser::T__0:
      case ShellGrammarParser::T__1: {
        enterOuterAlt(_localctx, 1);
        setState(18);
        dirCommands();
        break;
      }

      case ShellGrammarParser::T__3: {
        enterOuterAlt(_localctx, 2);
        setState(19);
        execCommands();
        break;
      }

      case ShellGrammarParser::EOF: {
        enterOuterAlt(_localctx, 3);
        setState(20);
        ioCommands();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DirCommandsContext ------------------------------------------------------------------

ShellGrammarParser::DirCommandsContext::DirCommandsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ShellGrammarParser::DirCommandsContext::getRuleIndex() const {
  return ShellGrammarParser::RuleDirCommands;
}

void ShellGrammarParser::DirCommandsContext::copyFrom(DirCommandsContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- GetDirExpressionContext ------------------------------------------------------------------

ShellGrammarParser::GetDirContext* ShellGrammarParser::GetDirExpressionContext::getDir() {
  return getRuleContext<ShellGrammarParser::GetDirContext>(0);
}

ShellGrammarParser::GetDirExpressionContext::GetDirExpressionContext(DirCommandsContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ShellGrammarParser::GetDirExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitGetDirExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ChangeDirExpressionContext ------------------------------------------------------------------

ShellGrammarParser::ChangeDirContext* ShellGrammarParser::ChangeDirExpressionContext::changeDir() {
  return getRuleContext<ShellGrammarParser::ChangeDirContext>(0);
}

ShellGrammarParser::ChangeDirExpressionContext::ChangeDirExpressionContext(DirCommandsContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ShellGrammarParser::ChangeDirExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitChangeDirExpression(this);
  else
    return visitor->visitChildren(this);
}
ShellGrammarParser::DirCommandsContext* ShellGrammarParser::dirCommands() {
  DirCommandsContext *_localctx = _tracker.createInstance<DirCommandsContext>(_ctx, getState());
  enterRule(_localctx, 2, ShellGrammarParser::RuleDirCommands);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(25);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ShellGrammarParser::T__0: {
        _localctx = dynamic_cast<DirCommandsContext *>(_tracker.createInstance<ShellGrammarParser::GetDirExpressionContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(23);
        getDir();
        break;
      }

      case ShellGrammarParser::T__1: {
        _localctx = dynamic_cast<DirCommandsContext *>(_tracker.createInstance<ShellGrammarParser::ChangeDirExpressionContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(24);
        changeDir();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GetDirContext ------------------------------------------------------------------

ShellGrammarParser::GetDirContext::GetDirContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ShellGrammarParser::GetDirContext::getRuleIndex() const {
  return ShellGrammarParser::RuleGetDir;
}

antlrcpp::Any ShellGrammarParser::GetDirContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitGetDir(this);
  else
    return visitor->visitChildren(this);
}

ShellGrammarParser::GetDirContext* ShellGrammarParser::getDir() {
  GetDirContext *_localctx = _tracker.createInstance<GetDirContext>(_ctx, getState());
  enterRule(_localctx, 4, ShellGrammarParser::RuleGetDir);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(27);
    match(ShellGrammarParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ChangeDirContext ------------------------------------------------------------------

ShellGrammarParser::ChangeDirContext::ChangeDirContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ShellGrammarParser::PathContext* ShellGrammarParser::ChangeDirContext::path() {
  return getRuleContext<ShellGrammarParser::PathContext>(0);
}


size_t ShellGrammarParser::ChangeDirContext::getRuleIndex() const {
  return ShellGrammarParser::RuleChangeDir;
}

antlrcpp::Any ShellGrammarParser::ChangeDirContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitChangeDir(this);
  else
    return visitor->visitChildren(this);
}

ShellGrammarParser::ChangeDirContext* ShellGrammarParser::changeDir() {
  ChangeDirContext *_localctx = _tracker.createInstance<ChangeDirContext>(_ctx, getState());
  enterRule(_localctx, 6, ShellGrammarParser::RuleChangeDir);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(29);
    match(ShellGrammarParser::T__1);
    setState(32);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellGrammarParser::T__2) {
      setState(30);
      match(ShellGrammarParser::T__2);
      setState(31);
      dynamic_cast<ChangeDirContext *>(_localctx)->dirPath = path();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExecCommandsContext ------------------------------------------------------------------

ShellGrammarParser::ExecCommandsContext::ExecCommandsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ShellGrammarParser::FileNameContext* ShellGrammarParser::ExecCommandsContext::fileName() {
  return getRuleContext<ShellGrammarParser::FileNameContext>(0);
}


size_t ShellGrammarParser::ExecCommandsContext::getRuleIndex() const {
  return ShellGrammarParser::RuleExecCommands;
}

antlrcpp::Any ShellGrammarParser::ExecCommandsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitExecCommands(this);
  else
    return visitor->visitChildren(this);
}

ShellGrammarParser::ExecCommandsContext* ShellGrammarParser::execCommands() {
  ExecCommandsContext *_localctx = _tracker.createInstance<ExecCommandsContext>(_ctx, getState());
  enterRule(_localctx, 8, ShellGrammarParser::RuleExecCommands);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(34);
    match(ShellGrammarParser::T__3);
    setState(35);
    match(ShellGrammarParser::T__2);
    setState(36);
    dynamic_cast<ExecCommandsContext *>(_localctx)->file = fileName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IoCommandsContext ------------------------------------------------------------------

ShellGrammarParser::IoCommandsContext::IoCommandsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ShellGrammarParser::IoCommandsContext::getRuleIndex() const {
  return ShellGrammarParser::RuleIoCommands;
}

antlrcpp::Any ShellGrammarParser::IoCommandsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitIoCommands(this);
  else
    return visitor->visitChildren(this);
}

ShellGrammarParser::IoCommandsContext* ShellGrammarParser::ioCommands() {
  IoCommandsContext *_localctx = _tracker.createInstance<IoCommandsContext>(_ctx, getState());
  enterRule(_localctx, 10, ShellGrammarParser::RuleIoCommands);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);

   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PathContext ------------------------------------------------------------------

ShellGrammarParser::PathContext::PathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ShellGrammarParser::DirNameContext *> ShellGrammarParser::PathContext::dirName() {
  return getRuleContexts<ShellGrammarParser::DirNameContext>();
}

ShellGrammarParser::DirNameContext* ShellGrammarParser::PathContext::dirName(size_t i) {
  return getRuleContext<ShellGrammarParser::DirNameContext>(i);
}


size_t ShellGrammarParser::PathContext::getRuleIndex() const {
  return ShellGrammarParser::RulePath;
}

antlrcpp::Any ShellGrammarParser::PathContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitPath(this);
  else
    return visitor->visitChildren(this);
}

ShellGrammarParser::PathContext* ShellGrammarParser::path() {
  PathContext *_localctx = _tracker.createInstance<PathContext>(_ctx, getState());
  enterRule(_localctx, 12, ShellGrammarParser::RulePath);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(46);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ShellGrammarParser::T__5:
      case ShellGrammarParser::STRING: {
        enterOuterAlt(_localctx, 1);
        setState(41); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(40);
          dirName();
          setState(43); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == ShellGrammarParser::T__5

        || _la == ShellGrammarParser::STRING);
        break;
      }

      case ShellGrammarParser::T__4: {
        enterOuterAlt(_localctx, 2);
        setState(45);
        match(ShellGrammarParser::T__4);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DirNameContext ------------------------------------------------------------------

ShellGrammarParser::DirNameContext::DirNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ShellGrammarParser::DirNameContext::STRING() {
  return getToken(ShellGrammarParser::STRING, 0);
}


size_t ShellGrammarParser::DirNameContext::getRuleIndex() const {
  return ShellGrammarParser::RuleDirName;
}

antlrcpp::Any ShellGrammarParser::DirNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitDirName(this);
  else
    return visitor->visitChildren(this);
}

ShellGrammarParser::DirNameContext* ShellGrammarParser::dirName() {
  DirNameContext *_localctx = _tracker.createInstance<DirNameContext>(_ctx, getState());
  enterRule(_localctx, 14, ShellGrammarParser::RuleDirName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(48);
    _la = _input->LA(1);
    if (!(_la == ShellGrammarParser::T__5

    || _la == ShellGrammarParser::STRING)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FileNameContext ------------------------------------------------------------------

ShellGrammarParser::FileNameContext::FileNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ShellGrammarParser::FileNameContext::STRING() {
  return getToken(ShellGrammarParser::STRING, 0);
}


size_t ShellGrammarParser::FileNameContext::getRuleIndex() const {
  return ShellGrammarParser::RuleFileName;
}

antlrcpp::Any ShellGrammarParser::FileNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitFileName(this);
  else
    return visitor->visitChildren(this);
}

ShellGrammarParser::FileNameContext* ShellGrammarParser::fileName() {
  FileNameContext *_localctx = _tracker.createInstance<FileNameContext>(_ctx, getState());
  enterRule(_localctx, 16, ShellGrammarParser::RuleFileName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    match(ShellGrammarParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> ShellGrammarParser::_decisionToDFA;
atn::PredictionContextCache ShellGrammarParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ShellGrammarParser::_atn;
std::vector<uint16_t> ShellGrammarParser::_serializedATN;

std::vector<std::string> ShellGrammarParser::_ruleNames = {
  "program", "dirCommands", "getDir", "changeDir", "execCommands", "ioCommands", 
  "path", "dirName", "fileName"
};

std::vector<std::string> ShellGrammarParser::_literalNames = {
  "", "'pwd'", "'cd'", "' '", "'execvp'", "'..'", "'/'"
};

std::vector<std::string> ShellGrammarParser::_symbolicNames = {
  "", "", "", "", "", "", "", "STRING", "WS"
};

dfa::Vocabulary ShellGrammarParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ShellGrammarParser::_tokenNames;

ShellGrammarParser::Initializer::Initializer() {
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
    0x3, 0xa, 0x37, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x5, 0x2, 0x18, 0xa, 0x2, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 
    0x1c, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 
    0x5, 0x23, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x8, 0x6, 0x8, 0x2c, 0xa, 0x8, 0xd, 0x8, 0xe, 0x8, 0x2d, 
    0x3, 0x8, 0x5, 0x8, 0x31, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x2, 0x2, 0xb, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x2, 0x3, 0x3, 0x2, 0x8, 0x9, 0x33, 0x2, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x6, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x8, 
    0x1f, 0x3, 0x2, 0x2, 0x2, 0xa, 0x24, 0x3, 0x2, 0x2, 0x2, 0xc, 0x28, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x30, 0x3, 0x2, 0x2, 0x2, 0x10, 0x32, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x34, 0x3, 0x2, 0x2, 0x2, 0x14, 0x18, 0x5, 0x4, 
    0x3, 0x2, 0x15, 0x18, 0x5, 0xa, 0x6, 0x2, 0x16, 0x18, 0x5, 0xc, 0x7, 
    0x2, 0x17, 0x14, 0x3, 0x2, 0x2, 0x2, 0x17, 0x15, 0x3, 0x2, 0x2, 0x2, 
    0x17, 0x16, 0x3, 0x2, 0x2, 0x2, 0x18, 0x3, 0x3, 0x2, 0x2, 0x2, 0x19, 
    0x1c, 0x5, 0x6, 0x4, 0x2, 0x1a, 0x1c, 0x5, 0x8, 0x5, 0x2, 0x1b, 0x19, 
    0x3, 0x2, 0x2, 0x2, 0x1b, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x1d, 0x1e, 0x7, 0x3, 0x2, 0x2, 0x1e, 0x7, 0x3, 0x2, 
    0x2, 0x2, 0x1f, 0x22, 0x7, 0x4, 0x2, 0x2, 0x20, 0x21, 0x7, 0x5, 0x2, 
    0x2, 0x21, 0x23, 0x5, 0xe, 0x8, 0x2, 0x22, 0x20, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0x23, 0x3, 0x2, 0x2, 0x2, 0x23, 0x9, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0x25, 0x7, 0x6, 0x2, 0x2, 0x25, 0x26, 0x7, 0x5, 0x2, 0x2, 0x26, 0x27, 
    0x5, 0x12, 0xa, 0x2, 0x27, 0xb, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x3, 
    0x2, 0x2, 0x2, 0x29, 0xd, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2c, 0x5, 0x10, 
    0x9, 0x2, 0x2b, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0x2d, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x3, 0x2, 0x2, 0x2, 
    0x2e, 0x31, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x31, 0x7, 0x7, 0x2, 0x2, 0x30, 
    0x2b, 0x3, 0x2, 0x2, 0x2, 0x30, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x31, 0xf, 
    0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x9, 0x2, 0x2, 0x2, 0x33, 0x11, 0x3, 
    0x2, 0x2, 0x2, 0x34, 0x35, 0x7, 0x9, 0x2, 0x2, 0x35, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0x7, 0x17, 0x1b, 0x22, 0x2d, 0x30, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ShellGrammarParser::Initializer ShellGrammarParser::_init;
