
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
    setState(31);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(28);
      dirCommands();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(29);
      execCommands();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(30);
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
    setState(35);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ShellGrammarParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(33);
        getDir();
        break;
      }

      case ShellGrammarParser::T__1: {
        enterOuterAlt(_localctx, 2);
        setState(34);
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
    setState(37);
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
    setState(39);
    match(ShellGrammarParser::T__1);
    setState(42);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ShellGrammarParser::T__2) {
      setState(40);
      match(ShellGrammarParser::T__2);
      setState(41);
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
    setState(44);
    match(ShellGrammarParser::T__3);
    setState(45);
    match(ShellGrammarParser::T__2);
    setState(46);
    dynamic_cast<ExecCommandsContext *>(_localctx)->file = programName();
    setState(51);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ShellGrammarParser::T__2) {
      setState(47);
      match(ShellGrammarParser::T__2);
      setState(48);
      dynamic_cast<ExecCommandsContext *>(_localctx)->arg = arguments();
      setState(53);
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
    setState(56);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(54);
      inputCommand();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(55);
      outputCommand();
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

ShellGrammarParser::ExecCommandsContext* ShellGrammarParser::InputCommandContext::execCommands() {
  return getRuleContext<ShellGrammarParser::ExecCommandsContext>(0);
}

ShellGrammarParser::InputContext* ShellGrammarParser::InputCommandContext::input() {
  return getRuleContext<ShellGrammarParser::InputContext>(0);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
    execCommands();
    setState(59);
    match(ShellGrammarParser::T__4);
    setState(60);
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
    setState(62);
    match(ShellGrammarParser::T__3);
    setState(63);
    match(ShellGrammarParser::T__2);
    setState(64);
    dynamic_cast<OutputCommandContext *>(_localctx)->file = programName();
    setState(69);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ShellGrammarParser::T__2) {
      setState(65);
      match(ShellGrammarParser::T__2);
      setState(66);
      dynamic_cast<OutputCommandContext *>(_localctx)->arg = arguments();
      setState(71);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(72);
    match(ShellGrammarParser::T__5);
    setState(73);
    dynamic_cast<OutputCommandContext *>(_localctx)->outputfile = output();
   
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
  enterRule(_localctx, 16, ShellGrammarParser::RulePath);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(81);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ShellGrammarParser::T__8:
      case ShellGrammarParser::STRING: {
        enterOuterAlt(_localctx, 1);
        setState(76); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(75);
          dirName();
          setState(78); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while (_la == ShellGrammarParser::T__8

        || _la == ShellGrammarParser::STRING);
        break;
      }

      case ShellGrammarParser::T__6: {
        enterOuterAlt(_localctx, 2);
        setState(80);
        match(ShellGrammarParser::T__6);
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
  enterRule(_localctx, 18, ShellGrammarParser::RuleInput);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
    match(ShellGrammarParser::STRING);
    setState(84);
    match(ShellGrammarParser::T__7);
    setState(85);
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
  enterRule(_localctx, 20, ShellGrammarParser::RuleOutput);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(87);
    match(ShellGrammarParser::STRING);
    setState(88);
    match(ShellGrammarParser::T__7);
    setState(89);
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
  enterRule(_localctx, 22, ShellGrammarParser::RuleArguments);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(91);
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
  enterRule(_localctx, 24, ShellGrammarParser::RuleDirName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(93);
    _la = _input->LA(1);
    if (!(_la == ShellGrammarParser::T__8

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
  enterRule(_localctx, 26, ShellGrammarParser::RuleProgramName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(107);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(96);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ShellGrammarParser::T__9) {
        setState(95);
        match(ShellGrammarParser::T__9);
      }
      setState(98);
      match(ShellGrammarParser::STRING);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(100);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
      case 1: {
        setState(99);
        match(ShellGrammarParser::T__8);
        break;
      }

      }
      setState(103); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(102);
        _la = _input->LA(1);
        if (!(_la == ShellGrammarParser::T__8

        || _la == ShellGrammarParser::STRING)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(105); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == ShellGrammarParser::T__8

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
  "inputCommand", "outputCommand", "path", "input", "output", "arguments", 
  "dirName", "programName"
};

std::vector<std::string> ShellGrammarParser::_literalNames = {
  "", "'pwd'", "'cd'", "' '", "'execvp'", "' < '", "' > '", "'..'", "'.'", 
  "'/'", "'./'"
};

std::vector<std::string> ShellGrammarParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "STRING", "WS"
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
    0x3, 0xe, 0x70, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x22, 0xa, 0x2, 
    0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x26, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x2d, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x34, 0xa, 0x6, 0xc, 0x6, 0xe, 
    0x6, 0x37, 0xb, 0x6, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x3b, 0xa, 0x7, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x7, 0x9, 0x46, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x49, 0xb, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x6, 0xa, 0x4f, 0xa, 0xa, 
    0xd, 0xa, 0xe, 0xa, 0x50, 0x3, 0xa, 0x5, 0xa, 0x54, 0xa, 0xa, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x5, 0xf, 0x63, 0xa, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x67, 0xa, 0xf, 0x3, 0xf, 0x6, 0xf, 
    0x6a, 0xa, 0xf, 0xd, 0xf, 0xe, 0xf, 0x6b, 0x5, 0xf, 0x6e, 0xa, 0xf, 
    0x3, 0xf, 0x2, 0x2, 0x10, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 
    0x14, 0x16, 0x18, 0x1a, 0x1c, 0x2, 0x3, 0x4, 0x2, 0xb, 0xb, 0xd, 0xd, 
    0x6e, 0x2, 0x21, 0x3, 0x2, 0x2, 0x2, 0x4, 0x25, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x27, 0x3, 0x2, 0x2, 0x2, 0x8, 0x29, 0x3, 0x2, 0x2, 0x2, 0xa, 0x2e, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x3a, 0x3, 0x2, 0x2, 0x2, 0xe, 0x3c, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x40, 0x3, 0x2, 0x2, 0x2, 0x12, 0x53, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x55, 0x3, 0x2, 0x2, 0x2, 0x16, 0x59, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0x6d, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x22, 0x5, 0x4, 0x3, 0x2, 0x1f, 0x22, 
    0x5, 0xa, 0x6, 0x2, 0x20, 0x22, 0x5, 0xc, 0x7, 0x2, 0x21, 0x1e, 0x3, 
    0x2, 0x2, 0x2, 0x21, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x21, 0x20, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0x3, 0x3, 0x2, 0x2, 0x2, 0x23, 0x26, 0x5, 0x6, 0x4, 
    0x2, 0x24, 0x26, 0x5, 0x8, 0x5, 0x2, 0x25, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0x25, 0x24, 0x3, 0x2, 0x2, 0x2, 0x26, 0x5, 0x3, 0x2, 0x2, 0x2, 0x27, 
    0x28, 0x7, 0x3, 0x2, 0x2, 0x28, 0x7, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2c, 
    0x7, 0x4, 0x2, 0x2, 0x2a, 0x2b, 0x7, 0x5, 0x2, 0x2, 0x2b, 0x2d, 0x5, 
    0x12, 0xa, 0x2, 0x2c, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x3, 0x2, 
    0x2, 0x2, 0x2d, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x7, 0x6, 0x2, 
    0x2, 0x2f, 0x30, 0x7, 0x5, 0x2, 0x2, 0x30, 0x35, 0x5, 0x1c, 0xf, 0x2, 
    0x31, 0x32, 0x7, 0x5, 0x2, 0x2, 0x32, 0x34, 0x5, 0x18, 0xd, 0x2, 0x33, 
    0x31, 0x3, 0x2, 0x2, 0x2, 0x34, 0x37, 0x3, 0x2, 0x2, 0x2, 0x35, 0x33, 
    0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x3, 0x2, 0x2, 0x2, 0x36, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0x37, 0x35, 0x3, 0x2, 0x2, 0x2, 0x38, 0x3b, 0x5, 0xe, 
    0x8, 0x2, 0x39, 0x3b, 0x5, 0x10, 0x9, 0x2, 0x3a, 0x38, 0x3, 0x2, 0x2, 
    0x2, 0x3a, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3b, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0x3c, 0x3d, 0x5, 0xa, 0x6, 0x2, 0x3d, 0x3e, 0x7, 0x7, 0x2, 0x2, 0x3e, 
    0x3f, 0x5, 0x14, 0xb, 0x2, 0x3f, 0xf, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 
    0x7, 0x6, 0x2, 0x2, 0x41, 0x42, 0x7, 0x5, 0x2, 0x2, 0x42, 0x47, 0x5, 
    0x1c, 0xf, 0x2, 0x43, 0x44, 0x7, 0x5, 0x2, 0x2, 0x44, 0x46, 0x5, 0x18, 
    0xd, 0x2, 0x45, 0x43, 0x3, 0x2, 0x2, 0x2, 0x46, 0x49, 0x3, 0x2, 0x2, 
    0x2, 0x47, 0x45, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0x3, 0x2, 0x2, 0x2, 
    0x48, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x49, 0x47, 0x3, 0x2, 0x2, 0x2, 0x4a, 
    0x4b, 0x7, 0x8, 0x2, 0x2, 0x4b, 0x4c, 0x5, 0x16, 0xc, 0x2, 0x4c, 0x11, 
    0x3, 0x2, 0x2, 0x2, 0x4d, 0x4f, 0x5, 0x1a, 0xe, 0x2, 0x4e, 0x4d, 0x3, 
    0x2, 0x2, 0x2, 0x4f, 0x50, 0x3, 0x2, 0x2, 0x2, 0x50, 0x4e, 0x3, 0x2, 
    0x2, 0x2, 0x50, 0x51, 0x3, 0x2, 0x2, 0x2, 0x51, 0x54, 0x3, 0x2, 0x2, 
    0x2, 0x52, 0x54, 0x7, 0x9, 0x2, 0x2, 0x53, 0x4e, 0x3, 0x2, 0x2, 0x2, 
    0x53, 0x52, 0x3, 0x2, 0x2, 0x2, 0x54, 0x13, 0x3, 0x2, 0x2, 0x2, 0x55, 
    0x56, 0x7, 0xd, 0x2, 0x2, 0x56, 0x57, 0x7, 0xa, 0x2, 0x2, 0x57, 0x58, 
    0x7, 0xd, 0x2, 0x2, 0x58, 0x15, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x7, 
    0xd, 0x2, 0x2, 0x5a, 0x5b, 0x7, 0xa, 0x2, 0x2, 0x5b, 0x5c, 0x7, 0xd, 
    0x2, 0x2, 0x5c, 0x17, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x7, 0xd, 0x2, 
    0x2, 0x5e, 0x19, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x9, 0x2, 0x2, 0x2, 
    0x60, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x61, 0x63, 0x7, 0xc, 0x2, 0x2, 0x62, 
    0x61, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x3, 0x2, 0x2, 0x2, 0x63, 0x64, 
    0x3, 0x2, 0x2, 0x2, 0x64, 0x6e, 0x7, 0xd, 0x2, 0x2, 0x65, 0x67, 0x7, 
    0xb, 0x2, 0x2, 0x66, 0x65, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x3, 0x2, 
    0x2, 0x2, 0x67, 0x69, 0x3, 0x2, 0x2, 0x2, 0x68, 0x6a, 0x9, 0x2, 0x2, 
    0x2, 0x69, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x3, 0x2, 0x2, 0x2, 
    0x6b, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6c, 
    0x6e, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x62, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x66, 
    0x3, 0x2, 0x2, 0x2, 0x6e, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xe, 0x21, 0x25, 
    0x2c, 0x35, 0x3a, 0x47, 0x50, 0x53, 0x62, 0x66, 0x6b, 0x6d, 
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
