
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
    setState(35);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(32);
      dirCommands();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(33);
      execCommands();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(34);
      ioCommands();
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
    setState(39);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ShellGrammarParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(37);
        getDir();
        break;
      }

      case ShellGrammarParser::T__1: {
        enterOuterAlt(_localctx, 2);
        setState(38);
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
    setState(41);
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
    setState(43);
    match(ShellGrammarParser::T__1);
    setState(46);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellGrammarParser::T__2) {
      setState(44);
      match(ShellGrammarParser::T__2);
      setState(45);
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
  enterRule(_localctx, 8, ShellGrammarParser::RuleExecCommands);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(48);
    match(ShellGrammarParser::T__3);
    setState(49);
    match(ShellGrammarParser::T__2);
    setState(50);
    dynamic_cast<ExecCommandsContext *>(_localctx)->file = programName();
    setState(55);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ShellGrammarParser::T__2) {
      setState(51);
      match(ShellGrammarParser::T__2);
      setState(52);
      dynamic_cast<ExecCommandsContext *>(_localctx)->arg = arguments();
      setState(57);
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

ShellGrammarParser::InputCommandContext* ShellGrammarParser::IoCommandsContext::inputCommand() {
  return getRuleContext<ShellGrammarParser::InputCommandContext>(0);
}

ShellGrammarParser::OutputCommandContext* ShellGrammarParser::IoCommandsContext::outputCommand() {
  return getRuleContext<ShellGrammarParser::OutputCommandContext>(0);
}

ShellGrammarParser::ErrorCommandContext* ShellGrammarParser::IoCommandsContext::errorCommand() {
  return getRuleContext<ShellGrammarParser::ErrorCommandContext>(0);
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
    setState(61);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(58);
      inputCommand();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(59);
      outputCommand();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(60);
      errorCommand();
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

//----------------- InputCommandContext ------------------------------------------------------------------

ShellGrammarParser::InputCommandContext::InputCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ShellGrammarParser::ProgramNameContext* ShellGrammarParser::InputCommandContext::programName() {
  return getRuleContext<ShellGrammarParser::ProgramNameContext>(0);
}

ShellGrammarParser::InputContext* ShellGrammarParser::InputCommandContext::input() {
  return getRuleContext<ShellGrammarParser::InputContext>(0);
}

std::vector<ShellGrammarParser::ArgumentsContext *> ShellGrammarParser::InputCommandContext::arguments() {
  return getRuleContexts<ShellGrammarParser::ArgumentsContext>();
}

ShellGrammarParser::ArgumentsContext* ShellGrammarParser::InputCommandContext::arguments(size_t i) {
  return getRuleContext<ShellGrammarParser::ArgumentsContext>(i);
}


size_t ShellGrammarParser::InputCommandContext::getRuleIndex() const {
  return ShellGrammarParser::RuleInputCommand;
}

antlrcpp::Any ShellGrammarParser::InputCommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitInputCommand(this);
  else
    return visitor->visitChildren(this);
}

ShellGrammarParser::InputCommandContext* ShellGrammarParser::inputCommand() {
  InputCommandContext *_localctx = _tracker.createInstance<InputCommandContext>(_ctx, getState());
  enterRule(_localctx, 12, ShellGrammarParser::RuleInputCommand);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(63);
    match(ShellGrammarParser::T__3);
    setState(64);
    match(ShellGrammarParser::T__2);
    setState(65);
    dynamic_cast<InputCommandContext *>(_localctx)->file = programName();
    setState(70);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ShellGrammarParser::T__2) {
      setState(66);
      match(ShellGrammarParser::T__2);
      setState(67);
      dynamic_cast<InputCommandContext *>(_localctx)->arg = arguments();
      setState(72);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(73);
    match(ShellGrammarParser::T__4);
    setState(74);
    dynamic_cast<InputCommandContext *>(_localctx)->inputfile = input();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OutputCommandContext ------------------------------------------------------------------

ShellGrammarParser::OutputCommandContext::OutputCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ShellGrammarParser::ProgramNameContext* ShellGrammarParser::OutputCommandContext::programName() {
  return getRuleContext<ShellGrammarParser::ProgramNameContext>(0);
}

ShellGrammarParser::OutputContext* ShellGrammarParser::OutputCommandContext::output() {
  return getRuleContext<ShellGrammarParser::OutputContext>(0);
}

std::vector<ShellGrammarParser::ArgumentsContext *> ShellGrammarParser::OutputCommandContext::arguments() {
  return getRuleContexts<ShellGrammarParser::ArgumentsContext>();
}

ShellGrammarParser::ArgumentsContext* ShellGrammarParser::OutputCommandContext::arguments(size_t i) {
  return getRuleContext<ShellGrammarParser::ArgumentsContext>(i);
}


size_t ShellGrammarParser::OutputCommandContext::getRuleIndex() const {
  return ShellGrammarParser::RuleOutputCommand;
}

antlrcpp::Any ShellGrammarParser::OutputCommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitOutputCommand(this);
  else
    return visitor->visitChildren(this);
}

ShellGrammarParser::OutputCommandContext* ShellGrammarParser::outputCommand() {
  OutputCommandContext *_localctx = _tracker.createInstance<OutputCommandContext>(_ctx, getState());
  enterRule(_localctx, 14, ShellGrammarParser::RuleOutputCommand);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    match(ShellGrammarParser::T__3);
    setState(77);
    match(ShellGrammarParser::T__2);
    setState(78);
    dynamic_cast<OutputCommandContext *>(_localctx)->file = programName();
    setState(83);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ShellGrammarParser::T__2) {
      setState(79);
      match(ShellGrammarParser::T__2);
      setState(80);
      dynamic_cast<OutputCommandContext *>(_localctx)->arg = arguments();
      setState(85);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(86);
    dynamic_cast<OutputCommandContext *>(_localctx)->op = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == ShellGrammarParser::T__5

    || _la == ShellGrammarParser::T__6)) {
      dynamic_cast<OutputCommandContext *>(_localctx)->op = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(87);
    dynamic_cast<OutputCommandContext *>(_localctx)->outputfile = output();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ErrorCommandContext ------------------------------------------------------------------

ShellGrammarParser::ErrorCommandContext::ErrorCommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ShellGrammarParser::ProgramNameContext* ShellGrammarParser::ErrorCommandContext::programName() {
  return getRuleContext<ShellGrammarParser::ProgramNameContext>(0);
}

ShellGrammarParser::InputContext* ShellGrammarParser::ErrorCommandContext::input() {
  return getRuleContext<ShellGrammarParser::InputContext>(0);
}

ShellGrammarParser::ErrorContext* ShellGrammarParser::ErrorCommandContext::error() {
  return getRuleContext<ShellGrammarParser::ErrorContext>(0);
}

ShellGrammarParser::OutputContext* ShellGrammarParser::ErrorCommandContext::output() {
  return getRuleContext<ShellGrammarParser::OutputContext>(0);
}

std::vector<ShellGrammarParser::ArgumentsContext *> ShellGrammarParser::ErrorCommandContext::arguments() {
  return getRuleContexts<ShellGrammarParser::ArgumentsContext>();
}

ShellGrammarParser::ArgumentsContext* ShellGrammarParser::ErrorCommandContext::arguments(size_t i) {
  return getRuleContext<ShellGrammarParser::ArgumentsContext>(i);
}


size_t ShellGrammarParser::ErrorCommandContext::getRuleIndex() const {
  return ShellGrammarParser::RuleErrorCommand;
}

antlrcpp::Any ShellGrammarParser::ErrorCommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitErrorCommand(this);
  else
    return visitor->visitChildren(this);
}

ShellGrammarParser::ErrorCommandContext* ShellGrammarParser::errorCommand() {
  ErrorCommandContext *_localctx = _tracker.createInstance<ErrorCommandContext>(_ctx, getState());
  enterRule(_localctx, 16, ShellGrammarParser::RuleErrorCommand);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(89);
    match(ShellGrammarParser::T__3);
    setState(90);
    match(ShellGrammarParser::T__2);
    setState(91);
    dynamic_cast<ErrorCommandContext *>(_localctx)->file = programName();
    setState(96);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ShellGrammarParser::T__2) {
      setState(92);
      match(ShellGrammarParser::T__2);
      setState(93);
      dynamic_cast<ErrorCommandContext *>(_localctx)->arg = arguments();
      setState(98);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(99);
    match(ShellGrammarParser::T__4);
    setState(100);
    dynamic_cast<ErrorCommandContext *>(_localctx)->inputfile = input();
    setState(101);
    match(ShellGrammarParser::T__7);
    setState(102);
    dynamic_cast<ErrorCommandContext *>(_localctx)->errorfile = error();
    setState(103);
    dynamic_cast<ErrorCommandContext *>(_localctx)->op = _input->LT(1);
    _la = _input->LA(1);
    if (!(_la == ShellGrammarParser::T__5

    || _la == ShellGrammarParser::T__6)) {
      dynamic_cast<ErrorCommandContext *>(_localctx)->op = _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(104);
    dynamic_cast<ErrorCommandContext *>(_localctx)->outputfile = output();
   
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
  enterRule(_localctx, 18, ShellGrammarParser::RulePath);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(112);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ShellGrammarParser::T__10:
      case ShellGrammarParser::STRING: {
        enterOuterAlt(_localctx, 1);
        setState(107); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(106);
          dirName();
          setState(109); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == ShellGrammarParser::T__10

        || _la == ShellGrammarParser::STRING);
        break;
      }

      case ShellGrammarParser::T__8: {
        enterOuterAlt(_localctx, 2);
        setState(111);
        match(ShellGrammarParser::T__8);
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

//----------------- InputContext ------------------------------------------------------------------

ShellGrammarParser::InputContext::InputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ShellGrammarParser::InputContext::STRING() {
  return getTokens(ShellGrammarParser::STRING);
}

tree::TerminalNode* ShellGrammarParser::InputContext::STRING(size_t i) {
  return getToken(ShellGrammarParser::STRING, i);
}


size_t ShellGrammarParser::InputContext::getRuleIndex() const {
  return ShellGrammarParser::RuleInput;
}

antlrcpp::Any ShellGrammarParser::InputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitInput(this);
  else
    return visitor->visitChildren(this);
}

ShellGrammarParser::InputContext* ShellGrammarParser::input() {
  InputContext *_localctx = _tracker.createInstance<InputContext>(_ctx, getState());
  enterRule(_localctx, 20, ShellGrammarParser::RuleInput);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    match(ShellGrammarParser::STRING);
    setState(115);
    match(ShellGrammarParser::T__9);
    setState(116);
    match(ShellGrammarParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OutputContext ------------------------------------------------------------------

ShellGrammarParser::OutputContext::OutputContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ShellGrammarParser::OutputContext::STRING() {
  return getTokens(ShellGrammarParser::STRING);
}

tree::TerminalNode* ShellGrammarParser::OutputContext::STRING(size_t i) {
  return getToken(ShellGrammarParser::STRING, i);
}


size_t ShellGrammarParser::OutputContext::getRuleIndex() const {
  return ShellGrammarParser::RuleOutput;
}

antlrcpp::Any ShellGrammarParser::OutputContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitOutput(this);
  else
    return visitor->visitChildren(this);
}

ShellGrammarParser::OutputContext* ShellGrammarParser::output() {
  OutputContext *_localctx = _tracker.createInstance<OutputContext>(_ctx, getState());
  enterRule(_localctx, 22, ShellGrammarParser::RuleOutput);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(118);
    match(ShellGrammarParser::STRING);
    setState(119);
    match(ShellGrammarParser::T__9);
    setState(120);
    match(ShellGrammarParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ErrorContext ------------------------------------------------------------------

ShellGrammarParser::ErrorContext::ErrorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> ShellGrammarParser::ErrorContext::STRING() {
  return getTokens(ShellGrammarParser::STRING);
}

tree::TerminalNode* ShellGrammarParser::ErrorContext::STRING(size_t i) {
  return getToken(ShellGrammarParser::STRING, i);
}


size_t ShellGrammarParser::ErrorContext::getRuleIndex() const {
  return ShellGrammarParser::RuleError;
}

antlrcpp::Any ShellGrammarParser::ErrorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ShellGrammarVisitor*>(visitor))
    return parserVisitor->visitError(this);
  else
    return visitor->visitChildren(this);
}

ShellGrammarParser::ErrorContext* ShellGrammarParser::error() {
  ErrorContext *_localctx = _tracker.createInstance<ErrorContext>(_ctx, getState());
  enterRule(_localctx, 24, ShellGrammarParser::RuleError);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    match(ShellGrammarParser::STRING);
    setState(123);
    match(ShellGrammarParser::T__9);
    setState(124);
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
  enterRule(_localctx, 26, ShellGrammarParser::RuleArguments);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
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
  enterRule(_localctx, 28, ShellGrammarParser::RuleDirName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(128);
    _la = _input->LA(1);
    if (!(_la == ShellGrammarParser::T__10

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
  enterRule(_localctx, 30, ShellGrammarParser::RuleProgramName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(142);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(131);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ShellGrammarParser::T__11) {
        setState(130);
        match(ShellGrammarParser::T__11);
      }
      setState(133);
      match(ShellGrammarParser::STRING);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(135);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
      case 1: {
        setState(134);
        match(ShellGrammarParser::T__10);
        break;
      }

      }
      setState(138); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(137);
        _la = _input->LA(1);
        if (!(_la == ShellGrammarParser::T__10

        || _la == ShellGrammarParser::STRING)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(140); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == ShellGrammarParser::T__10

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
  "inputCommand", "outputCommand", "errorCommand", "path", "input", "output", 
  "error", "arguments", "dirName", "programName"
};

std::vector<std::string> ShellGrammarParser::_literalNames = {
  "", "'pwd'", "'cd'", "' '", "'execvp'", "' < '", "' > '", "' >> '", "' 2> '", 
  "'..'", "'.'", "'/'", "'./'"
};

std::vector<std::string> ShellGrammarParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "STRING", "WS"
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
    0x3, 0x10, 0x93, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x26, 0xa, 0x2, 0x3, 0x3, 0x3, 0x3, 0x5, 
    0x3, 0x2a, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x5, 0x5, 0x31, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x7, 0x6, 0x38, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x3b, 0xb, 0x6, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x40, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x47, 0xa, 0x8, 0xc, 0x8, 0xe, 
    0x8, 0x4a, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x54, 0xa, 0x9, 0xc, 0x9, 0xe, 
    0x9, 0x57, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x61, 0xa, 0xa, 0xc, 0xa, 0xe, 
    0xa, 0x64, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x6, 0xb, 0x6e, 0xa, 0xb, 0xd, 0xb, 0xe, 
    0xb, 0x6f, 0x3, 0xb, 0x5, 0xb, 0x73, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x11, 0x5, 0x11, 0x86, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x8a, 
    0xa, 0x11, 0x3, 0x11, 0x6, 0x11, 0x8d, 0xa, 0x11, 0xd, 0x11, 0xe, 0x11, 
    0x8e, 0x5, 0x11, 0x91, 0xa, 0x11, 0x3, 0x11, 0x2, 0x2, 0x12, 0x2, 0x4, 
    0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x2, 0x4, 0x3, 0x2, 0x8, 0x9, 0x4, 0x2, 0xd, 0xd, 0xf, 0xf, 0x92, 
    0x2, 0x25, 0x3, 0x2, 0x2, 0x2, 0x4, 0x29, 0x3, 0x2, 0x2, 0x2, 0x6, 0x2b, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xa, 0x32, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x3f, 0x3, 0x2, 0x2, 0x2, 0xe, 0x41, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x12, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x72, 0x3, 0x2, 0x2, 0x2, 0x16, 0x74, 0x3, 0x2, 0x2, 0x2, 0x18, 0x78, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x80, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0x82, 0x3, 0x2, 0x2, 0x2, 0x20, 0x90, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0x26, 0x5, 0x4, 0x3, 0x2, 0x23, 0x26, 0x5, 0xa, 0x6, 
    0x2, 0x24, 0x26, 0x5, 0xc, 0x7, 0x2, 0x25, 0x22, 0x3, 0x2, 0x2, 0x2, 
    0x25, 0x23, 0x3, 0x2, 0x2, 0x2, 0x25, 0x24, 0x3, 0x2, 0x2, 0x2, 0x26, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0x27, 0x2a, 0x5, 0x6, 0x4, 0x2, 0x28, 0x2a, 
    0x5, 0x8, 0x5, 0x2, 0x29, 0x27, 0x3, 0x2, 0x2, 0x2, 0x29, 0x28, 0x3, 
    0x2, 0x2, 0x2, 0x2a, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2c, 0x7, 0x3, 
    0x2, 0x2, 0x2c, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x30, 0x7, 0x4, 0x2, 
    0x2, 0x2e, 0x2f, 0x7, 0x5, 0x2, 0x2, 0x2f, 0x31, 0x5, 0x14, 0xb, 0x2, 
    0x30, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0x3, 0x2, 0x2, 0x2, 0x31, 
    0x9, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x7, 0x6, 0x2, 0x2, 0x33, 0x34, 
    0x7, 0x5, 0x2, 0x2, 0x34, 0x39, 0x5, 0x20, 0x11, 0x2, 0x35, 0x36, 0x7, 
    0x5, 0x2, 0x2, 0x36, 0x38, 0x5, 0x1c, 0xf, 0x2, 0x37, 0x35, 0x3, 0x2, 
    0x2, 0x2, 0x38, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x39, 0x37, 0x3, 0x2, 0x2, 
    0x2, 0x39, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3a, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0x3b, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x40, 0x5, 0xe, 0x8, 0x2, 0x3d, 
    0x40, 0x5, 0x10, 0x9, 0x2, 0x3e, 0x40, 0x5, 0x12, 0xa, 0x2, 0x3f, 0x3c, 
    0x3, 0x2, 0x2, 0x2, 0x3f, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3e, 0x3, 
    0x2, 0x2, 0x2, 0x40, 0xd, 0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 0x7, 0x6, 
    0x2, 0x2, 0x42, 0x43, 0x7, 0x5, 0x2, 0x2, 0x43, 0x48, 0x5, 0x20, 0x11, 
    0x2, 0x44, 0x45, 0x7, 0x5, 0x2, 0x2, 0x45, 0x47, 0x5, 0x1c, 0xf, 0x2, 
    0x46, 0x44, 0x3, 0x2, 0x2, 0x2, 0x47, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x48, 
    0x46, 0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4b, 
    0x3, 0x2, 0x2, 0x2, 0x4a, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x7, 
    0x7, 0x2, 0x2, 0x4c, 0x4d, 0x5, 0x16, 0xc, 0x2, 0x4d, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0x4e, 0x4f, 0x7, 0x6, 0x2, 0x2, 0x4f, 0x50, 0x7, 0x5, 0x2, 
    0x2, 0x50, 0x55, 0x5, 0x20, 0x11, 0x2, 0x51, 0x52, 0x7, 0x5, 0x2, 0x2, 
    0x52, 0x54, 0x5, 0x1c, 0xf, 0x2, 0x53, 0x51, 0x3, 0x2, 0x2, 0x2, 0x54, 
    0x57, 0x3, 0x2, 0x2, 0x2, 0x55, 0x53, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 
    0x3, 0x2, 0x2, 0x2, 0x56, 0x58, 0x3, 0x2, 0x2, 0x2, 0x57, 0x55, 0x3, 
    0x2, 0x2, 0x2, 0x58, 0x59, 0x9, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x5, 0x18, 
    0xd, 0x2, 0x5a, 0x11, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x7, 0x6, 0x2, 
    0x2, 0x5c, 0x5d, 0x7, 0x5, 0x2, 0x2, 0x5d, 0x62, 0x5, 0x20, 0x11, 0x2, 
    0x5e, 0x5f, 0x7, 0x5, 0x2, 0x2, 0x5f, 0x61, 0x5, 0x1c, 0xf, 0x2, 0x60, 
    0x5e, 0x3, 0x2, 0x2, 0x2, 0x61, 0x64, 0x3, 0x2, 0x2, 0x2, 0x62, 0x60, 
    0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x3, 0x2, 0x2, 0x2, 0x63, 0x65, 0x3, 
    0x2, 0x2, 0x2, 0x64, 0x62, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x7, 0x7, 
    0x2, 0x2, 0x66, 0x67, 0x5, 0x16, 0xc, 0x2, 0x67, 0x68, 0x7, 0xa, 0x2, 
    0x2, 0x68, 0x69, 0x5, 0x1a, 0xe, 0x2, 0x69, 0x6a, 0x9, 0x2, 0x2, 0x2, 
    0x6a, 0x6b, 0x5, 0x18, 0xd, 0x2, 0x6b, 0x13, 0x3, 0x2, 0x2, 0x2, 0x6c, 
    0x6e, 0x5, 0x1e, 0x10, 0x2, 0x6d, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 
    0x3, 0x2, 0x2, 0x2, 0x6f, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x3, 
    0x2, 0x2, 0x2, 0x70, 0x73, 0x3, 0x2, 0x2, 0x2, 0x71, 0x73, 0x7, 0xb, 
    0x2, 0x2, 0x72, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x72, 0x71, 0x3, 0x2, 0x2, 
    0x2, 0x73, 0x15, 0x3, 0x2, 0x2, 0x2, 0x74, 0x75, 0x7, 0xf, 0x2, 0x2, 
    0x75, 0x76, 0x7, 0xc, 0x2, 0x2, 0x76, 0x77, 0x7, 0xf, 0x2, 0x2, 0x77, 
    0x17, 0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x7, 0xf, 0x2, 0x2, 0x79, 0x7a, 
    0x7, 0xc, 0x2, 0x2, 0x7a, 0x7b, 0x7, 0xf, 0x2, 0x2, 0x7b, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0x7c, 0x7d, 0x7, 0xf, 0x2, 0x2, 0x7d, 0x7e, 0x7, 0xc, 
    0x2, 0x2, 0x7e, 0x7f, 0x7, 0xf, 0x2, 0x2, 0x7f, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0x80, 0x81, 0x7, 0xf, 0x2, 0x2, 0x81, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0x82, 0x83, 0x9, 0x3, 0x2, 0x2, 0x83, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x84, 
    0x86, 0x7, 0xe, 0x2, 0x2, 0x85, 0x84, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 
    0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x3, 0x2, 0x2, 0x2, 0x87, 0x91, 0x7, 
    0xf, 0x2, 0x2, 0x88, 0x8a, 0x7, 0xd, 0x2, 0x2, 0x89, 0x88, 0x3, 0x2, 
    0x2, 0x2, 0x89, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8c, 0x3, 0x2, 0x2, 
    0x2, 0x8b, 0x8d, 0x9, 0x3, 0x2, 0x2, 0x8c, 0x8b, 0x3, 0x2, 0x2, 0x2, 
    0x8d, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8e, 
    0x8f, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x91, 0x3, 0x2, 0x2, 0x2, 0x90, 0x85, 
    0x3, 0x2, 0x2, 0x2, 0x90, 0x89, 0x3, 0x2, 0x2, 0x2, 0x91, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0x10, 0x25, 0x29, 0x30, 0x39, 0x3f, 0x48, 0x55, 0x62, 
    0x6f, 0x72, 0x85, 0x89, 0x8e, 0x90, 
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
