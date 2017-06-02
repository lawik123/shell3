
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

ShellGrammarParser::IoCommandsContext* ShellGrammarParser::ProgramContext::ioCommands() {
  return getRuleContext<ShellGrammarParser::IoCommandsContext>(0);
}

ShellGrammarParser::PipeCommandsContext* ShellGrammarParser::ProgramContext::pipeCommands() {
  return getRuleContext<ShellGrammarParser::PipeCommandsContext>(0);
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
    setState(27);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(24);
      dirCommands();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(25);
      ioCommands();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(26);
      pipeCommands();
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

//----------------- DirCommandsContext ------------------------------------------------------------------

ShellGrammarParser::DirCommandsContext::DirCommandsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ShellGrammarParser::GetDirContext* ShellGrammarParser::DirCommandsContext::getDir() {
  return getRuleContext<ShellGrammarParser::GetDirContext>(0);
}

ShellGrammarParser::ChangeDirContext* ShellGrammarParser::DirCommandsContext::changeDir() {
  return getRuleContext<ShellGrammarParser::ChangeDirContext>(0);
}


size_t ShellGrammarParser::DirCommandsContext::getRuleIndex() const {
  return ShellGrammarParser::RuleDirCommands;
}

antlrcpp::Any ShellGrammarParser::DirCommandsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitDirCommands(this);
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
    setState(31);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ShellGrammarParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(29);
        getDir();
        break;
      }

      case ShellGrammarParser::T__1: {
        enterOuterAlt(_localctx, 2);
        setState(30);
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
    setState(33);
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
    setState(35);
    match(ShellGrammarParser::T__1);
    setState(38);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellGrammarParser::T__2) {
      setState(36);
      match(ShellGrammarParser::T__2);
      setState(37);
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
  enterRule(_localctx, 8, ShellGrammarParser::RulePath);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(46);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ShellGrammarParser::T__11:
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
        } while (_la == ShellGrammarParser::T__11

        || _la == ShellGrammarParser::STRING);
        break;
      }

      case ShellGrammarParser::T__3: {
        enterOuterAlt(_localctx, 2);
        setState(45);
        match(ShellGrammarParser::T__3);
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

//----------------- IoCommandsContext ------------------------------------------------------------------

ShellGrammarParser::IoCommandsContext::IoCommandsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ShellGrammarParser::ProgramNameContext* ShellGrammarParser::IoCommandsContext::programName() {
  return getRuleContext<ShellGrammarParser::ProgramNameContext>(0);
}

std::vector<ShellGrammarParser::ArgumentsContext *> ShellGrammarParser::IoCommandsContext::arguments() {
  return getRuleContexts<ShellGrammarParser::ArgumentsContext>();
}

ShellGrammarParser::ArgumentsContext* ShellGrammarParser::IoCommandsContext::arguments(size_t i) {
  return getRuleContext<ShellGrammarParser::ArgumentsContext>(i);
}

std::vector<ShellGrammarParser::FileNameContext *> ShellGrammarParser::IoCommandsContext::fileName() {
  return getRuleContexts<ShellGrammarParser::FileNameContext>();
}

ShellGrammarParser::FileNameContext* ShellGrammarParser::IoCommandsContext::fileName(size_t i) {
  return getRuleContext<ShellGrammarParser::FileNameContext>(i);
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
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(48);
    match(ShellGrammarParser::T__4);
    setState(49);
    dynamic_cast<IoCommandsContext *>(_localctx)->file = programName();
    setState(54);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ShellGrammarParser::T__2) {
      setState(50);
      match(ShellGrammarParser::T__2);
      setState(51);
      dynamic_cast<IoCommandsContext *>(_localctx)->arg = arguments();
      setState(56);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(59);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellGrammarParser::T__5) {
      setState(57);
      dynamic_cast<IoCommandsContext *>(_localctx)->inOp = match(ShellGrammarParser::T__5);
      setState(58);
      dynamic_cast<IoCommandsContext *>(_localctx)->inputfile = fileName();
    }
    setState(63);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellGrammarParser::T__6) {
      setState(61);
      dynamic_cast<IoCommandsContext *>(_localctx)->errOp = match(ShellGrammarParser::T__6);
      setState(62);
      dynamic_cast<IoCommandsContext *>(_localctx)->errorfile = fileName();
    }
    setState(67);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellGrammarParser::T__7

    || _la == ShellGrammarParser::T__8) {
      setState(65);
      dynamic_cast<IoCommandsContext *>(_localctx)->outOp = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == ShellGrammarParser::T__7

      || _la == ShellGrammarParser::T__8)) {
        dynamic_cast<IoCommandsContext *>(_localctx)->outOp = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(66);
      dynamic_cast<IoCommandsContext *>(_localctx)->outputfile = fileName();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PipeCommandsContext ------------------------------------------------------------------

ShellGrammarParser::PipeCommandsContext::PipeCommandsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ShellGrammarParser::ProgramNameContext* ShellGrammarParser::PipeCommandsContext::programName() {
  return getRuleContext<ShellGrammarParser::ProgramNameContext>(0);
}

std::vector<ShellGrammarParser::PipeExprContext *> ShellGrammarParser::PipeCommandsContext::pipeExpr() {
  return getRuleContexts<ShellGrammarParser::PipeExprContext>();
}

ShellGrammarParser::PipeExprContext* ShellGrammarParser::PipeCommandsContext::pipeExpr(size_t i) {
  return getRuleContext<ShellGrammarParser::PipeExprContext>(i);
}

std::vector<ShellGrammarParser::ArgumentsContext *> ShellGrammarParser::PipeCommandsContext::arguments() {
  return getRuleContexts<ShellGrammarParser::ArgumentsContext>();
}

ShellGrammarParser::ArgumentsContext* ShellGrammarParser::PipeCommandsContext::arguments(size_t i) {
  return getRuleContext<ShellGrammarParser::ArgumentsContext>(i);
}

std::vector<ShellGrammarParser::FileNameContext *> ShellGrammarParser::PipeCommandsContext::fileName() {
  return getRuleContexts<ShellGrammarParser::FileNameContext>();
}

ShellGrammarParser::FileNameContext* ShellGrammarParser::PipeCommandsContext::fileName(size_t i) {
  return getRuleContext<ShellGrammarParser::FileNameContext>(i);
}


size_t ShellGrammarParser::PipeCommandsContext::getRuleIndex() const {
  return ShellGrammarParser::RulePipeCommands;
}

antlrcpp::Any ShellGrammarParser::PipeCommandsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitPipeCommands(this);
  else
    return visitor->visitChildren(this);
}

ShellGrammarParser::PipeCommandsContext* ShellGrammarParser::pipeCommands() {
  PipeCommandsContext *_localctx = _tracker.createInstance<PipeCommandsContext>(_ctx, getState());
  enterRule(_localctx, 12, ShellGrammarParser::RulePipeCommands);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    match(ShellGrammarParser::T__4);
    setState(70);
    dynamic_cast<PipeCommandsContext *>(_localctx)->startFile = programName();
    setState(75);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ShellGrammarParser::T__2) {
      setState(71);
      match(ShellGrammarParser::T__2);
      setState(72);
      dynamic_cast<PipeCommandsContext *>(_localctx)->startArg = arguments();
      setState(77);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(80);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellGrammarParser::T__5) {
      setState(78);
      dynamic_cast<PipeCommandsContext *>(_localctx)->inOp = match(ShellGrammarParser::T__5);
      setState(79);
      dynamic_cast<PipeCommandsContext *>(_localctx)->inputfile = fileName();
    }
    setState(84);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellGrammarParser::T__6) {
      setState(82);
      dynamic_cast<PipeCommandsContext *>(_localctx)->errOp = match(ShellGrammarParser::T__6);
      setState(83);
      dynamic_cast<PipeCommandsContext *>(_localctx)->errorfile = fileName();
    }
    setState(88);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellGrammarParser::T__7

    || _la == ShellGrammarParser::T__8) {
      setState(86);
      dynamic_cast<PipeCommandsContext *>(_localctx)->outOp = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == ShellGrammarParser::T__7

      || _la == ShellGrammarParser::T__8)) {
        dynamic_cast<PipeCommandsContext *>(_localctx)->outOp = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(87);
      dynamic_cast<PipeCommandsContext *>(_localctx)->outputfile = fileName();
    }
    setState(91); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(90);
      pipeExpr();
      setState(93); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == ShellGrammarParser::T__9);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PipeExprContext ------------------------------------------------------------------

ShellGrammarParser::PipeExprContext::PipeExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ShellGrammarParser::ProgramNameContext* ShellGrammarParser::PipeExprContext::programName() {
  return getRuleContext<ShellGrammarParser::ProgramNameContext>(0);
}

std::vector<ShellGrammarParser::ArgumentsContext *> ShellGrammarParser::PipeExprContext::arguments() {
  return getRuleContexts<ShellGrammarParser::ArgumentsContext>();
}

ShellGrammarParser::ArgumentsContext* ShellGrammarParser::PipeExprContext::arguments(size_t i) {
  return getRuleContext<ShellGrammarParser::ArgumentsContext>(i);
}

std::vector<ShellGrammarParser::FileNameContext *> ShellGrammarParser::PipeExprContext::fileName() {
  return getRuleContexts<ShellGrammarParser::FileNameContext>();
}

ShellGrammarParser::FileNameContext* ShellGrammarParser::PipeExprContext::fileName(size_t i) {
  return getRuleContext<ShellGrammarParser::FileNameContext>(i);
}


size_t ShellGrammarParser::PipeExprContext::getRuleIndex() const {
  return ShellGrammarParser::RulePipeExpr;
}

antlrcpp::Any ShellGrammarParser::PipeExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitPipeExpr(this);
  else
    return visitor->visitChildren(this);
}

ShellGrammarParser::PipeExprContext* ShellGrammarParser::pipeExpr() {
  PipeExprContext *_localctx = _tracker.createInstance<PipeExprContext>(_ctx, getState());
  enterRule(_localctx, 14, ShellGrammarParser::RulePipeExpr);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(95);
    match(ShellGrammarParser::T__9);
    setState(96);
    dynamic_cast<PipeExprContext *>(_localctx)->file = programName();
    setState(101);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ShellGrammarParser::T__2) {
      setState(97);
      match(ShellGrammarParser::T__2);
      setState(98);
      dynamic_cast<PipeExprContext *>(_localctx)->arg = arguments();
      setState(103);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(106);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellGrammarParser::T__5) {
      setState(104);
      dynamic_cast<PipeExprContext *>(_localctx)->inOp = match(ShellGrammarParser::T__5);
      setState(105);
      dynamic_cast<PipeExprContext *>(_localctx)->inputfile = fileName();
    }
    setState(110);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellGrammarParser::T__6) {
      setState(108);
      dynamic_cast<PipeExprContext *>(_localctx)->errOp = match(ShellGrammarParser::T__6);
      setState(109);
      dynamic_cast<PipeExprContext *>(_localctx)->errorfile = fileName();
    }
    setState(114);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellGrammarParser::T__7

    || _la == ShellGrammarParser::T__8) {
      setState(112);
      dynamic_cast<PipeExprContext *>(_localctx)->outOp = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == ShellGrammarParser::T__7

      || _la == ShellGrammarParser::T__8)) {
        dynamic_cast<PipeExprContext *>(_localctx)->outOp = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(113);
      dynamic_cast<PipeExprContext *>(_localctx)->outputfile = fileName();
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
  enterRule(_localctx, 16, ShellGrammarParser::RuleFileName);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    match(ShellGrammarParser::STRING);
    setState(117);
    match(ShellGrammarParser::T__10);
    setState(118);
    match(ShellGrammarParser::STRING);
   
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

ShellGrammarParser::FileNameContext* ShellGrammarParser::ArgumentsContext::fileName() {
  return getRuleContext<ShellGrammarParser::FileNameContext>(0);
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
  enterRule(_localctx, 18, ShellGrammarParser::RuleArguments);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(122);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(120);
      match(ShellGrammarParser::STRING);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(121);
      fileName();
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
  enterRule(_localctx, 20, ShellGrammarParser::RuleDirName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(124);
    _la = _input->LA(1);
    if (!(_la == ShellGrammarParser::T__11

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

//----------------- ProgramNameContext ------------------------------------------------------------------

ShellGrammarParser::ProgramNameContext::ProgramNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ShellGrammarParser::ProgramNameContext::STRING() {
  return getTokens(ShellGrammarParser::STRING);
}

tree::TerminalNode* ShellGrammarParser::ProgramNameContext::STRING(size_t i) {
  return getToken(ShellGrammarParser::STRING, i);
}


size_t ShellGrammarParser::ProgramNameContext::getRuleIndex() const {
  return ShellGrammarParser::RuleProgramName;
}

antlrcpp::Any ShellGrammarParser::ProgramNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitProgramName(this);
  else
    return visitor->visitChildren(this);
}

ShellGrammarParser::ProgramNameContext* ShellGrammarParser::programName() {
  ProgramNameContext *_localctx = _tracker.createInstance<ProgramNameContext>(_ctx, getState());
  enterRule(_localctx, 22, ShellGrammarParser::RuleProgramName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(138);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(127);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ShellGrammarParser::T__12) {
        setState(126);
        match(ShellGrammarParser::T__12);
      }
      setState(129);
      match(ShellGrammarParser::STRING);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(131);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
      case 1: {
        setState(130);
        match(ShellGrammarParser::T__11);
        break;
      }

      }
      setState(134); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(133);
        _la = _input->LA(1);
        if (!(_la == ShellGrammarParser::T__11

        || _la == ShellGrammarParser::STRING)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(136); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == ShellGrammarParser::T__11

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
  "program", "dirCommands", "getDir", "changeDir", "path", "ioCommands", 
  "pipeCommands", "pipeExpr", "fileName", "arguments", "dirName", "programName"
};

std::vector<std::string> ShellGrammarParser::_literalNames = {
  "", "'pwd'", "'cd'", "' '", "'..'", "'execvp '", "' < '", "' 2> '", "' > '", 
  "' >> '", "' | '", "'.'", "'/'", "'./'"
};

std::vector<std::string> ShellGrammarParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "STRING", "WS"
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
    0x3, 0x11, 0x8f, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x5, 0x2, 0x1e, 0xa, 0x2, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x22, 0xa, 
    0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x29, 
    0xa, 0x5, 0x3, 0x6, 0x6, 0x6, 0x2c, 0xa, 0x6, 0xd, 0x6, 0xe, 0x6, 0x2d, 
    0x3, 0x6, 0x5, 0x6, 0x31, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x7, 0x7, 0x37, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x3a, 0xb, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x5, 0x7, 0x3e, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 
    0x42, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x46, 0xa, 0x7, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x4c, 0xa, 0x8, 0xc, 0x8, 0xe, 
    0x8, 0x4f, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x53, 0xa, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x5, 0x8, 0x57, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 
    0x5b, 0xa, 0x8, 0x3, 0x8, 0x6, 0x8, 0x5e, 0xa, 0x8, 0xd, 0x8, 0xe, 0x8, 
    0x5f, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x66, 0xa, 0x9, 
    0xc, 0x9, 0xe, 0x9, 0x69, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x6d, 
    0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x71, 0xa, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x5, 0x9, 0x75, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x7d, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xd, 0x5, 0xd, 0x82, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x86, 0xa, 
    0xd, 0x3, 0xd, 0x6, 0xd, 0x89, 0xa, 0xd, 0xd, 0xd, 0xe, 0xd, 0x8a, 0x5, 
    0xd, 0x8d, 0xa, 0xd, 0x3, 0xd, 0x2, 0x2, 0xe, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x2, 0x4, 0x3, 0x2, 0xa, 0xb, 
    0x4, 0x2, 0xe, 0xe, 0x10, 0x10, 0x9a, 0x2, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0x21, 0x3, 0x2, 0x2, 0x2, 0x6, 0x23, 0x3, 0x2, 0x2, 0x2, 0x8, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0x30, 0x3, 0x2, 0x2, 0x2, 0xc, 0x32, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0x47, 0x3, 0x2, 0x2, 0x2, 0x10, 0x61, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0x76, 0x3, 0x2, 0x2, 0x2, 0x14, 0x7c, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x18, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0x1e, 0x5, 0x4, 0x3, 0x2, 0x1b, 0x1e, 0x5, 0xc, 0x7, 0x2, 0x1c, 0x1e, 
    0x5, 0xe, 0x8, 0x2, 0x1d, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1b, 0x3, 
    0x2, 0x2, 0x2, 0x1d, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0x1f, 0x22, 0x5, 0x6, 0x4, 0x2, 0x20, 0x22, 0x5, 0x8, 0x5, 
    0x2, 0x21, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x21, 0x20, 0x3, 0x2, 0x2, 0x2, 
    0x22, 0x5, 0x3, 0x2, 0x2, 0x2, 0x23, 0x24, 0x7, 0x3, 0x2, 0x2, 0x24, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x25, 0x28, 0x7, 0x4, 0x2, 0x2, 0x26, 0x27, 
    0x7, 0x5, 0x2, 0x2, 0x27, 0x29, 0x5, 0xa, 0x6, 0x2, 0x28, 0x26, 0x3, 
    0x2, 0x2, 0x2, 0x28, 0x29, 0x3, 0x2, 0x2, 0x2, 0x29, 0x9, 0x3, 0x2, 
    0x2, 0x2, 0x2a, 0x2c, 0x5, 0x16, 0xc, 0x2, 0x2b, 0x2a, 0x3, 0x2, 0x2, 
    0x2, 0x2c, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2b, 0x3, 0x2, 0x2, 0x2, 
    0x2d, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x31, 0x3, 0x2, 0x2, 0x2, 0x2f, 
    0x31, 0x7, 0x6, 0x2, 0x2, 0x30, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x30, 0x2f, 
    0x3, 0x2, 0x2, 0x2, 0x31, 0xb, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x7, 
    0x7, 0x2, 0x2, 0x33, 0x38, 0x5, 0x18, 0xd, 0x2, 0x34, 0x35, 0x7, 0x5, 
    0x2, 0x2, 0x35, 0x37, 0x5, 0x14, 0xb, 0x2, 0x36, 0x34, 0x3, 0x2, 0x2, 
    0x2, 0x37, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x38, 0x36, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0x39, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3a, 
    0x38, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3c, 0x7, 0x8, 0x2, 0x2, 0x3c, 0x3e, 
    0x5, 0x12, 0xa, 0x2, 0x3d, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3e, 0x3, 
    0x2, 0x2, 0x2, 0x3e, 0x41, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x7, 0x9, 
    0x2, 0x2, 0x40, 0x42, 0x5, 0x12, 0xa, 0x2, 0x41, 0x3f, 0x3, 0x2, 0x2, 
    0x2, 0x41, 0x42, 0x3, 0x2, 0x2, 0x2, 0x42, 0x45, 0x3, 0x2, 0x2, 0x2, 
    0x43, 0x44, 0x9, 0x2, 0x2, 0x2, 0x44, 0x46, 0x5, 0x12, 0xa, 0x2, 0x45, 
    0x43, 0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x3, 0x2, 0x2, 0x2, 0x46, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0x7, 0x7, 0x2, 0x2, 0x48, 0x4d, 0x5, 
    0x18, 0xd, 0x2, 0x49, 0x4a, 0x7, 0x5, 0x2, 0x2, 0x4a, 0x4c, 0x5, 0x14, 
    0xb, 0x2, 0x4b, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4f, 0x3, 0x2, 0x2, 
    0x2, 0x4d, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0x3, 0x2, 0x2, 0x2, 
    0x4e, 0x52, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x50, 
    0x51, 0x7, 0x8, 0x2, 0x2, 0x51, 0x53, 0x5, 0x12, 0xa, 0x2, 0x52, 0x50, 
    0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 0x56, 0x3, 
    0x2, 0x2, 0x2, 0x54, 0x55, 0x7, 0x9, 0x2, 0x2, 0x55, 0x57, 0x5, 0x12, 
    0xa, 0x2, 0x56, 0x54, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x3, 0x2, 0x2, 
    0x2, 0x57, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x9, 0x2, 0x2, 0x2, 
    0x59, 0x5b, 0x5, 0x12, 0xa, 0x2, 0x5a, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5a, 
    0x5b, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5e, 
    0x5, 0x10, 0x9, 0x2, 0x5d, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x3, 
    0x2, 0x2, 0x2, 0x5f, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x3, 0x2, 
    0x2, 0x2, 0x60, 0xf, 0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x7, 0xc, 0x2, 
    0x2, 0x62, 0x67, 0x5, 0x18, 0xd, 0x2, 0x63, 0x64, 0x7, 0x5, 0x2, 0x2, 
    0x64, 0x66, 0x5, 0x14, 0xb, 0x2, 0x65, 0x63, 0x3, 0x2, 0x2, 0x2, 0x66, 
    0x69, 0x3, 0x2, 0x2, 0x2, 0x67, 0x65, 0x3, 0x2, 0x2, 0x2, 0x67, 0x68, 
    0x3, 0x2, 0x2, 0x2, 0x68, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x69, 0x67, 0x3, 
    0x2, 0x2, 0x2, 0x6a, 0x6b, 0x7, 0x8, 0x2, 0x2, 0x6b, 0x6d, 0x5, 0x12, 
    0xa, 0x2, 0x6c, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 0x3, 0x2, 0x2, 
    0x2, 0x6d, 0x70, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x7, 0x9, 0x2, 0x2, 
    0x6f, 0x71, 0x5, 0x12, 0xa, 0x2, 0x70, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x70, 
    0x71, 0x3, 0x2, 0x2, 0x2, 0x71, 0x74, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 
    0x9, 0x2, 0x2, 0x2, 0x73, 0x75, 0x5, 0x12, 0xa, 0x2, 0x74, 0x72, 0x3, 
    0x2, 0x2, 0x2, 0x74, 0x75, 0x3, 0x2, 0x2, 0x2, 0x75, 0x11, 0x3, 0x2, 
    0x2, 0x2, 0x76, 0x77, 0x7, 0x10, 0x2, 0x2, 0x77, 0x78, 0x7, 0xd, 0x2, 
    0x2, 0x78, 0x79, 0x7, 0x10, 0x2, 0x2, 0x79, 0x13, 0x3, 0x2, 0x2, 0x2, 
    0x7a, 0x7d, 0x7, 0x10, 0x2, 0x2, 0x7b, 0x7d, 0x5, 0x12, 0xa, 0x2, 0x7c, 
    0x7a, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x15, 
    0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x9, 0x3, 0x2, 0x2, 0x7f, 0x17, 0x3, 
    0x2, 0x2, 0x2, 0x80, 0x82, 0x7, 0xf, 0x2, 0x2, 0x81, 0x80, 0x3, 0x2, 
    0x2, 0x2, 0x81, 0x82, 0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0x3, 0x2, 0x2, 
    0x2, 0x83, 0x8d, 0x7, 0x10, 0x2, 0x2, 0x84, 0x86, 0x7, 0xe, 0x2, 0x2, 
    0x85, 0x84, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x3, 0x2, 0x2, 0x2, 0x86, 
    0x88, 0x3, 0x2, 0x2, 0x2, 0x87, 0x89, 0x9, 0x3, 0x2, 0x2, 0x88, 0x87, 
    0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x88, 0x3, 
    0x2, 0x2, 0x2, 0x8a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8d, 0x3, 0x2, 
    0x2, 0x2, 0x8c, 0x81, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x85, 0x3, 0x2, 0x2, 
    0x2, 0x8d, 0x19, 0x3, 0x2, 0x2, 0x2, 0x19, 0x1d, 0x21, 0x28, 0x2d, 0x30, 
    0x38, 0x3d, 0x41, 0x45, 0x4d, 0x52, 0x56, 0x5a, 0x5f, 0x67, 0x6c, 0x70, 
    0x74, 0x7c, 0x81, 0x85, 0x8a, 0x8c, 
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
