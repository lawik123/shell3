
// Generated from /home/lars/Desktop/test/shell3/Base/ShellGrammar.g4 by ANTLR 4.6

#pragma once


#include "antlr4-runtime.h"




class  ShellGrammarParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, STRING = 11, WS = 12
  };

  enum {
    RuleProgram = 0, RuleDirCommands = 1, RuleGetDir = 2, RuleChangeDir = 3, 
    RuleExecCommands = 4, RuleIoCommands = 5, RuleInputCommand = 6, RuleOutputCommand = 7, 
    RulePath = 8, RuleInput = 9, RuleOutput = 10, RuleArguments = 11, RuleDirName = 12, 
    RuleProgramName = 13
  };

  ShellGrammarParser(antlr4::TokenStream *input);
  ~ShellGrammarParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class DirCommandsContext;
  class GetDirContext;
  class ChangeDirContext;
  class ExecCommandsContext;
  class IoCommandsContext;
  class InputCommandContext;
  class OutputCommandContext;
  class PathContext;
  class InputContext;
  class OutputContext;
  class ArgumentsContext;
  class DirNameContext;
  class ProgramNameContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DirCommandsContext *dirCommands();
    ExecCommandsContext *execCommands();
    IoCommandsContext *ioCommands();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  DirCommandsContext : public antlr4::ParserRuleContext {
  public:
    DirCommandsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GetDirContext *getDir();
    ChangeDirContext *changeDir();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DirCommandsContext* dirCommands();

  class  GetDirContext : public antlr4::ParserRuleContext {
  public:
    GetDirContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GetDirContext* getDir();

  class  ChangeDirContext : public antlr4::ParserRuleContext {
  public:
    ShellGrammarParser::PathContext *dirPath = nullptr;;
    ChangeDirContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PathContext *path();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ChangeDirContext* changeDir();

  class  ExecCommandsContext : public antlr4::ParserRuleContext {
  public:
    ShellGrammarParser::ProgramNameContext *file = nullptr;;
    ShellGrammarParser::ArgumentsContext *arg = nullptr;;
    ExecCommandsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProgramNameContext *programName();
    std::vector<ArgumentsContext *> arguments();
    ArgumentsContext* arguments(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExecCommandsContext* execCommands();

  class  IoCommandsContext : public antlr4::ParserRuleContext {
  public:
    IoCommandsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InputCommandContext *inputCommand();
    OutputCommandContext *outputCommand();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IoCommandsContext* ioCommands();

  class  InputCommandContext : public antlr4::ParserRuleContext {
  public:
    ShellGrammarParser::InputContext *inputfile = nullptr;;
    InputCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExecCommandsContext *execCommands();
    InputContext *input();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InputCommandContext* inputCommand();

  class  OutputCommandContext : public antlr4::ParserRuleContext {
  public:
    ShellGrammarParser::ProgramNameContext *file = nullptr;;
    ShellGrammarParser::ArgumentsContext *arg = nullptr;;
    ShellGrammarParser::OutputContext *outputfile = nullptr;;
    OutputCommandContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProgramNameContext *programName();
    OutputContext *output();
    std::vector<ArgumentsContext *> arguments();
    ArgumentsContext* arguments(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OutputCommandContext* outputCommand();

  class  PathContext : public antlr4::ParserRuleContext {
  public:
    PathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DirNameContext *> dirName();
    DirNameContext* dirName(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PathContext* path();

  class  InputContext : public antlr4::ParserRuleContext {
  public:
    InputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InputContext* input();

  class  OutputContext : public antlr4::ParserRuleContext {
  public:
    OutputContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OutputContext* output();

  class  ArgumentsContext : public antlr4::ParserRuleContext {
  public:
    ArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentsContext* arguments();

  class  DirNameContext : public antlr4::ParserRuleContext {
  public:
    DirNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DirNameContext* dirName();

  class  ProgramNameContext : public antlr4::ParserRuleContext {
  public:
    ProgramNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramNameContext* programName();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

