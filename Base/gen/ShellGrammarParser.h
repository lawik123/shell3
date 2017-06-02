
// Generated from /home/lars/Desktop/test/shell3/Base/ShellGrammar.g4 by ANTLR 4.6

#pragma once


#include "antlr4-runtime.h"




class  ShellGrammarParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, STRING = 14, 
    WS = 15
  };

  enum {
    RuleProgram = 0, RuleDirCommands = 1, RuleGetDir = 2, RuleChangeDir = 3, 
    RulePath = 4, RuleIoCommands = 5, RulePipeCommands = 6, RulePipeExpr = 7, 
    RuleFileName = 8, RuleArguments = 9, RuleDirName = 10, RuleProgramName = 11
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
  class PathContext;
  class IoCommandsContext;
  class PipeCommandsContext;
  class PipeExprContext;
  class FileNameContext;
  class ArgumentsContext;
  class DirNameContext;
  class ProgramNameContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DirCommandsContext *dirCommands();
    IoCommandsContext *ioCommands();
    PipeCommandsContext *pipeCommands();

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

  class  PathContext : public antlr4::ParserRuleContext {
  public:
    PathContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DirNameContext *> dirName();
    DirNameContext* dirName(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PathContext* path();

  class  IoCommandsContext : public antlr4::ParserRuleContext {
  public:
    ShellGrammarParser::ProgramNameContext *file = nullptr;;
    ShellGrammarParser::ArgumentsContext *arg = nullptr;;
    antlr4::Token *inOp = nullptr;;
    ShellGrammarParser::FileNameContext *inputfile = nullptr;;
    antlr4::Token *errOp = nullptr;;
    ShellGrammarParser::FileNameContext *errorfile = nullptr;;
    antlr4::Token *outOp = nullptr;;
    ShellGrammarParser::FileNameContext *outputfile = nullptr;;
    IoCommandsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProgramNameContext *programName();
    std::vector<ArgumentsContext *> arguments();
    ArgumentsContext* arguments(size_t i);
    std::vector<FileNameContext *> fileName();
    FileNameContext* fileName(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IoCommandsContext* ioCommands();

  class  PipeCommandsContext : public antlr4::ParserRuleContext {
  public:
    ShellGrammarParser::ProgramNameContext *startFile = nullptr;;
    ShellGrammarParser::ArgumentsContext *startArg = nullptr;;
    antlr4::Token *inOp = nullptr;;
    ShellGrammarParser::FileNameContext *inputfile = nullptr;;
    antlr4::Token *errOp = nullptr;;
    ShellGrammarParser::FileNameContext *errorfile = nullptr;;
    antlr4::Token *outOp = nullptr;;
    ShellGrammarParser::FileNameContext *outputfile = nullptr;;
    PipeCommandsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProgramNameContext *programName();
    std::vector<PipeExprContext *> pipeExpr();
    PipeExprContext* pipeExpr(size_t i);
    std::vector<ArgumentsContext *> arguments();
    ArgumentsContext* arguments(size_t i);
    std::vector<FileNameContext *> fileName();
    FileNameContext* fileName(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PipeCommandsContext* pipeCommands();

  class  PipeExprContext : public antlr4::ParserRuleContext {
  public:
    ShellGrammarParser::ProgramNameContext *file = nullptr;;
    ShellGrammarParser::ArgumentsContext *arg = nullptr;;
    antlr4::Token *inOp = nullptr;;
    ShellGrammarParser::FileNameContext *inputfile = nullptr;;
    antlr4::Token *errOp = nullptr;;
    ShellGrammarParser::FileNameContext *errorfile = nullptr;;
    antlr4::Token *outOp = nullptr;;
    ShellGrammarParser::FileNameContext *outputfile = nullptr;;
    PipeExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProgramNameContext *programName();
    std::vector<ArgumentsContext *> arguments();
    ArgumentsContext* arguments(size_t i);
    std::vector<FileNameContext *> fileName();
    FileNameContext* fileName(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PipeExprContext* pipeExpr();

  class  FileNameContext : public antlr4::ParserRuleContext {
  public:
    FileNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> STRING();
    antlr4::tree::TerminalNode* STRING(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FileNameContext* fileName();

  class  ArgumentsContext : public antlr4::ParserRuleContext {
  public:
    ArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();
    FileNameContext *fileName();

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

