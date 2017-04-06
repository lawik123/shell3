
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
    setState(30);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(26);
      dirCommands();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(27);
      execCommands();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(28);
      ioCommands();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(29);
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
    setState(34);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ShellGrammarParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(32);
        getDir();
        break;
      }

      case ShellGrammarParser::T__1: {
        enterOuterAlt(_localctx, 2);
        setState(33);
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
    setState(36);
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
    setState(38);
    match(ShellGrammarParser::T__1);
    setState(41);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellGrammarParser::T__2) {
      setState(39);
      match(ShellGrammarParser::T__2);
      setState(40);
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
    setState(49);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ShellGrammarParser::T__11:
      case ShellGrammarParser::STRING: {
        enterOuterAlt(_localctx, 1);
        setState(44); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(43);
          dirName();
          setState(46); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == ShellGrammarParser::T__11

        || _la == ShellGrammarParser::STRING);
        break;
      }

      case ShellGrammarParser::T__3: {
        enterOuterAlt(_localctx, 2);
        setState(48);
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

//----------------- ExecCommandsContext ------------------------------------------------------------------

ShellGrammarParser::ExecCommandsContext::ExecCommandsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ShellGrammarParser::ProgramNameContext* ShellGrammarParser::ExecCommandsContext::programName() {
  return getRuleContext<ShellGrammarParser::ProgramNameContext>(0);
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
  enterRule(_localctx, 10, ShellGrammarParser::RuleExecCommands);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(51);
    match(ShellGrammarParser::T__4);
    setState(52);
    dynamic_cast<ExecCommandsContext *>(_localctx)->file = programName();
    setState(57);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ShellGrammarParser::T__2) {
      setState(53);
      match(ShellGrammarParser::T__2);
      setState(54);
      dynamic_cast<ExecCommandsContext *>(_localctx)->arg = arguments();
      setState(59);
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
  enterRule(_localctx, 12, ShellGrammarParser::RuleIoCommands);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(60);
    match(ShellGrammarParser::T__4);
    setState(61);
    dynamic_cast<IoCommandsContext *>(_localctx)->file = programName();
    setState(66);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ShellGrammarParser::T__2) {
      setState(62);
      match(ShellGrammarParser::T__2);
      setState(63);
      dynamic_cast<IoCommandsContext *>(_localctx)->arg = arguments();
      setState(68);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(71);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellGrammarParser::T__5) {
      setState(69);
      dynamic_cast<IoCommandsContext *>(_localctx)->inOp = match(ShellGrammarParser::T__5);
      setState(70);
      dynamic_cast<IoCommandsContext *>(_localctx)->inputfile = fileName();
    }
    setState(75);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellGrammarParser::T__6) {
      setState(73);
      dynamic_cast<IoCommandsContext *>(_localctx)->errOp = match(ShellGrammarParser::T__6);
      setState(74);
      dynamic_cast<IoCommandsContext *>(_localctx)->errorfile = fileName();
    }
    setState(79);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellGrammarParser::T__7

    || _la == ShellGrammarParser::T__8) {
      setState(77);
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
      setState(78);
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

std::vector<ShellGrammarParser::PipeContext *> ShellGrammarParser::PipeCommandsContext::pipe() {
  return getRuleContexts<ShellGrammarParser::PipeContext>();
}

ShellGrammarParser::PipeContext* ShellGrammarParser::PipeCommandsContext::pipe(size_t i) {
  return getRuleContext<ShellGrammarParser::PipeContext>(i);
}

std::vector<ShellGrammarParser::ArgumentsContext *> ShellGrammarParser::PipeCommandsContext::arguments() {
  return getRuleContexts<ShellGrammarParser::ArgumentsContext>();
}

ShellGrammarParser::ArgumentsContext* ShellGrammarParser::PipeCommandsContext::arguments(size_t i) {
  return getRuleContext<ShellGrammarParser::ArgumentsContext>(i);
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
  enterRule(_localctx, 14, ShellGrammarParser::RulePipeCommands);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    match(ShellGrammarParser::T__4);
    setState(82);
    dynamic_cast<PipeCommandsContext *>(_localctx)->startFile = programName();
    setState(87);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ShellGrammarParser::T__2) {
      setState(83);
      match(ShellGrammarParser::T__2);
      setState(84);
      dynamic_cast<PipeCommandsContext *>(_localctx)->startArg = arguments();
      setState(89);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(91); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(90);
      pipe();
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

//----------------- PipeContext ------------------------------------------------------------------

ShellGrammarParser::PipeContext::PipeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ShellGrammarParser::ProgramNameContext* ShellGrammarParser::PipeContext::programName() {
  return getRuleContext<ShellGrammarParser::ProgramNameContext>(0);
}

std::vector<ShellGrammarParser::ArgumentsContext *> ShellGrammarParser::PipeContext::arguments() {
  return getRuleContexts<ShellGrammarParser::ArgumentsContext>();
}

ShellGrammarParser::ArgumentsContext* ShellGrammarParser::PipeContext::arguments(size_t i) {
  return getRuleContext<ShellGrammarParser::ArgumentsContext>(i);
}


size_t ShellGrammarParser::PipeContext::getRuleIndex() const {
  return ShellGrammarParser::RulePipe;
}

antlrcpp::Any ShellGrammarParser::PipeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitPipe(this);
  else
    return visitor->visitChildren(this);
}

ShellGrammarParser::PipeContext* ShellGrammarParser::pipe() {
  PipeContext *_localctx = _tracker.createInstance<PipeContext>(_ctx, getState());
  enterRule(_localctx, 16, ShellGrammarParser::RulePipe);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(95);
    match(ShellGrammarParser::T__9);
    setState(96);
    dynamic_cast<PipeContext *>(_localctx)->file = programName();
    setState(101);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ShellGrammarParser::T__2) {
      setState(97);
      match(ShellGrammarParser::T__2);
      setState(98);
      dynamic_cast<PipeContext *>(_localctx)->arg = arguments();
      setState(103);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    match(ShellGrammarParser::STRING);
    setState(105);
    match(ShellGrammarParser::T__10);
    setState(106);
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
  enterRule(_localctx, 20, ShellGrammarParser::RuleArguments);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(110);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(108);
      match(ShellGrammarParser::STRING);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(109);
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
  enterRule(_localctx, 22, ShellGrammarParser::RuleDirName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
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
  enterRule(_localctx, 24, ShellGrammarParser::RuleProgramName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(126);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(115);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ShellGrammarParser::T__12) {
        setState(114);
        match(ShellGrammarParser::T__12);
      }
      setState(117);
      match(ShellGrammarParser::STRING);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(119);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
      case 1: {
        setState(118);
        match(ShellGrammarParser::T__11);
        break;
      }

      }
      setState(122); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(121);
        _la = _input->LA(1);
        if (!(_la == ShellGrammarParser::T__11

        || _la == ShellGrammarParser::STRING)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(124); 
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
  "program", "dirCommands", "getDir", "changeDir", "path", "execCommands", 
  "ioCommands", "pipeCommands", "pipe", "fileName", "arguments", "dirName", 
  "programName"
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
    0x3, 0x11, 0x83, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x21, 0xa, 0x2, 0x3, 0x3, 
    0x3, 0x3, 0x5, 0x3, 0x25, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x5, 0x5, 0x2c, 0xa, 0x5, 0x3, 0x6, 0x6, 0x6, 0x2f, 0xa, 
    0x6, 0xd, 0x6, 0xe, 0x6, 0x30, 0x3, 0x6, 0x5, 0x6, 0x34, 0xa, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x3a, 0xa, 0x7, 0xc, 0x7, 
    0xe, 0x7, 0x3d, 0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 
    0x8, 0x43, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x46, 0xb, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x5, 0x8, 0x4a, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x4e, 0xa, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x52, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x58, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x5b, 
    0xb, 0x9, 0x3, 0x9, 0x6, 0x9, 0x5e, 0xa, 0x9, 0xd, 0x9, 0xe, 0x9, 0x5f, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x66, 0xa, 0xa, 0xc, 
    0xa, 0xe, 0xa, 0x69, 0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x71, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xe, 0x5, 0xe, 0x76, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x7a, 0xa, 
    0xe, 0x3, 0xe, 0x6, 0xe, 0x7d, 0xa, 0xe, 0xd, 0xe, 0xe, 0xe, 0x7e, 0x5, 
    0xe, 0x81, 0xa, 0xe, 0x3, 0xe, 0x2, 0x2, 0xf, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x2, 0x4, 0x3, 0x2, 0xa, 
    0xb, 0x4, 0x2, 0xe, 0xe, 0x10, 0x10, 0x89, 0x2, 0x20, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0x24, 0x3, 0x2, 0x2, 0x2, 0x6, 0x26, 0x3, 0x2, 0x2, 0x2, 0x8, 
    0x28, 0x3, 0x2, 0x2, 0x2, 0xa, 0x33, 0x3, 0x2, 0x2, 0x2, 0xc, 0x35, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x10, 0x53, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x61, 0x3, 0x2, 0x2, 0x2, 0x14, 0x6a, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x70, 0x3, 0x2, 0x2, 0x2, 0x18, 0x72, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x80, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x21, 0x5, 0x4, 0x3, 0x2, 
    0x1d, 0x21, 0x5, 0xc, 0x7, 0x2, 0x1e, 0x21, 0x5, 0xe, 0x8, 0x2, 0x1f, 
    0x21, 0x5, 0x10, 0x9, 0x2, 0x20, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x20, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x20, 0x1f, 0x3, 
    0x2, 0x2, 0x2, 0x21, 0x3, 0x3, 0x2, 0x2, 0x2, 0x22, 0x25, 0x5, 0x6, 
    0x4, 0x2, 0x23, 0x25, 0x5, 0x8, 0x5, 0x2, 0x24, 0x22, 0x3, 0x2, 0x2, 
    0x2, 0x24, 0x23, 0x3, 0x2, 0x2, 0x2, 0x25, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0x26, 0x27, 0x7, 0x3, 0x2, 0x2, 0x27, 0x7, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0x2b, 0x7, 0x4, 0x2, 0x2, 0x29, 0x2a, 0x7, 0x5, 0x2, 0x2, 0x2a, 0x2c, 
    0x5, 0xa, 0x6, 0x2, 0x2b, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2c, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2f, 0x5, 0x18, 
    0xd, 0x2, 0x2e, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x3, 0x2, 0x2, 
    0x2, 0x30, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0x3, 0x2, 0x2, 0x2, 
    0x31, 0x34, 0x3, 0x2, 0x2, 0x2, 0x32, 0x34, 0x7, 0x6, 0x2, 0x2, 0x33, 
    0x2e, 0x3, 0x2, 0x2, 0x2, 0x33, 0x32, 0x3, 0x2, 0x2, 0x2, 0x34, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x7, 0x7, 0x2, 0x2, 0x36, 0x3b, 0x5, 
    0x1a, 0xe, 0x2, 0x37, 0x38, 0x7, 0x5, 0x2, 0x2, 0x38, 0x3a, 0x5, 0x16, 
    0xc, 0x2, 0x39, 0x37, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3d, 0x3, 0x2, 0x2, 
    0x2, 0x3b, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3c, 0x3, 0x2, 0x2, 0x2, 
    0x3c, 0xd, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3e, 
    0x3f, 0x7, 0x7, 0x2, 0x2, 0x3f, 0x44, 0x5, 0x1a, 0xe, 0x2, 0x40, 0x41, 
    0x7, 0x5, 0x2, 0x2, 0x41, 0x43, 0x5, 0x16, 0xc, 0x2, 0x42, 0x40, 0x3, 
    0x2, 0x2, 0x2, 0x43, 0x46, 0x3, 0x2, 0x2, 0x2, 0x44, 0x42, 0x3, 0x2, 
    0x2, 0x2, 0x44, 0x45, 0x3, 0x2, 0x2, 0x2, 0x45, 0x49, 0x3, 0x2, 0x2, 
    0x2, 0x46, 0x44, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0x7, 0x8, 0x2, 0x2, 
    0x48, 0x4a, 0x5, 0x14, 0xb, 0x2, 0x49, 0x47, 0x3, 0x2, 0x2, 0x2, 0x49, 
    0x4a, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 
    0x7, 0x9, 0x2, 0x2, 0x4c, 0x4e, 0x5, 0x14, 0xb, 0x2, 0x4d, 0x4b, 0x3, 
    0x2, 0x2, 0x2, 0x4d, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x51, 0x3, 0x2, 
    0x2, 0x2, 0x4f, 0x50, 0x9, 0x2, 0x2, 0x2, 0x50, 0x52, 0x5, 0x14, 0xb, 
    0x2, 0x51, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0xf, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x7, 0x7, 0x2, 0x2, 0x54, 
    0x59, 0x5, 0x1a, 0xe, 0x2, 0x55, 0x56, 0x7, 0x5, 0x2, 0x2, 0x56, 0x58, 
    0x5, 0x16, 0xc, 0x2, 0x57, 0x55, 0x3, 0x2, 0x2, 0x2, 0x58, 0x5b, 0x3, 
    0x2, 0x2, 0x2, 0x59, 0x57, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x3, 0x2, 
    0x2, 0x2, 0x5a, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x59, 0x3, 0x2, 0x2, 
    0x2, 0x5c, 0x5e, 0x5, 0x12, 0xa, 0x2, 0x5d, 0x5c, 0x3, 0x2, 0x2, 0x2, 
    0x5e, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5f, 
    0x60, 0x3, 0x2, 0x2, 0x2, 0x60, 0x11, 0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 
    0x7, 0xc, 0x2, 0x2, 0x62, 0x67, 0x5, 0x1a, 0xe, 0x2, 0x63, 0x64, 0x7, 
    0x5, 0x2, 0x2, 0x64, 0x66, 0x5, 0x16, 0xc, 0x2, 0x65, 0x63, 0x3, 0x2, 
    0x2, 0x2, 0x66, 0x69, 0x3, 0x2, 0x2, 0x2, 0x67, 0x65, 0x3, 0x2, 0x2, 
    0x2, 0x67, 0x68, 0x3, 0x2, 0x2, 0x2, 0x68, 0x13, 0x3, 0x2, 0x2, 0x2, 
    0x69, 0x67, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x7, 0x10, 0x2, 0x2, 0x6b, 
    0x6c, 0x7, 0xd, 0x2, 0x2, 0x6c, 0x6d, 0x7, 0x10, 0x2, 0x2, 0x6d, 0x15, 
    0x3, 0x2, 0x2, 0x2, 0x6e, 0x71, 0x7, 0x10, 0x2, 0x2, 0x6f, 0x71, 0x5, 
    0x14, 0xb, 0x2, 0x70, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x70, 0x6f, 0x3, 0x2, 
    0x2, 0x2, 0x71, 0x17, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x9, 0x3, 0x2, 
    0x2, 0x73, 0x19, 0x3, 0x2, 0x2, 0x2, 0x74, 0x76, 0x7, 0xf, 0x2, 0x2, 
    0x75, 0x74, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x3, 0x2, 0x2, 0x2, 0x76, 
    0x77, 0x3, 0x2, 0x2, 0x2, 0x77, 0x81, 0x7, 0x10, 0x2, 0x2, 0x78, 0x7a, 
    0x7, 0xe, 0x2, 0x2, 0x79, 0x78, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x3, 
    0x2, 0x2, 0x2, 0x7a, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7d, 0x9, 0x3, 
    0x2, 0x2, 0x7c, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x3, 0x2, 0x2, 
    0x2, 0x7e, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x3, 0x2, 0x2, 0x2, 
    0x7f, 0x81, 0x3, 0x2, 0x2, 0x2, 0x80, 0x75, 0x3, 0x2, 0x2, 0x2, 0x80, 
    0x79, 0x3, 0x2, 0x2, 0x2, 0x81, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x14, 0x20, 
    0x24, 0x2b, 0x30, 0x33, 0x3b, 0x44, 0x49, 0x4d, 0x51, 0x59, 0x5f, 0x67, 
    0x70, 0x75, 0x79, 0x7e, 0x80, 
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
