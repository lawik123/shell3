
// Generated from /home/lars/Desktop/test/shell3/Base/ShellGrammar.g4 by ANTLR 4.6


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
    setState(23);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ShellGrammarParser::T__0:
      case ShellGrammarParser::T__1: {
        enterOuterAlt(_localctx, 1);
        setState(20);
        dirCommands();
        break;
      }

      case ShellGrammarParser::T__3: {
        enterOuterAlt(_localctx, 2);
        setState(21);
        execCommands();
        break;
      }

      case ShellGrammarParser::EOF: {
        enterOuterAlt(_localctx, 3);
        setState(22);
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
    setState(27);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ShellGrammarParser::T__0: {
        _localctx = dynamic_cast<DirCommandsContext *>(_tracker.createInstance<ShellGrammarParser::GetDirExpressionContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(25);
        getDir();
        break;
      }

      case ShellGrammarParser::T__1: {
        _localctx = dynamic_cast<DirCommandsContext *>(_tracker.createInstance<ShellGrammarParser::ChangeDirExpressionContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(26);
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
    setState(29);
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
    setState(31);
    match(ShellGrammarParser::T__1);
    setState(34);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellGrammarParser::T__2) {
      setState(32);
      match(ShellGrammarParser::T__2);
      setState(33);
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

std::vector<ShellGrammarParser::ArgumentsContext *> ShellGrammarParser::ExecCommandsContext::arguments() {
  return getRuleContexts<ShellGrammarParser::ArgumentsContext>();
}

ShellGrammarParser::ArgumentsContext* ShellGrammarParser::ExecCommandsContext::arguments(size_t i) {
  return getRuleContext<ShellGrammarParser::ArgumentsContext>(i);
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
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    match(ShellGrammarParser::T__3);
    setState(37);
    match(ShellGrammarParser::T__2);
    setState(38);
    dynamic_cast<ExecCommandsContext *>(_localctx)->file = fileName();
    setState(43);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ShellGrammarParser::T__2) {
      setState(39);
      match(ShellGrammarParser::T__2);
      setState(40);
      dynamic_cast<ExecCommandsContext *>(_localctx)->arg = arguments();
      setState(45);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
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
    setState(54);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ShellGrammarParser::T__5:
      case ShellGrammarParser::STRING: {
        enterOuterAlt(_localctx, 1);
        setState(49); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(48);
          dirName();
          setState(51); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == ShellGrammarParser::T__5

        || _la == ShellGrammarParser::STRING);
        break;
      }

      case ShellGrammarParser::T__4: {
        enterOuterAlt(_localctx, 2);
        setState(53);
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

//----------------- ArgumentsContext ------------------------------------------------------------------

ShellGrammarParser::ArgumentsContext::ArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ShellGrammarParser::ArgumentsContext::STRING() {
  return getToken(ShellGrammarParser::STRING, 0);
}


size_t ShellGrammarParser::ArgumentsContext::getRuleIndex() const {
  return ShellGrammarParser::RuleArguments;
}

antlrcpp::Any ShellGrammarParser::ArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitArguments(this);
  else
    return visitor->visitChildren(this);
}

ShellGrammarParser::ArgumentsContext* ShellGrammarParser::arguments() {
  ArgumentsContext *_localctx = _tracker.createInstance<ArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 14, ShellGrammarParser::RuleArguments);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    match(ShellGrammarParser::STRING);
   
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
  enterRule(_localctx, 16, ShellGrammarParser::RuleDirName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
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

std::vector<tree::TerminalNode *> ShellGrammarParser::FileNameContext::STRING() {
  return getTokens(ShellGrammarParser::STRING);
}

tree::TerminalNode* ShellGrammarParser::FileNameContext::STRING(size_t i) {
  return getToken(ShellGrammarParser::STRING, i);
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
  enterRule(_localctx, 18, ShellGrammarParser::RuleFileName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(72);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(61);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ShellGrammarParser::T__6) {
        setState(60);
        match(ShellGrammarParser::T__6);
      }
      setState(63);
      match(ShellGrammarParser::STRING);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(65);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
      case 1: {
        setState(64);
        match(ShellGrammarParser::T__5);
        break;
      }

      }
      setState(68); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(67);
        _la = _input->LA(1);
        if (!(_la == ShellGrammarParser::T__5

        || _la == ShellGrammarParser::STRING)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(70); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == ShellGrammarParser::T__5

      || _la == ShellGrammarParser::STRING);
      break;
    }

    }
   
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
  "path", "arguments", "dirName", "fileName"
};

std::vector<std::string> ShellGrammarParser::_literalNames = {
  "", "'pwd'", "'cd'", "' '", "'execvp'", "'..'", "'/'", "'./'"
};

std::vector<std::string> ShellGrammarParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "STRING", "WS"
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
    0x3, 0xb, 0x4d, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x1a, 0xa, 0x2, 0x3, 0x3, 
    0x3, 0x3, 0x5, 0x3, 0x1e, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x5, 0x5, 0x25, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x2c, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x2f, 
    0xb, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x6, 0x8, 0x34, 0xa, 0x8, 0xd, 
    0x8, 0xe, 0x8, 0x35, 0x3, 0x8, 0x5, 0x8, 0x39, 0xa, 0x8, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x5, 0xb, 0x40, 0xa, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x5, 0xb, 0x44, 0xa, 0xb, 0x3, 0xb, 0x6, 0xb, 0x47, 0xa, 0xb, 
    0xd, 0xb, 0xe, 0xb, 0x48, 0x5, 0xb, 0x4b, 0xa, 0xb, 0x3, 0xb, 0x2, 0x2, 
    0xc, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x2, 0x3, 
    0x4, 0x2, 0x8, 0x8, 0xa, 0xa, 0x4d, 0x2, 0x19, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0x1d, 0x3, 0x2, 0x2, 0x2, 0x6, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x8, 0x21, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x26, 0x3, 0x2, 0x2, 0x2, 0xc, 0x30, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x38, 0x3, 0x2, 0x2, 0x2, 0x10, 0x3a, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x14, 0x4a, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x1a, 0x5, 0x4, 0x3, 0x2, 0x17, 0x1a, 0x5, 0xa, 0x6, 0x2, 0x18, 
    0x1a, 0x5, 0xc, 0x7, 0x2, 0x19, 0x16, 0x3, 0x2, 0x2, 0x2, 0x19, 0x17, 
    0x3, 0x2, 0x2, 0x2, 0x19, 0x18, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x3, 0x3, 
    0x2, 0x2, 0x2, 0x1b, 0x1e, 0x5, 0x6, 0x4, 0x2, 0x1c, 0x1e, 0x5, 0x8, 
    0x5, 0x2, 0x1d, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1c, 0x3, 0x2, 0x2, 
    0x2, 0x1e, 0x5, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x7, 0x3, 0x2, 0x2, 
    0x20, 0x7, 0x3, 0x2, 0x2, 0x2, 0x21, 0x24, 0x7, 0x4, 0x2, 0x2, 0x22, 
    0x23, 0x7, 0x5, 0x2, 0x2, 0x23, 0x25, 0x5, 0xe, 0x8, 0x2, 0x24, 0x22, 
    0x3, 0x2, 0x2, 0x2, 0x24, 0x25, 0x3, 0x2, 0x2, 0x2, 0x25, 0x9, 0x3, 
    0x2, 0x2, 0x2, 0x26, 0x27, 0x7, 0x6, 0x2, 0x2, 0x27, 0x28, 0x7, 0x5, 
    0x2, 0x2, 0x28, 0x2d, 0x5, 0x14, 0xb, 0x2, 0x29, 0x2a, 0x7, 0x5, 0x2, 
    0x2, 0x2a, 0x2c, 0x5, 0x10, 0x9, 0x2, 0x2b, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0x2c, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2d, 
    0x2e, 0x3, 0x2, 0x2, 0x2, 0x2e, 0xb, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x2d, 
    0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0x3, 0x2, 0x2, 0x2, 0x31, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0x32, 0x34, 0x5, 0x12, 0xa, 0x2, 0x33, 0x32, 0x3, 0x2, 
    0x2, 0x2, 0x34, 0x35, 0x3, 0x2, 0x2, 0x2, 0x35, 0x33, 0x3, 0x2, 0x2, 
    0x2, 0x35, 0x36, 0x3, 0x2, 0x2, 0x2, 0x36, 0x39, 0x3, 0x2, 0x2, 0x2, 
    0x37, 0x39, 0x7, 0x7, 0x2, 0x2, 0x38, 0x33, 0x3, 0x2, 0x2, 0x2, 0x38, 
    0x37, 0x3, 0x2, 0x2, 0x2, 0x39, 0xf, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 
    0x7, 0xa, 0x2, 0x2, 0x3b, 0x11, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 0x9, 
    0x2, 0x2, 0x2, 0x3d, 0x13, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x40, 0x7, 0x9, 
    0x2, 0x2, 0x3f, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x3, 0x2, 0x2, 
    0x2, 0x40, 0x41, 0x3, 0x2, 0x2, 0x2, 0x41, 0x4b, 0x7, 0xa, 0x2, 0x2, 
    0x42, 0x44, 0x7, 0x8, 0x2, 0x2, 0x43, 0x42, 0x3, 0x2, 0x2, 0x2, 0x43, 
    0x44, 0x3, 0x2, 0x2, 0x2, 0x44, 0x46, 0x3, 0x2, 0x2, 0x2, 0x45, 0x47, 
    0x9, 0x2, 0x2, 0x2, 0x46, 0x45, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0x3, 
    0x2, 0x2, 0x2, 0x48, 0x46, 0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 0x3, 0x2, 
    0x2, 0x2, 0x49, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x3f, 0x3, 0x2, 0x2, 
    0x2, 0x4a, 0x43, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x15, 0x3, 0x2, 0x2, 0x2, 
    0xc, 0x19, 0x1d, 0x24, 0x2d, 0x35, 0x38, 0x3f, 0x43, 0x48, 0x4a, 
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
