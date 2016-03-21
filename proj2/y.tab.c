#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140101

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "grammar.y"
#include  "proj2.h"
#include  <stdio.h>

  tree type_record, type_method, argtype, bractemp, type_tree; /* globals used to store treenode pointers */

#line 25 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define PROGRAMnum 257
#define IDnum 258
#define SEMInum 259
#define CLASSnum 260
#define DECLARATIONSnum 261
#define ENDDECLARATIONSnum 262
#define COMMAnum 263
#define EQUALnum 264
#define LBRACEnum 265
#define RBRACEnum 266
#define LBRACnum 267
#define RBRACnum 268
#define LPARENnum 269
#define RPARENnum 270
#define VOIDnum 271
#define INTnum 272
#define METHODnum 273
#define VALnum 274
#define DOTnum 275
#define ASSGNnum 276
#define RETURNnum 277
#define IFnum 278
#define ELSEnum 279
#define WHILEnum 280
#define LTnum 281
#define LEnum 282
#define EQnum 283
#define NEnum 284
#define GEnum 285
#define GTnum 286
#define PLUSnum 287
#define MINUSnum 288
#define ORnum 289
#define TIMESnum 290
#define DIVIDEnum 291
#define ANDnum 292
#define NOTnum 293
#define ICONSTnum 294
#define SCONSTnum 295
#define Field_rec 296
#define MethodDecl_rec 297
#define Tail 298
#define FieldDecl_body 299
#define Bracket_rec1 300
#define Bracket_rec2 301
#define ArrayInitializer_body 302
#define ArrayCreationExpression_tail 303
#define FormalParameterList_z1 304
#define FormalParameterList 305
#define FormalParameterList_rec 306
#define IDENTIFIER_rec 307
#define Type_front 308
#define Statement_rec 309
#define MethodCallStatement_tail 310
#define Expression_rec 311
#define If_rec 312
#define Comp_op 313
#define Expression_rec2 314
#define Variable_tail 315
#define Variable_1 316
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,   23,   23,   24,   25,    1,    1,   26,   26,   26,
   26,   34,   49,   34,   36,   36,   36,   36,   22,   22,
   22,    3,    3,    6,    6,    5,    5,    4,    4,   35,
   35,    8,    9,    9,    7,    7,    7,    7,    7,    7,
   27,    2,    2,    2,   29,   28,   28,   11,   11,   30,
   30,   50,   50,   31,   31,   31,   32,   12,   12,   33,
   13,   13,   14,   37,   38,   10,   10,   10,   39,   39,
   40,   40,   41,   42,   42,   42,   42,   42,   42,   42,
   45,   45,   45,   45,   45,   46,   46,   43,   43,   43,
   21,   21,   20,   20,   20,   44,   19,   19,   18,   18,
   18,   47,   48,   48,   48,   15,   16,   17,   17,
};
static const short yylen[] = {                            2,
    4,    1,    2,    3,    3,    1,    2,    0,    1,    1,
    2,    7,    0,    8,    2,    2,    4,    4,    0,    2,
    3,    0,    1,    1,    3,    3,    2,    1,    3,    1,
    2,    3,    1,    3,    0,    1,    1,    1,    1,    1,
    3,    0,    1,    2,    3,    1,    3,    1,    3,    1,
    2,    2,    3,    1,    1,    1,    3,    1,    3,    2,
    1,    2,    3,    3,    4,    0,    1,    3,    1,    2,
    3,    5,    3,    1,    3,    3,    3,    3,    3,    3,
    1,    1,    1,    3,    2,    1,    1,    2,    3,    3,
    0,    2,    2,    2,    2,    2,    0,    2,    2,    2,
    2,    2,    0,    2,    2,    2,    3,    1,    3,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    2,    0,    3,    0,
    4,    0,    0,    0,    6,    0,   10,    0,    0,    0,
   43,    0,   13,    0,    5,    7,   11,    0,    0,    0,
   41,   44,    0,   46,    0,    0,    0,    0,   20,    0,
    0,    0,    0,    0,   45,    0,    0,    0,    0,   21,
   17,   18,   52,    0,   47,    0,    0,    0,    0,    0,
    0,    0,   86,   87,   49,   55,   56,   83,   54,    0,
    0,    0,   81,    0,    0,    0,    0,    0,    0,   23,
   53,    0,    0,    0,    0,  102,    0,   58,    0,    0,
    0,   61,    0,    0,   85,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   88,    0,    0,    0,    0,
   96,    0,    0,    0,   27,    0,    0,    0,    0,    0,
  106,  105,  104,    0,   57,   84,    0,   62,   89,   90,
   75,   76,   77,   78,   79,   80,   93,   94,   95,   92,
   99,  100,  101,   98,    0,    0,    0,    0,   26,    0,
   30,    0,   12,   25,  107,    0,   59,   63,   65,    0,
   14,   29,    0,    0,    0,   33,    0,   36,   37,   38,
   39,   40,    0,   31,  109,   68,   70,    0,    0,    0,
   32,    0,    0,   73,   34,   64,    0,   72,
};
static const short yydgoto[] = {                          2,
   14,   20,   78,  115,   79,   80,  166,  151,  167,  145,
   34,   87,   91,   92,   84,   85,  119,  110,  111,  105,
  106,   29,    6,    7,   11,   15,  152,   35,   21,   36,
   65,   66,   67,   17,  153,   22,  168,   68,  170,  171,
  172,  120,   70,   71,   72,   73,   74,   86,   37,   44,
};
static const short yysindex[] = {                      -236,
 -217,    0, -170, -140, -150, -140,    0, -137,    0, -244,
    0, -252, -187, -162,    0, -148,    0, -131, -131, -108,
    0,  -91,    0,  -78,    0,    0,    0,  -76, -203, -201,
    0,    0,  -74,    0, -241,  -49,  -41,  -50,    0,  -48,
 -252, -252,  -46,  -44,    0,  -91, -256,  -45, -141,    0,
    0,    0,    0,  -43,    0, -185, -235, -235,  -40, -239,
 -239, -239,    0,    0,    0,    0,    0,    0,    0,  -85,
  -98,  -81,    0,  -39, -141,  -37,  -54,  -42,  -33,    0,
    0, -235,  -29, -185, -185,    0, -160,    0,  -38, -235,
  -40,    0,  -98,  -98,    0, -235, -235, -235, -235, -235,
 -235, -239, -239, -239,  -98,    0, -239, -239, -239,  -81,
    0, -235,  -36,  -32,    0,  -37, -221, -141,  -35,  -28,
    0,    0,    0, -235,    0,    0,  -31,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -34,  -25, -221,  -37,    0, -253,
    0,  -26,    0,    0,    0, -235,    0,    0,    0, -235,
    0,    0, -235, -235, -235,    0, -154,    0,    0,    0,
    0,    0, -107,    0,    0,    0,    0,  -26,  -26, -253,
    0, -235,  -30,    0,    0,    0,  -26,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,  240,    0,    0,    0,  -24,
    0,  -21,    0,    0,    0,  -23,    0, -230, -230,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -14,  -13,
    0,    0, -176,    0,    0, -196,    0,    0,    0,    0,
    0,    0,    0,  -51,    0,    0,    0,    0,  -22,    0,
    0,    0,    0,    0,    0, -190,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -136,
 -100, -110,    0, -144,  -22,    0,    0,    0,  -20,    0,
    0,    0,    0, -190, -190,    0,    0,    0,    0,    0,
 -102,    0, -100, -100,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -100,    0,    0,    0,    0, -110,
    0,  -19,    0, -202,    0,    0,    0,    0,    0,  -16,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -17,    0,    0,    0, -152,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -19,
    0,    0,  -72,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -152,
    0,    0,  -71,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
    0,    0,  171, -112,    0,  129,   74, -117,    0,   95,
  210,    0,    0,  166,    0,    0,  102,    0,  149,    0,
  -79,  241,    0,  255,    0,    0,  252,    0,  243,    0,
    0,    0,    0,  200,  117,   68,    0, -147,    0,    0,
    0,  -47,  106,  -53,  -61,    0, -138,   67,    0,    0,
};
#define YYTABLESIZE 264
static const short yytable[] = {                         69,
   95,   56,  169,  149,   56,   18,   93,   94,   57,   88,
   89,  173,   58,  129,  130,   59,   12,   45,   56,   19,
    1,   46,   56,  163,  164,  140,  165,   19,   13,   58,
   60,   61,  169,   58,  174,  162,   62,   63,   64,   12,
    3,  173,  127,  150,   19,  141,  142,  143,  137,  138,
  139,   60,   61,   62,   63,   64,   28,   62,   63,   64,
  183,  184,   48,   40,  146,   40,   48,   28,  103,  188,
   18,   41,  103,   42,  103,  103,  157,  103,  103,  103,
   24,   82,   50,   23,   19,  103,   50,   50,    4,   83,
  103,  103,  103,  103,  103,  103,  103,  103,  103,  103,
  103,  103,  124,   25,  180,  125,   35,    8,   51,   52,
   13,  181,  146,   35,   82,  177,  178,  179,   82,    5,
   82,   82,   74,   82,   13,   82,   74,   10,   74,   74,
   76,   74,   77,   74,  186,   28,   82,   82,   82,   82,
   82,   82,   82,   82,   82,   82,   82,   82,   97,   18,
  122,  123,   97,   31,   97,   97,   60,   97,   91,   97,
   60,  112,   91,   19,   91,   91,   33,   91,  182,   91,
   97,   97,   97,   97,   97,   97,   97,   97,   97,   38,
   91,   91,   91,   91,   91,   91,   69,   71,  102,  103,
  104,   39,   43,   69,   71,   96,   97,   98,   99,  100,
  101,  131,  132,  133,  134,  135,  136,   51,  107,  108,
  109,   51,   51,   26,   47,   27,   48,  116,   49,   50,
  114,   53,   54,   75,   81,  118,   90,  117,  121,  112,
  148,  126,  155,  147,  156,  159,  158,  160,  150,    1,
   42,    8,    9,   15,   16,  113,  154,   22,  187,   24,
   66,  108,   67,  185,  176,   55,  128,  175,  144,   30,
    9,   16,   32,  161,
};
static const short yycheck[] = {                         47,
   62,  258,  150,  116,  258,  258,   60,   61,  265,   57,
   58,  150,  269,   93,   94,  272,  261,  259,  258,  272,
  257,  263,  258,  277,  278,  105,  280,  258,  273,  269,
  287,  288,  180,  269,  152,  148,  293,  294,  295,  261,
  258,  180,   90,  265,  275,  107,  108,  109,  102,  103,
  104,  287,  288,  293,  294,  295,  259,  293,  294,  295,
  178,  179,  259,  267,  112,  267,  263,  270,  259,  187,
  258,  275,  263,  275,  265,  266,  124,  268,  269,  270,
   13,  267,  259,  271,  272,  276,  263,  264,  259,  275,
  281,  282,  283,  284,  285,  286,  287,  288,  289,  290,
  291,  292,  263,  266,  259,  266,  259,  258,   41,   42,
  273,  266,  160,  266,  259,  163,  164,  165,  263,  260,
  265,  266,  259,  268,  273,  270,  263,  265,  265,  266,
  272,  268,  274,  270,  182,  267,  281,  282,  283,  284,
  285,  286,  287,  288,  289,  290,  291,  292,  259,  258,
   84,   85,  263,  262,  265,  266,  259,  268,  259,  270,
  263,  269,  263,  272,  265,  266,  258,  268,  276,  270,
  281,  282,  283,  284,  285,  286,  287,  288,  289,  258,
  281,  282,  283,  284,  285,  286,  259,  259,  287,  288,
  289,  268,  267,  266,  266,  281,  282,  283,  284,  285,
  286,   96,   97,   98,   99,  100,  101,  259,  290,  291,
  292,  263,  264,   14,  264,   16,  258,  272,  269,  268,
  258,  268,  267,  269,  268,  259,  267,  270,  258,  269,
  263,  270,  268,  270,  263,  270,  268,  263,  265,    0,
  262,  266,  266,  258,  258,   75,  118,  270,  279,  270,
  270,  268,  270,  180,  160,   46,   91,  156,  110,   19,
    6,   10,   20,  147,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 316
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? (YYMAXTOKEN + 1) : (a))
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"PROGRAMnum","IDnum","SEMInum",
"CLASSnum","DECLARATIONSnum","ENDDECLARATIONSnum","COMMAnum","EQUALnum",
"LBRACEnum","RBRACEnum","LBRACnum","RBRACnum","LPARENnum","RPARENnum","VOIDnum",
"INTnum","METHODnum","VALnum","DOTnum","ASSGNnum","RETURNnum","IFnum","ELSEnum",
"WHILEnum","LTnum","LEnum","EQnum","NEnum","GEnum","GTnum","PLUSnum","MINUSnum",
"ORnum","TIMESnum","DIVIDEnum","ANDnum","NOTnum","ICONSTnum","SCONSTnum",
"Field_rec","MethodDecl_rec","Tail","FieldDecl_body","Bracket_rec1",
"Bracket_rec2","ArrayInitializer_body","ArrayCreationExpression_tail",
"FormalParameterList_z1","FormalParameterList","FormalParameterList_rec",
"IDENTIFIER_rec","Type_front","Statement_rec","MethodCallStatement_tail",
"Expression_rec","If_rec","Comp_op","Expression_rec2","Variable_tail",
"Variable_1","illegal-symbol",
};
static const char *yyrule[] = {
"$accept : Program",
"Program : PROGRAMnum IDnum SEMInum ClassDecl_rec",
"ClassDecl_rec : ClassDecl",
"ClassDecl_rec : ClassDecl_rec ClassDecl",
"ClassDecl : CLASSnum IDnum ClassBody",
"ClassBody : LBRACEnum MethodDecl_List RBRACEnum",
"MethodDecl_List : MethodDecl_z1",
"MethodDecl_List : MethodDecl_List MethodDecl",
"MethodDecl_z1 :",
"MethodDecl_z1 : Decls",
"MethodDecl_z1 : MethodDecl",
"MethodDecl_z1 : Decls MethodDecl",
"MethodDecl : METHODnum Type IDnum LPARENnum Formal_Parameter_List RPARENnum Block",
"$$1 :",
"MethodDecl : METHODnum VOIDnum $$1 IDnum LPARENnum Formal_Parameter_List RPARENnum Block",
"Type : IDnum Type_rec",
"Type : INTnum Type_rec",
"Type : IDnum Type_rec DOTnum Type",
"Type : INTnum Type_rec DOTnum Type",
"Type_rec :",
"Type_rec : LBRACnum RBRACnum",
"Type_rec : Type_rec LBRACnum RBRACnum",
"Formal_Parameter_List :",
"Formal_Parameter_List : Formal_Parameter_List_rec",
"Formal_Parameter_List_rec : Formal_Parameter",
"Formal_Parameter_List_rec : Formal_Parameter SEMInum Formal_Parameter_List_rec",
"Formal_Parameter : VALnum INTnum Formal_Parameter_rec",
"Formal_Parameter : INTnum Formal_Parameter_rec",
"Formal_Parameter_rec : IDnum",
"Formal_Parameter_rec : IDnum COMMAnum Formal_Parameter_rec",
"Block : StatementList",
"Block : Decls StatementList",
"StatementList : LBRACEnum StatementList_rec RBRACEnum",
"StatementList_rec : Statement",
"StatementList_rec : StatementList_rec SEMInum Statement",
"Statement :",
"Statement : AssignmentStatement",
"Statement : MethodCallStatement",
"Statement : ReturnStatement",
"Statement : IfStatement",
"Statement : WhileStatement",
"Decls : DECLARATIONSnum FieldDecl_List ENDDECLARATIONSnum",
"FieldDecl_List :",
"FieldDecl_List : FieldDecl",
"FieldDecl_List : FieldDecl_List FieldDecl",
"FieldDecl : Type FieldDecl_rec SEMInum",
"FieldDecl_rec : FieldDecl_Id",
"FieldDecl_rec : FieldDecl_rec COMMAnum FieldDecl_Id",
"FieldDecl_Id : VariableDeclId",
"FieldDecl_Id : VariableDeclId EQUALnum VariableInitializer",
"VariableDeclId : IDnum",
"VariableDeclId : IDnum BracketLoop",
"BracketLoop : LBRACnum RBRACnum",
"BracketLoop : BracketLoop LBRACnum RBRACnum",
"VariableInitializer : Expression",
"VariableInitializer : ArrayInitializer",
"VariableInitializer : ArrayCreationExpression",
"ArrayInitializer : LBRACEnum ArrayInitializer_rec RBRACEnum",
"ArrayInitializer_rec : Expression",
"ArrayInitializer_rec : ArrayInitializer_rec COMMAnum Expression",
"ArrayCreationExpression : INTnum ArrayCreationExpression_rec",
"ArrayCreationExpression_rec : ArrayExpression",
"ArrayCreationExpression_rec : ArrayCreationExpression_rec ArrayExpression",
"ArrayExpression : LBRACnum Expression RBRACnum",
"AssignmentStatement : Variable ASSGNnum Expression",
"MethodCallStatement : Variable LPARENnum ParameterList RPARENnum",
"ParameterList :",
"ParameterList : Expression",
"ParameterList : Expression COMMAnum ParameterList",
"ReturnStatement : RETURNnum",
"ReturnStatement : RETURNnum Expression",
"IfStatement : IFnum Expression StatementList",
"IfStatement : IFnum Expression StatementList ELSEnum StatementList",
"WhileStatement : WHILEnum Expression StatementList",
"Expression : SimpleExpression",
"Expression : SimpleExpression LTnum SimpleExpression",
"Expression : SimpleExpression LEnum SimpleExpression",
"Expression : SimpleExpression EQnum SimpleExpression",
"Expression : SimpleExpression NEnum SimpleExpression",
"Expression : SimpleExpression GEnum SimpleExpression",
"Expression : SimpleExpression GTnum SimpleExpression",
"Factor : UnsignedConstant",
"Factor : Variable",
"Factor : MethodCallStatement",
"Factor : LPARENnum Expression RPARENnum",
"Factor : NOTnum Factor",
"UnsignedConstant : ICONSTnum",
"UnsignedConstant : SCONSTnum",
"SimpleExpression : Term SimpleExpression_Op_rec",
"SimpleExpression : PLUSnum Term SimpleExpression_Op_rec",
"SimpleExpression : MINUSnum Term SimpleExpression_Op_rec",
"SimpleExpression_Op_rec :",
"SimpleExpression_Op_rec : SimpleExpression_Op SimpleExpression_Op_rec",
"SimpleExpression_Op : PLUSnum Term",
"SimpleExpression_Op : MINUSnum Term",
"SimpleExpression_Op : ORnum Term",
"Term : Factor Term_Op_rec",
"Term_Op_rec :",
"Term_Op_rec : Term_Op Term_Op_rec",
"Term_Op : TIMESnum Factor",
"Term_Op : DIVIDEnum Factor",
"Term_Op : ANDnum Factor",
"Variable : IDnum Variable_rec",
"Variable_rec :",
"Variable_rec : Index Variable_rec",
"Variable_rec : Field Variable_rec",
"Field : DOTnum IDnum",
"Index : LBRACnum Index_rec RBRACnum",
"Index_rec : Expression",
"Index_rec : Expression COMMAnum Index_rec",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 569 "grammar.y"

int yycolumn, yyline;

FILE *treelst;

main()
{
  treelst = stdout;
  yyparse();
}

yyerror(char *str)
{
  printf("yyerror: %s at line %d\n", str, yyline);
}

#include "lex.yy.c"

#line 475 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 35 "grammar.y"
	{  
                         yyval.tptr = MakeTree(ProgramOp, yystack.l_mark[0].tptr, MakeLeaf(IDNode, yystack.l_mark[-2].intg)); 
                         printtree(yyval.tptr, 0);
                       }
break;
case 2:
#line 41 "grammar.y"
	{  yyval.tptr = MakeTree(ClassOp, NullExp(), yystack.l_mark[0].tptr); }
break;
case 3:
#line 43 "grammar.y"
	{  yyval.tptr = MakeTree(ClassOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr); }
break;
case 4:
#line 46 "grammar.y"
	{
				yyval.tptr = MakeTree(ClassDefOp, yystack.l_mark[0].tptr, MakeLeaf(IDNode, yystack.l_mark[-1].intg));
			}
break;
case 5:
#line 51 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 6:
#line 56 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 7:
#line 60 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 8:
#line 65 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 9:
#line 69 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 10:
#line 73 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 11:
#line 77 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 12:
#line 82 "grammar.y"
	{
				tree headOp = MakeTree(HeadOp, MakeLeaf(IDNode, yystack.l_mark[-4].intg), yystack.l_mark[-2].tptr);
				yyval.tptr = MakeTree(MethodOp, headOp, yystack.l_mark[0].tptr);
			}
break;
case 13:
#line 88 "grammar.y"
	{type_tree = NullExp();}
break;
case 14:
#line 89 "grammar.y"
	{
				tree headOp = MakeTree(HeadOp, MakeLeaf(IDNode, yystack.l_mark[-4].intg), yystack.l_mark[-2].tptr);
				yyval.tptr = MakeTree(MethodOp, headOp, yystack.l_mark[0].tptr);
			}
break;
case 15:
#line 97 "grammar.y"
	{
				yyval.tptr = type_tree = MakeTree(TypeIdOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), yystack.l_mark[0].tptr);
			}
break;
case 16:
#line 101 "grammar.y"
	{
				yyval.tptr = type_tree = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, yystack.l_mark[-1].intg), yystack.l_mark[0].tptr);
			}
break;
case 17:
#line 105 "grammar.y"
	{
				tree typeTree = MakeTree(TypeIdOp, MakeLeaf(IDNode, yystack.l_mark[-3].intg), yystack.l_mark[-2].tptr);
				/* This code creates a tree that looks like the assignment pdf */			
				tree fieldTree = MakeTree(FieldOp, yystack.l_mark[0].tptr, NullExp());
				yyval.tptr = type_tree = MkRightC(fieldTree, typeTree); 
				/* This code creates a tree that looks like the example parser */
				/*$$ = type_tree = MkRightC($4, typeTree);*/
			}
break;
case 18:
#line 114 "grammar.y"
	{
				tree typeTree = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, yystack.l_mark[-3].intg), yystack.l_mark[-2].tptr);
				/* This code creates a tree that looks like the assignment pdf */
				tree fieldTree = MakeTree(FieldOp, yystack.l_mark[0].tptr, NullExp());
				yyval.tptr = type_tree = MkRightC(fieldTree, typeTree);
				/* This code creates a tree that looks like the example parser */
				/*$$ = type_tree = MkRightC($4, typeTree);*/
			}
break;
case 19:
#line 124 "grammar.y"
	{
				yyval.tptr = type_tree = NullExp();
			}
break;
case 20:
#line 128 "grammar.y"
	{
				yyval.tptr = type_tree = MakeTree(IndexOp, NullExp(), NullExp());
			}
break;
case 21:
#line 132 "grammar.y"
	{
				yyval.tptr = type_tree = MakeTree(IndexOp, NullExp(), yystack.l_mark[-2].tptr);
			}
break;
case 22:
#line 137 "grammar.y"
	{
				yyval.tptr = MakeTree(SpecOp, NullExp(), type_tree);
			}
break;
case 23:
#line 141 "grammar.y"
	{
				yyval.tptr = MakeTree(SpecOp, yystack.l_mark[0].tptr, type_tree);
			}
break;
case 24:
#line 146 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 25:
#line 150 "grammar.y"
	{
				yyval.tptr = MkRightC(yystack.l_mark[0].tptr, yystack.l_mark[-2].tptr);
			}
break;
case 26:
#line 155 "grammar.y"
	{
				yyval.tptr = MakeVal(yystack.l_mark[0].tptr);
			}
break;
case 27:
#line 159 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 28:
#line 164 "grammar.y"
	{
				tree idTree = MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[0].intg), MakeLeaf(INTEGERTNode, 0));
				yyval.tptr = MakeTree(RArgTypeOp, idTree, NullExp());
			}
break;
case 29:
#line 169 "grammar.y"
	{
				tree idTree = MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[-2].intg), MakeLeaf(INTEGERTNode, 0));
				tree formalParameter = MakeTree(RArgTypeOp, idTree, NullExp());
				yyval.tptr = MkRightC(yystack.l_mark[0].tptr, formalParameter);
			}
break;
case 30:
#line 176 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 31:
#line 180 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 32:
#line 185 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 33:
#line 190 "grammar.y"
	{	
				yyval.tptr = MakeTree(StmtOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 34:
#line 194 "grammar.y"
	{	
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = yystack.l_mark[-2].tptr;
				} else { 
					yyval.tptr = MakeTree(StmtOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
				}
			}
break;
case 35:
#line 203 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 36:
#line 207 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 37:
#line 211 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 38:
#line 215 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 39:
#line 219 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 40:
#line 223 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 41:
#line 228 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 42:
#line 235 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 43:
#line 244 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 44:
#line 248 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 45:
#line 253 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 46:
#line 258 "grammar.y"
	{
				yyval.tptr = MakeTree(DeclOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 47:
#line 262 "grammar.y"
	{
				yyval.tptr = MakeTree(DeclOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 48:
#line 267 "grammar.y"
	{
				tree commaTree = MakeTree(CommaOp, type_tree, NullExp());
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[0].tptr, commaTree);
			}
break;
case 49:
#line 272 "grammar.y"
	{
				tree commaTree = MakeTree(CommaOp, type_tree, yystack.l_mark[0].tptr);
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[-2].tptr, commaTree);
			}
break;
case 50:
#line 278 "grammar.y"
	{
				yyval.tptr = MakeLeaf(IDNode, yystack.l_mark[0].intg);
			}
break;
case 51:
#line 282 "grammar.y"
	{
				yyval.tptr = MakeLeaf(IDNode, yystack.l_mark[-1].intg);
			}
break;
case 54:
#line 290 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 55:
#line 294 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 56:
#line 298 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 57:
#line 303 "grammar.y"
	{
				yyval.tptr = MakeTree(ArrayTypeOp, yystack.l_mark[-1].tptr, type_tree);
			}
break;
case 58:
#line 308 "grammar.y"
	{
				yyval.tptr = MakeTree(CommaOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 59:
#line 312 "grammar.y"
	{
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 60:
#line 317 "grammar.y"
	{
				yyval.tptr = MakeTree(ArrayTypeOp, yystack.l_mark[0].tptr, type_tree);
			}
break;
case 61:
#line 322 "grammar.y"
	{
				yyval.tptr = MakeTree(BoundOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 62:
#line 326 "grammar.y"
	{
				yyval.tptr = MakeTree(BoundOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 63:
#line 331 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 64:
#line 336 "grammar.y"
	{
				tree assignOp = MakeTree(AssignOp, NullExp(), yystack.l_mark[-2].tptr);
				yyval.tptr = MakeTree(AssignOp, assignOp, yystack.l_mark[0].tptr);
			}
break;
case 65:
#line 342 "grammar.y"
	{
				yyval.tptr = MakeTree(RoutineCallOp, yystack.l_mark[-3].tptr, yystack.l_mark[-1].tptr);
			}
break;
case 66:
#line 347 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 67:
#line 351 "grammar.y"
	{
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 68:
#line 355 "grammar.y"
	{
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 69:
#line 360 "grammar.y"
	{
				yyval.tptr = MakeTree(ReturnOp, NullExp(), NullExp());
			}
break;
case 70:
#line 364 "grammar.y"
	{
				yyval.tptr = MakeTree(ReturnOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 71:
#line 369 "grammar.y"
	{
				tree commaTree = MakeTree(CommaOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
				yyval.tptr = MakeTree(IfElseOp, NullExp(), commaTree);
			}
break;
case 72:
#line 374 "grammar.y"
	{
				tree commaTree = MakeTree(CommaOp, yystack.l_mark[-3].tptr, yystack.l_mark[-2].tptr);
				tree ifTree = MakeTree(IfElseOp, NullExp(), commaTree);
				yyval.tptr = MakeTree(IfElseOp, ifTree, yystack.l_mark[0].tptr);	
			}
break;
case 73:
#line 381 "grammar.y"
	{
				yyval.tptr = MakeTree(LoopOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 74:
#line 386 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 75:
#line 390 "grammar.y"
	{
				yyval.tptr = MakeTree(LTOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 76:
#line 394 "grammar.y"
	{
				yyval.tptr = MakeTree(LEOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 77:
#line 398 "grammar.y"
	{
				yyval.tptr = MakeTree(EQOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 78:
#line 402 "grammar.y"
	{
				yyval.tptr = MakeTree(NEOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 79:
#line 406 "grammar.y"
	{
				yyval.tptr = MakeTree(GEOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 80:
#line 410 "grammar.y"
	{
				yyval.tptr = MakeTree(GTOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 81:
#line 415 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 82:
#line 419 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 83:
#line 423 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 84:
#line 427 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 85:
#line 431 "grammar.y"
	{
				yyval.tptr = MakeTree(NotOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 86:
#line 436 "grammar.y"
	{
				yyval.tptr = MakeLeaf(NUMNode, yystack.l_mark[0].intg);
			}
break;
case 87:
#line 440 "grammar.y"
	{
				yyval.tptr = MakeLeaf(STRINGNode, yystack.l_mark[0].intg);
			}
break;
case 88:
#line 445 "grammar.y"
	{
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = yystack.l_mark[-1].tptr;
				} else {
					yyval.tptr = MkLeftC(yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
				}
			}
break;
case 89:
#line 453 "grammar.y"
	{
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = yystack.l_mark[-1].tptr;
				} else {
					yyval.tptr = MkLeftC(yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
				}
			}
break;
case 90:
#line 461 "grammar.y"
	{
				tree neg = MakeTree(UnaryNegOp, yystack.l_mark[-1].tptr, NullExp());
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = neg;
				} else {
					yyval.tptr = MkLeftC(neg, yystack.l_mark[0].tptr);
				}
			}
break;
case 91:
#line 471 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 92:
#line 475 "grammar.y"
	{
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = yystack.l_mark[-1].tptr;
				} else {
					yyval.tptr = MkLeftC(yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
				}
			}
break;
case 93:
#line 484 "grammar.y"
	{
				yyval.tptr = MakeTree(AddOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 94:
#line 488 "grammar.y"
	{
				yyval.tptr = MakeTree(SubOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 95:
#line 492 "grammar.y"
	{
				yyval.tptr = MakeTree(OrOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 96:
#line 497 "grammar.y"
	{
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = yystack.l_mark[-1].tptr;
				} else {
					yyval.tptr = MkLeftC(yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
				}
			}
break;
case 97:
#line 506 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 98:
#line 510 "grammar.y"
	{
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = yystack.l_mark[-1].tptr;
				} else {
					yyval.tptr = MkLeftC(yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
				}
			}
break;
case 99:
#line 519 "grammar.y"
	{
				yyval.tptr = MakeTree(MultOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 100:
#line 523 "grammar.y"
	{
				yyval.tptr = MakeTree(DivOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 101:
#line 527 "grammar.y"
	{
				yyval.tptr = MakeTree(AndOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 102:
#line 532 "grammar.y"
	{
				yyval.tptr = MakeTree(VarOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), yystack.l_mark[0].tptr);
			}
break;
case 103:
#line 537 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 104:
#line 541 "grammar.y"
	{
				yyval.tptr = MakeTree(SelectOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 105:
#line 545 "grammar.y"
	{
				yyval.tptr = MakeTree(SelectOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 106:
#line 550 "grammar.y"
	{
				yyval.tptr = MakeTree(FieldOp, MakeLeaf(IDNode, yystack.l_mark[0].intg), NullExp());
			}
break;
case 107:
#line 555 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 108:
#line 560 "grammar.y"
	{
				yyval.tptr = MakeTree(IndexOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 109:
#line 564 "grammar.y"
	{
				yyval.tptr = MakeTree(IndexOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
#line 1364 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
