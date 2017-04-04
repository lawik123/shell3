
// Generated from /home/lars/Desktop/test/shell3/Base/ShellGrammar.g4 by ANTLR 4.6

#pragma once


#include "antlr4-runtime.h"




class  ShellGrammarParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    STRING = 8, WS = 9
  };

  enum {
    RuleProgram = 0, RuleDirCommands = 1, RuleGetDir = 2, RuleChangeDir = 3, 
    RuleExecCommands = 4, RuleIoCommands = 5, RulePath = 6, RuleArguments = 7, 
    RuleDirName = 8, RuleFileName = 9
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
  class PathContext;
  class ArgumentsContext;
  class DirNameContext;
  class FileNameContext; 

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
   
    DirCommandsContext() : antlr4::ParserRuleContext() { }
    void copyFrom(DirCommandsContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  GetDirExpressionContext : public DirCommandsContext {
  public:
    GetDirExpressionContext(DirCommandsContext *ctx);

    GetDirContext *getDir();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ChangeDirExpressionContext : public DirCommandsContext {
  public:
    ChangeDirExpressionContext(DirCommandsContext *ctx);

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
    ShellGrammarParser::FileNameContext *file = nullptr;;
    ShellGrammarParser::ArgumentsContext *arg = nullptr;;
    ExecCommandsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FileNameContext *fileName();
    std::vector<ArgumentsContext *> arguments();
    ArgumentsContext* arguments(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExecCommandsContext* execCommands();

  class  IoCommandsContext : public antlr4::ParserRuleContext {
  public:
    IoCommandsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IoCommandsContext* ioCommands();

  class  PathContext : public antlr4::ParserRuleContext {
  public:
    PathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DirNameContext *> dirName();
    DirNameContext* dirName(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PathContext* path();

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

  class  FileNameContext : public antlr4::ParserRuleContext {
  public:
    FileNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FileNameContext* fileName();


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

