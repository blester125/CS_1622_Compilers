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
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    1,    1,    2,    3,    4,    4,    5,    5,    5,
    5,    6,   50,    6,    7,    7,    7,    7,    8,    8,
    8,    9,    9,   10,   10,   11,   11,   12,   12,   13,
   13,   14,   15,   15,   16,   16,   16,   16,   16,   16,
   17,   18,   18,   18,   19,   20,   20,   21,   21,   22,
   22,   23,   23,   24,   24,   24,   25,   26,   26,   27,
   28,   28,   29,   30,   31,   32,   32,   32,   33,   33,
   34,   34,   35,   36,   36,   36,   36,   36,   36,   36,
   37,   37,   37,   37,   37,   38,   38,   39,   39,   39,
   40,   40,   41,   41,   41,   42,   43,   43,   44,   44,
   44,   45,   46,   46,   46,   47,   48,   49,   49,
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
    4,    0,    0,    0,    6,   10,    0,    0,    0,    0,
    0,   43,   13,    0,    5,    7,   11,    0,    0,    0,
    0,    0,   46,    0,   41,   44,    0,    0,   20,    0,
    0,    0,    0,    0,   45,    0,    0,    0,    0,   21,
   17,   18,   52,    0,   47,    0,    0,    0,    0,    0,
    0,    0,   86,   87,   49,   55,   56,   83,   54,    0,
   81,    0,    0,    0,    0,    0,    0,    0,   23,    0,
   53,    0,    0,  102,    0,    0,    0,   58,    0,    0,
    0,   61,    0,    0,   85,    0,    0,    0,   96,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   88,
    0,    0,    0,    0,   27,    0,    0,    0,    0,    0,
  106,  105,  104,    0,   57,   84,    0,   62,   89,   90,
   99,  100,  101,   98,   75,   76,   77,   78,   79,   80,
   93,   94,   95,   92,    0,    0,    0,    0,   26,    0,
   12,   30,    0,   25,    0,  107,   59,   63,   65,    0,
   14,   29,    0,    0,    0,    0,   33,   36,   37,   38,
   39,   40,    0,   31,  109,   68,   70,    0,    0,    0,
   32,    0,    0,   73,   34,   64,    0,   72,
};
static const short yydgoto[] = {                          2,
    6,    7,   11,   14,   15,   16,   20,   29,   78,   79,
   80,  115,  151,  152,  166,  167,  153,   21,   22,   32,
   33,   34,   44,   65,   66,   87,   67,   91,   92,  168,
   68,  145,  170,  171,  172,  119,   70,   71,   72,  110,
  111,   73,   99,  100,   74,   84,   85,   86,  120,   37,
};
static const short yysindex[] = {                      -179,
 -240,    0, -159, -180, -175, -180,    0, -134,    0, -210,
    0, -176, -160, -133,    0,    0, -139, -123, -123, -111,
 -198,    0,    0, -108,    0,    0,    0, -116, -168, -165,
 -104, -154,    0,  -92,    0,    0,  -72,  -82,    0,  -61,
 -176, -176,  -54,  -44,    0, -111, -253,  -45, -266,    0,
    0,    0,    0,  -43,    0, -130, -249, -249,  -40, -241,
 -241, -241,    0,    0,    0,    0,    0,    0,    0,  -73,
    0,  -87,  -67,  -39, -266,  -42,  -57,  -38,    0,  -33,
    0, -249,  -30,    0, -130, -130, -239,    0,  -37, -249,
  -40,    0,  -67,  -67,    0, -241, -241, -241,    0,  -73,
 -249, -249, -249, -249, -249, -249, -241, -241, -241,    0,
  -67, -249,  -36,  -34,    0,  -42,  -52, -266,  -32,  -31,
    0,    0,    0, -249,    0,    0,  -29,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -35,  -27,  -52,  -42,    0, -255,
    0,    0,  -25,    0, -249,    0,    0,    0,    0, -249,
    0,    0, -249, -249, -249,  -88,    0,    0,    0,    0,
    0,    0,  -96,    0,    0,    0,    0,  -25,  -25, -255,
    0, -249,  -28,    0,    0,    0,  -25,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,  238,    0,    0,    0,  -24,
    0,  -21,    0,    0,    0,    0,  -23, -245, -245,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -14,  -13,
  -71,    0,    0,  -74,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -53,    0,    0,    0,    0,  -22,    0,
    0,    0,    0,    0,    0, -197,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -127,
    0,  -89, -117, -162,  -22,    0,    0,    0,    0,  -20,
    0,    0,    0,    0, -197, -197,    0,    0,    0,    0,
  -51,    0, -117, -117,    0,    0,    0,    0,    0, -127,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
 -117,  -18,    0, -189,    0,    0,    0,    0,  -19,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -17,    0,    0,    0,  -84,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -18,
    0,    0,  -76,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -84,
    0,    0,  -75,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
    0,  240,    0,    0,    0,   12,   34,  228,  179,  137,
    0, -112,  109, -120,    0,   77,  248,    0,  239,    0,
  213,    0,    0,    0,    0,    0,    0,    0,  170,    0,
 -143,  102,    0,    0,    0,  -47,  -41,    0,   99,  -79,
    0,  -59,  163,    0, -119,   29,    0,    0,  110,    0,
};
#define YYTABLESIZE 265
static const short yytable[] = {                         69,
   93,   94,   56,  149,   56,   76,  169,   77,   56,   88,
   89,   57,   19,  129,  130,   58,   56,    3,   59,   58,
   95,  163,  164,  124,  165,   26,  125,   58,   27,   19,
  173,  144,  174,   60,   61,  162,  169,   60,   61,   62,
   63,   64,  127,   62,   63,   64,   24,  141,  142,  143,
   12,   62,   63,   64,  131,  132,  133,  183,  184,   18,
  173,  103,   13,   35,  146,  103,  188,  103,  103,   28,
  103,  103,  103,   19,   51,   52,  157,    1,  103,    5,
   28,   18,    8,  103,  103,  103,  103,  103,  103,  103,
  103,  103,  103,  103,  103,   19,   82,   18,   40,    4,
   82,   40,   82,   82,   45,   82,   41,   82,   46,   42,
   23,   19,  146,  122,  123,  177,  178,  179,   82,   82,
   82,   82,   82,   82,   82,   82,   82,   82,   82,   82,
   10,   97,   25,   13,  186,   97,   82,   97,   97,   13,
   97,   91,   97,   28,   83,   91,   31,   91,   91,   38,
   91,   39,   91,   97,   97,   97,   97,   97,   97,   97,
   97,   97,   43,   91,   91,   91,   91,   91,   91,   74,
  180,   47,  112,   74,   35,   74,   74,  181,   74,  182,
   74,   35,   69,   71,   48,   48,   49,   50,   48,   69,
   71,   50,   50,  101,  102,  103,  104,  105,  106,  135,
  136,  137,  138,  139,  140,   51,   50,   60,   12,   51,
   51,   60,  150,   53,  116,  114,   96,   97,   98,  107,
  108,  109,   54,   75,   81,  118,   90,  121,  148,  112,
  155,  117,  126,  147,  159,  160,  156,    1,  158,  150,
   42,    8,    9,   15,   16,    9,   30,   22,  108,   24,
  187,   66,   67,  113,  154,  161,  185,   17,   55,   36,
  128,  176,  134,    0,  175,
};
static const short yycheck[] = {                         47,
   60,   61,  258,  116,  258,  272,  150,  274,  258,   57,
   58,  265,  258,   93,   94,  269,  258,  258,  272,  269,
   62,  277,  278,  263,  280,   14,  266,  269,   17,  275,
  150,  111,  153,  287,  288,  148,  180,  287,  288,  293,
  294,  295,   90,  293,  294,  295,   13,  107,  108,  109,
  261,  293,  294,  295,   96,   97,   98,  178,  179,  258,
  180,  259,  273,  262,  112,  263,  187,  265,  266,  259,
  268,  269,  270,  272,   41,   42,  124,  257,  276,  260,
  270,  258,  258,  281,  282,  283,  284,  285,  286,  287,
  288,  289,  290,  291,  292,  272,  259,  258,  267,  259,
  263,  267,  265,  266,  259,  268,  275,  270,  263,  275,
  271,  272,  160,   85,   86,  163,  164,  165,  281,  282,
  283,  284,  285,  286,  287,  288,  289,  290,  291,  292,
  265,  259,  266,  273,  182,  263,  267,  265,  266,  273,
  268,  259,  270,  267,  275,  263,  258,  265,  266,  258,
  268,  268,  270,  281,  282,  283,  284,  285,  286,  287,
  288,  289,  267,  281,  282,  283,  284,  285,  286,  259,
  259,  264,  269,  263,  259,  265,  266,  266,  268,  276,
  270,  266,  259,  259,  259,  258,  269,  259,  263,  266,
  266,  263,  264,  281,  282,  283,  284,  285,  286,  101,
  102,  103,  104,  105,  106,  259,  268,  259,  261,  263,
  264,  263,  265,  268,  272,  258,  290,  291,  292,  287,
  288,  289,  267,  269,  268,  259,  267,  258,  263,  269,
  263,  270,  270,  270,  270,  263,  268,    0,  268,  265,
  262,  266,  266,  258,  258,    6,   19,  270,  268,  270,
  279,  270,  270,   75,  118,  147,  180,   10,   46,   21,
   91,  160,  100,   -1,  155,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 295
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
"illegal-symbol",
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
#line 575 "grammar.y"

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

#line 449 "y.tab.c"

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
#line 33 "grammar.y"
	{  
                       		yyval.tptr = MakeTree(ProgramOp, yystack.l_mark[0].tptr, MakeLeaf(IDNode, yystack.l_mark[-2].intg)); 
                      		printtree(yyval.tptr, 0);
			}
break;
case 2:
#line 39 "grammar.y"
	{
				yyval.tptr = MakeTree(ClassOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 3:
#line 43 "grammar.y"
	{
				yyval.tptr = MakeTree(ClassOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 4:
#line 48 "grammar.y"
	{
				yyval.tptr = MakeTree(ClassDefOp, yystack.l_mark[0].tptr, MakeLeaf(IDNode, yystack.l_mark[-1].intg));
			}
break;
case 5:
#line 53 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 6:
#line 58 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 7:
#line 62 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 8:
#line 67 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 9:
#line 71 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 10:
#line 75 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 11:
#line 79 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 12:
#line 84 "grammar.y"
	{
				tree headOp = MakeTree(HeadOp, MakeLeaf(IDNode, yystack.l_mark[-4].intg), yystack.l_mark[-2].tptr);
				yyval.tptr = MakeTree(MethodOp, headOp, yystack.l_mark[0].tptr);
			}
break;
case 13:
#line 90 "grammar.y"
	{type_tree = NullExp();}
break;
case 14:
#line 91 "grammar.y"
	{
				tree headOp = MakeTree(HeadOp, MakeLeaf(IDNode, yystack.l_mark[-4].intg), yystack.l_mark[-2].tptr);
				yyval.tptr = MakeTree(MethodOp, headOp, yystack.l_mark[0].tptr);
			}
break;
case 15:
#line 98 "grammar.y"
	{
				yyval.tptr = type_tree = MakeTree(TypeIdOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), yystack.l_mark[0].tptr);
			}
break;
case 16:
#line 102 "grammar.y"
	{
				yyval.tptr = type_tree = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, yystack.l_mark[-1].intg), yystack.l_mark[0].tptr);
			}
break;
case 17:
#line 106 "grammar.y"
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
#line 115 "grammar.y"
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
#line 125 "grammar.y"
	{
				yyval.tptr = type_tree = NullExp();
			}
break;
case 20:
#line 129 "grammar.y"
	{
				yyval.tptr = type_tree = MakeTree(IndexOp, NullExp(), NullExp());
			}
break;
case 21:
#line 133 "grammar.y"
	{
				yyval.tptr = type_tree = MakeTree(IndexOp, NullExp(), yystack.l_mark[-2].tptr);
			}
break;
case 22:
#line 138 "grammar.y"
	{
				yyval.tptr = MakeTree(SpecOp, NullExp(), type_tree);
			}
break;
case 23:
#line 142 "grammar.y"
	{
				yyval.tptr = MakeTree(SpecOp, yystack.l_mark[0].tptr, type_tree);
			}
break;
case 24:
#line 147 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 25:
#line 151 "grammar.y"
	{
				yyval.tptr = MkRightC(yystack.l_mark[0].tptr, yystack.l_mark[-2].tptr);
			}
break;
case 26:
#line 156 "grammar.y"
	{
				yyval.tptr = MakeVal(yystack.l_mark[0].tptr);
			}
break;
case 27:
#line 160 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 28:
#line 165 "grammar.y"
	{
				tree idTree = MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[0].intg), MakeLeaf(INTEGERTNode, 0));
				yyval.tptr = MakeTree(RArgTypeOp, idTree, NullExp());
			}
break;
case 29:
#line 170 "grammar.y"
	{
				tree idTree = MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[-2].intg), MakeLeaf(INTEGERTNode, 0));
				tree formalParameter = MakeTree(RArgTypeOp, idTree, NullExp());
				yyval.tptr = MkRightC(yystack.l_mark[0].tptr, formalParameter);
			}
break;
case 30:
#line 177 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 31:
#line 181 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 32:
#line 186 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 33:
#line 191 "grammar.y"
	{	
				yyval.tptr = MakeTree(StmtOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 34:
#line 195 "grammar.y"
	{	
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = yystack.l_mark[-2].tptr;
				} else { 
					yyval.tptr = MakeTree(StmtOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
				}
			}
break;
case 35:
#line 204 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 36:
#line 208 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 37:
#line 212 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 38:
#line 216 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 39:
#line 220 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 40:
#line 224 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 41:
#line 229 "grammar.y"
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
case 52:
#line 287 "grammar.y"
	{
				yyval.tptr = yyval.tptr;
			}
break;
case 53:
#line 291 "grammar.y"
	{
				yyval.tptr = yyval.tptr;
			}
break;
case 54:
#line 296 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 55:
#line 300 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 56:
#line 304 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 57:
#line 309 "grammar.y"
	{
				yyval.tptr = MakeTree(ArrayTypeOp, yystack.l_mark[-1].tptr, type_tree);
			}
break;
case 58:
#line 314 "grammar.y"
	{
				yyval.tptr = MakeTree(CommaOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 59:
#line 318 "grammar.y"
	{
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 60:
#line 323 "grammar.y"
	{
				yyval.tptr = MakeTree(ArrayTypeOp, yystack.l_mark[0].tptr, MakeLeaf(INTEGERTNode, yystack.l_mark[-1].intg));
			}
break;
case 61:
#line 328 "grammar.y"
	{
				yyval.tptr = MakeTree(BoundOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 62:
#line 332 "grammar.y"
	{
				yyval.tptr = MakeTree(BoundOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 63:
#line 337 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 64:
#line 342 "grammar.y"
	{
				tree assignOp = MakeTree(AssignOp, NullExp(), yystack.l_mark[-2].tptr);
				yyval.tptr = MakeTree(AssignOp, assignOp, yystack.l_mark[0].tptr);
			}
break;
case 65:
#line 348 "grammar.y"
	{
				yyval.tptr = MakeTree(RoutineCallOp, yystack.l_mark[-3].tptr, yystack.l_mark[-1].tptr);
			}
break;
case 66:
#line 353 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 67:
#line 357 "grammar.y"
	{
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 68:
#line 361 "grammar.y"
	{
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 69:
#line 366 "grammar.y"
	{
				yyval.tptr = MakeTree(ReturnOp, NullExp(), NullExp());
			}
break;
case 70:
#line 370 "grammar.y"
	{
				yyval.tptr = MakeTree(ReturnOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 71:
#line 375 "grammar.y"
	{
				tree commaTree = MakeTree(CommaOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
				yyval.tptr = MakeTree(IfElseOp, NullExp(), commaTree);
			}
break;
case 72:
#line 380 "grammar.y"
	{
				tree commaTree = MakeTree(CommaOp, yystack.l_mark[-3].tptr, yystack.l_mark[-2].tptr);
				tree ifTree = MakeTree(IfElseOp, NullExp(), commaTree);
				yyval.tptr = MakeTree(IfElseOp, ifTree, yystack.l_mark[0].tptr);	
			}
break;
case 73:
#line 387 "grammar.y"
	{
				yyval.tptr = MakeTree(LoopOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 74:
#line 392 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 75:
#line 396 "grammar.y"
	{
				yyval.tptr = MakeTree(LTOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 76:
#line 400 "grammar.y"
	{
				yyval.tptr = MakeTree(LEOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 77:
#line 404 "grammar.y"
	{
				yyval.tptr = MakeTree(EQOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 78:
#line 408 "grammar.y"
	{
				yyval.tptr = MakeTree(NEOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 79:
#line 412 "grammar.y"
	{
				yyval.tptr = MakeTree(GEOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 80:
#line 416 "grammar.y"
	{
				yyval.tptr = MakeTree(GTOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 81:
#line 421 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 82:
#line 425 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 83:
#line 429 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 84:
#line 433 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 85:
#line 437 "grammar.y"
	{
				yyval.tptr = MakeTree(NotOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 86:
#line 442 "grammar.y"
	{
				yyval.tptr = MakeLeaf(NUMNode, yystack.l_mark[0].intg);
			}
break;
case 87:
#line 446 "grammar.y"
	{
				yyval.tptr = MakeLeaf(STRINGNode, yystack.l_mark[0].intg);
			}
break;
case 88:
#line 451 "grammar.y"
	{
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = yystack.l_mark[-1].tptr;
				} else {
					yyval.tptr = MkLeftC(yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
				}
			}
break;
case 89:
#line 459 "grammar.y"
	{
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = yystack.l_mark[-1].tptr;
				} else {
					yyval.tptr = MkLeftC(yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
				}
			}
break;
case 90:
#line 467 "grammar.y"
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
#line 477 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 92:
#line 481 "grammar.y"
	{
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = yystack.l_mark[-1].tptr;
				} else {
					yyval.tptr = MkLeftC(yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
				}
			}
break;
case 93:
#line 490 "grammar.y"
	{
				yyval.tptr = MakeTree(AddOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 94:
#line 494 "grammar.y"
	{
				yyval.tptr = MakeTree(SubOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 95:
#line 498 "grammar.y"
	{
				yyval.tptr = MakeTree(OrOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 96:
#line 503 "grammar.y"
	{
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = yystack.l_mark[-1].tptr;
				} else {
					yyval.tptr = MkLeftC(yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
				}
			}
break;
case 97:
#line 512 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 98:
#line 516 "grammar.y"
	{
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = yystack.l_mark[-1].tptr;
				} else {
					yyval.tptr = MkLeftC(yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
				}
			}
break;
case 99:
#line 525 "grammar.y"
	{
				yyval.tptr = MakeTree(MultOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 100:
#line 529 "grammar.y"
	{
				yyval.tptr = MakeTree(DivOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 101:
#line 533 "grammar.y"
	{
				yyval.tptr = MakeTree(AndOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 102:
#line 538 "grammar.y"
	{
				yyval.tptr = MakeTree(VarOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), yystack.l_mark[0].tptr);
			}
break;
case 103:
#line 543 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 104:
#line 547 "grammar.y"
	{
				yyval.tptr = MakeTree(SelectOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 105:
#line 551 "grammar.y"
	{
				yyval.tptr = MakeTree(SelectOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 106:
#line 556 "grammar.y"
	{
				yyval.tptr = MakeTree(FieldOp, MakeLeaf(IDNode, yystack.l_mark[0].intg), NullExp());
			}
break;
case 107:
#line 561 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 108:
#line 566 "grammar.y"
	{
				yyval.tptr = MakeTree(IndexOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 109:
#line 570 "grammar.y"
	{
				yyval.tptr = MakeTree(IndexOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
#line 1354 "y.tab.c"
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
