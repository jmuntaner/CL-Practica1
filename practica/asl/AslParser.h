
// Generated from Asl.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  AslParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, ASSIGN = 5, EQUAL = 6, NEQ = 7, 
    PLUS = 8, SUB = 9, MUL = 10, DIV = 11, MOD = 12, LT = 13, GT = 14, GEQ = 15, 
    LEQ = 16, AND = 17, OR = 18, NOT = 19, VAR = 20, INT = 21, BOOL = 22, 
    FLOAT = 23, CHAR = 24, IF = 25, THEN = 26, ELSE = 27, ENDIF = 28, FUNC = 29, 
    ENDFUNC = 30, READ = 31, WRITE = 32, TRUE = 33, FALSE = 34, BOOLVAL = 35, 
    ID = 36, INTVAL = 37, FLOATVAL = 38, CHARVAL = 39, STRING = 40, COMMENT = 41, 
    WS = 42
  };

  enum {
    RuleProgram = 0, RuleFunction = 1, RuleDeclarations = 2, RuleVariable_decl = 3, 
    RuleType = 4, RuleStatements = 5, RuleStatement = 6, RuleLeft_expr = 7, 
    RuleExpr = 8, RuleIdent = 9
  };

  AslParser(antlr4::TokenStream *input);
  ~AslParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class FunctionContext;
  class DeclarationsContext;
  class Variable_declContext;
  class TypeContext;
  class StatementsContext;
  class StatementContext;
  class Left_exprContext;
  class ExprContext;
  class IdentContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<FunctionContext *> function();
    FunctionContext* function(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  FunctionContext : public antlr4::ParserRuleContext {
  public:
    FunctionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNC();
    antlr4::tree::TerminalNode *ID();
    DeclarationsContext *declarations();
    StatementsContext *statements();
    antlr4::tree::TerminalNode *ENDFUNC();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionContext* function();

  class  DeclarationsContext : public antlr4::ParserRuleContext {
  public:
    DeclarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Variable_declContext *> variable_decl();
    Variable_declContext* variable_decl(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationsContext* declarations();

  class  Variable_declContext : public antlr4::ParserRuleContext {
  public:
    Variable_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VAR();
    antlr4::tree::TerminalNode *ID();
    TypeContext *type();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Variable_declContext* variable_decl();

  class  TypeContext : public antlr4::ParserRuleContext {
  public:
    TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *BOOL();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *CHAR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeContext* type();

  class  StatementsContext : public antlr4::ParserRuleContext {
  public:
    StatementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementsContext* statements();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    StatementContext() : antlr4::ParserRuleContext() { }
    void copyFrom(StatementContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ProcCallContext : public StatementContext {
  public:
    ProcCallContext(StatementContext *ctx);

    IdentContext *ident();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  WriteExprContext : public StatementContext {
  public:
    WriteExprContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *WRITE();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  IfStmtContext : public StatementContext {
  public:
    IfStmtContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *IF();
    ExprContext *expr();
    antlr4::tree::TerminalNode *THEN();
    StatementsContext *statements();
    antlr4::tree::TerminalNode *ENDIF();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ReadStmtContext : public StatementContext {
  public:
    ReadStmtContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *READ();
    Left_exprContext *left_expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AssignStmtContext : public StatementContext {
  public:
    AssignStmtContext(StatementContext *ctx);

    Left_exprContext *left_expr();
    antlr4::tree::TerminalNode *ASSIGN();
    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  WriteStringContext : public StatementContext {
  public:
    WriteStringContext(StatementContext *ctx);

    antlr4::tree::TerminalNode *WRITE();
    antlr4::tree::TerminalNode *STRING();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  StatementContext* statement();

  class  Left_exprContext : public antlr4::ParserRuleContext {
  public:
    Left_exprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentContext *ident();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Left_exprContext* left_expr();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  BooleanContext : public ExprContext {
  public:
    BooleanContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprIdentContext : public ExprContext {
  public:
    ExprIdentContext(ExprContext *ctx);

    IdentContext *ident();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ArithmeticContext : public ExprContext {
  public:
    ArithmeticContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *SUB();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RelationalContext : public ExprContext {
  public:
    RelationalContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *NEQ();
    antlr4::tree::TerminalNode *GEQ();
    antlr4::tree::TerminalNode *LEQ();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnaryContext : public ExprContext {
  public:
    UnaryContext(ExprContext *ctx);

    antlr4::Token *op = nullptr;
    ExprContext *expr();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *SUB();
    antlr4::tree::TerminalNode *PLUS();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenthesisContext : public ExprContext {
  public:
    ParenthesisContext(ExprContext *ctx);

    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ValueContext : public ExprContext {
  public:
    ValueContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *INTVAL();
    antlr4::tree::TerminalNode *CHARVAL();
    antlr4::tree::TerminalNode *FLOATVAL();
    antlr4::tree::TerminalNode *BOOLVAL();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  IdentContext : public antlr4::ParserRuleContext {
  public:
    IdentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentContext* ident();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

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
