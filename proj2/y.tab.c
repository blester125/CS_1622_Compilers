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
    0,    1,    1,    2,    3,    4,    4,    5,    5,    6,
   50,    6,    7,    7,    7,    7,    8,    8,    8,    9,
    9,   10,   10,   11,   11,   12,   12,   13,   13,   14,
   15,   15,   16,   16,   16,   16,   16,   16,   17,   17,
   18,   18,   18,   19,   20,   20,   21,   21,   22,   22,
   23,   23,   24,   24,   24,   25,   26,   26,   27,   28,
   28,   29,   30,   31,   32,   32,   32,   33,   33,   34,
   34,   35,   36,   36,   36,   36,   36,   36,   36,   37,
   37,   37,   37,   37,   38,   38,   39,   39,   39,   40,
   40,   41,   41,   41,   42,   43,   43,   44,   44,   44,
   45,   46,   46,   46,   47,   48,   49,   49,
};
static const short yylen[] = {                            2,
    4,    1,    2,    3,    4,    1,    2,    0,    1,    7,
    0,    8,    2,    2,    4,    4,    0,    2,    3,    0,
    1,    1,    3,    3,    2,    1,    3,    1,    2,    3,
    1,    3,    0,    1,    1,    1,    1,    1,    0,    3,
    0,    1,    2,    3,    1,    3,    1,    3,    1,    2,
    2,    3,    1,    1,    1,    3,    1,    3,    2,    1,
    2,    3,    3,    4,    0,    1,    3,    1,    2,    3,
    5,    3,    1,    3,    3,    3,    3,    3,    3,    1,
    1,    1,    3,    2,    1,    1,    2,    3,    3,    0,
    2,    2,    2,    2,    2,    0,    2,    2,    2,    2,
    2,    0,    2,    2,    2,    3,    1,    3,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    2,    0,    3,    0,
    4,    0,    0,    0,    0,    0,    0,   42,    0,    0,
    6,    9,    0,    0,    0,    0,    0,   45,    0,   40,
   43,   11,    0,    5,    7,   18,    0,    0,    0,    0,
    0,   44,    0,    0,    0,    0,   19,   15,   16,   51,
    0,   46,    0,    0,    0,    0,    0,    0,    0,   85,
   86,   48,   54,   55,   82,   53,    0,   80,    0,    0,
    0,    0,    0,   52,    0,    0,  101,    0,    0,    0,
   57,    0,    0,    0,   60,    0,    0,   84,    0,    0,
    0,   95,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   87,    0,    0,    0,    0,    0,    0,   21,
    0,    0,    0,  105,  104,  103,    0,   56,   83,    0,
   61,   88,   89,   98,   99,  100,   97,   74,   75,   76,
   77,   78,   79,   92,   93,   94,   91,    0,    0,    0,
    0,   25,    0,    0,    0,    0,  106,   58,   62,   64,
    0,    0,    0,   24,    0,   10,   28,    0,   23,  108,
   67,   12,   27,    0,    0,    0,    0,   31,   34,   35,
   36,   37,   38,    0,   29,   69,    0,    0,    0,   30,
    0,    0,   72,   32,   63,    0,   71,
};
static const short yydgoto[] = {                          2,
    6,    7,   11,   20,   21,   22,   16,   24,  109,  110,
  111,  142,  156,  157,  167,  168,  158,   17,   18,   27,
   28,   29,   41,   62,   63,   80,   64,   84,   85,  169,
   65,  138,  171,  172,  173,  112,   67,   68,   69,  103,
  104,   70,   92,   93,   71,   77,   78,   79,  113,   45,
};
static const short yysindex[] = {                      -242,
 -237,    0, -226, -160, -195, -160,    0, -142,    0,  -68,
    0, -179, -135, -115, -115, -148, -105,    0, -215, -249,
    0,    0,  -55, -197, -170,  -64,  -65,    0,  -62,    0,
    0,    0,  -43,    0,    0,    0,  -52, -179, -179,  -51,
  -49,    0, -148, -253,  -39,  -48,    0,    0,    0,    0,
  -46,    0, -163, -240, -240,  -47, -244, -244, -244,    0,
    0,    0,    0,    0,    0,    0,  -84,    0, -101,  -78,
  -45,  -42,  -60,    0, -240,  -35,    0, -163, -163,  -93,
    0,  -41, -240,  -47,    0,  -78,  -78,    0, -244, -244,
 -244,    0,  -84, -240, -240, -240, -240, -240, -240, -244,
 -244, -244,    0,  -78, -240,  -60,  -33,  -40,  -37,    0,
  -31,  -32,  -38,    0,    0,    0, -240,    0,    0,  -34,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -30,  -28,  -29,
  -26,    0,  -33,  -66,  -60, -240,    0,    0,    0,    0,
 -240,  -66,  -33,    0, -206,    0,    0,  -23,    0,    0,
    0,    0,    0, -240, -240, -240, -120,    0,    0,    0,
    0,    0,    0, -128,    0,    0,  -23,  -23, -206,    0,
 -240,  -36,    0,    0,    0,  -23,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,  226,    0,    0,    0, -122,
    0,  -24,  -22, -245, -245,    0,    0,    0,    0,    0,
    0,    0,    0,  -19,  -13, -109,    0,    0,  -59,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -67,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -201,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -123,    0,  -91, -167,
 -157,    0,  -21,    0,    0,    0,    0, -201, -201,    0,
    0,    0,    0,  -58,    0, -167, -167,    0,    0,    0,
    0,    0, -123,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -167,  -20,  -21,    0,    0,    0,    0,
  -18,  -17,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -16,    0,
 -250,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -20,    0,    0,    0, -110,    0,    0,    0,    0,    0,
    0,    0,    0,  -90,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -110,    0,
    0,  -88,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
    0,  230,    0,    0,    0,  227,  -12,  231,  142,  108,
    0,  -77,  103, -155,    0,   77,  247,    0,  241,    0,
  216,    0,    0,    0,    0,    0,    0,    0,  176,    0,
 -151,  110,    0,    0,    0,  -44,  -53,    0,   92,  -27,
    0,  -56,  169,    0, -147,   16,    0,    0,  117,    0,
};
#define YYTABLESIZE 263
static const short yytable[] = {                         66,
   86,   87,  175,  170,   53,   88,   33,  174,   26,   81,
   82,   54,   17,   53,    1,   55,   34,   53,   56,   26,
    3,  182,  183,   19,   55,   48,   49,  170,   55,   17,
  187,  174,    4,   57,   58,  124,  125,  126,  120,   59,
   60,   61,   14,  134,  135,  136,   57,   58,   59,   60,
   61,   53,   59,   60,   61,   32,   15,  102,  122,  123,
  139,  102,    8,  102,  102,  154,  102,  102,  102,   37,
  164,  165,  148,  166,  102,  163,  137,   38,   14,  102,
  102,  102,  102,  102,  102,  102,  102,  102,  102,  102,
  102,   90,   15,  115,  116,   90,   37,   90,   90,    5,
   90,   81,   90,   75,   39,   81,  139,   81,   81,   26,
   81,   76,   81,   90,   90,   90,   90,   90,   90,  176,
  177,  178,   10,   81,   81,   81,   81,   81,   81,   81,
   81,   81,   81,   81,   81,   96,  185,   19,  179,   96,
  105,   96,   96,   39,   96,  180,   96,  181,   33,   49,
   39,   23,   14,   49,   49,   33,   30,   96,   96,   96,
   96,   96,   96,   96,   96,   96,   15,   73,   68,  117,
   70,   73,  118,   73,   73,   68,   73,   70,   73,   94,
   95,   96,   97,   98,   99,  128,  129,  130,  131,  132,
  133,   50,   12,   42,   12,   50,   50,   43,  155,   47,
   59,   44,   40,   47,   59,   89,   90,   91,  100,  101,
  102,  107,   36,  108,   46,   47,   50,   51,   72,   83,
   73,   74,  114,  105,  141,    1,  106,  145,  119,  147,
  146,  143,  144,  149,  151,    9,  153,   41,   13,  150,
  152,  155,  186,    8,   14,   25,   35,  140,   20,   65,
  107,   22,  159,   66,  162,  184,   13,   31,   52,  121,
  161,  127,  160,
};
static const short yycheck[] = {                         44,
   57,   58,  158,  155,  258,   59,   19,  155,  259,   54,
   55,  265,  258,  258,  257,  269,  266,  258,  272,  270,
  258,  177,  178,  273,  269,   38,   39,  179,  269,  275,
  186,  179,  259,  287,  288,   89,   90,   91,   83,  293,
  294,  295,  258,  100,  101,  102,  287,  288,  293,  294,
  295,  258,  293,  294,  295,  271,  272,  259,   86,   87,
  105,  263,  258,  265,  266,  143,  268,  269,  270,  267,
  277,  278,  117,  280,  276,  153,  104,  275,  258,  281,
  282,  283,  284,  285,  286,  287,  288,  289,  290,  291,
  292,  259,  272,   78,   79,  263,  267,  265,  266,  260,
  268,  259,  270,  267,  275,  263,  151,  265,  266,  258,
  268,  275,  270,  281,  282,  283,  284,  285,  286,  164,
  165,  166,  265,  281,  282,  283,  284,  285,  286,  287,
  288,  289,  290,  291,  292,  259,  181,  273,  259,  263,
  269,  265,  266,  266,  268,  266,  270,  276,  259,  259,
  273,  267,  258,  263,  264,  266,  262,  281,  282,  283,
  284,  285,  286,  287,  288,  289,  272,  259,  259,  263,
  259,  263,  266,  265,  266,  266,  268,  266,  270,  281,
  282,  283,  284,  285,  286,   94,   95,   96,   97,   98,
   99,  259,  261,  259,  261,  263,  264,  263,  265,  259,
  259,  264,  267,  263,  263,  290,  291,  292,  287,  288,
  289,  272,  268,  274,  258,  268,  268,  267,  258,  267,
  269,  268,  258,  269,  258,    0,  269,  259,  270,  268,
  263,  272,  270,  268,  263,    6,  263,  262,  258,  270,
  270,  265,  279,  266,  258,   15,   20,  106,  270,  270,
  268,  270,  145,  270,  152,  179,   10,   17,   43,   84,
  151,   93,  146,
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
"ClassBody : LBRACEnum Decls MethodDecl_List RBRACEnum",
"MethodDecl_List : MethodDecl_z1",
"MethodDecl_List : MethodDecl_List MethodDecl",
"MethodDecl_z1 :",
"MethodDecl_z1 : MethodDecl",
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
"Decls :",
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
#line 576 "grammar.y"

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

#line 448 "y.tab.c"

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
				if (yystack.l_mark[-1].tptr == NullExp()) {
					yyval.tptr = yystack.l_mark[-2].tptr;
				}
				else {
					yyval.tptr = MkLeftC(yystack.l_mark[-2].tptr, yystack.l_mark[-1].tptr);
				}
			}
break;
case 6:
#line 63 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 7:
#line 67 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 8:
#line 72 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 9:
#line 76 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 10:
#line 81 "grammar.y"
	{
				tree headOp = MakeTree(HeadOp, MakeLeaf(IDNode, yystack.l_mark[-4].intg), yystack.l_mark[-2].tptr);
				yyval.tptr = MakeTree(MethodOp, headOp, yystack.l_mark[0].tptr);
			}
break;
case 11:
#line 87 "grammar.y"
	{type_tree = NullExp();}
break;
case 12:
#line 88 "grammar.y"
	{
				tree headOp = MakeTree(HeadOp, MakeLeaf(IDNode, yystack.l_mark[-4].intg), yystack.l_mark[-2].tptr);
				yyval.tptr = MakeTree(MethodOp, headOp, yystack.l_mark[0].tptr);
			}
break;
case 13:
#line 95 "grammar.y"
	{
				yyval.tptr = type_tree = MakeTree(TypeIdOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), yystack.l_mark[0].tptr);
			}
break;
case 14:
#line 99 "grammar.y"
	{
				yyval.tptr = type_tree = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, yystack.l_mark[-1].intg), yystack.l_mark[0].tptr);
			}
break;
case 15:
#line 103 "grammar.y"
	{
				tree typeTree = MakeTree(TypeIdOp, MakeLeaf(IDNode, yystack.l_mark[-3].intg), yystack.l_mark[-2].tptr);
				/* This code creates a tree that looks like the assignment pdf */			
				tree fieldTree = MakeTree(FieldOp, yystack.l_mark[0].tptr, NullExp());
				yyval.tptr = type_tree = MkRightC(fieldTree, typeTree); 
				/* This code creates a tree that looks like the example parser */
				/*$$ = type_tree = MkRightC($4, typeTree);*/
			}
break;
case 16:
#line 112 "grammar.y"
	{
				tree typeTree = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, yystack.l_mark[-3].intg), yystack.l_mark[-2].tptr);
				/* This code creates a tree that looks like the assignment pdf */
				tree fieldTree = MakeTree(FieldOp, yystack.l_mark[0].tptr, NullExp());
				yyval.tptr = type_tree = MkRightC(fieldTree, typeTree);
				/* This code creates a tree that looks like the example parser */
				/*$$ = type_tree = MkRightC($4, typeTree);*/
			}
break;
case 17:
#line 122 "grammar.y"
	{
				yyval.tptr = type_tree = NullExp();
			}
break;
case 18:
#line 126 "grammar.y"
	{
				yyval.tptr = type_tree = MakeTree(IndexOp, NullExp(), NullExp());
			}
break;
case 19:
#line 130 "grammar.y"
	{
				yyval.tptr = type_tree = MakeTree(IndexOp, NullExp(), yystack.l_mark[-2].tptr);
			}
break;
case 20:
#line 135 "grammar.y"
	{
				yyval.tptr = MakeTree(SpecOp, NullExp(), type_tree);
			}
break;
case 21:
#line 139 "grammar.y"
	{
				yyval.tptr = MakeTree(SpecOp, yystack.l_mark[0].tptr, type_tree);
			}
break;
case 22:
#line 144 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 23:
#line 148 "grammar.y"
	{
				yyval.tptr = MkRightC(yystack.l_mark[0].tptr, yystack.l_mark[-2].tptr);
			}
break;
case 24:
#line 153 "grammar.y"
	{
				yyval.tptr = MakeVal(yystack.l_mark[0].tptr);
			}
break;
case 25:
#line 157 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 26:
#line 162 "grammar.y"
	{
				tree idTree = MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[0].intg), MakeLeaf(INTEGERTNode, 0));
				yyval.tptr = MakeTree(RArgTypeOp, idTree, NullExp());
			}
break;
case 27:
#line 167 "grammar.y"
	{
				tree idTree = MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[-2].intg), MakeLeaf(INTEGERTNode, 0));
				tree formalParameter = MakeTree(RArgTypeOp, idTree, NullExp());
				yyval.tptr = MkRightC(yystack.l_mark[0].tptr, formalParameter);
			}
break;
case 28:
#line 174 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 29:
#line 178 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 30:
#line 183 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 31:
#line 188 "grammar.y"
	{	
				yyval.tptr = MakeTree(StmtOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 32:
#line 192 "grammar.y"
	{	
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = yystack.l_mark[-2].tptr;
				} else { 
					yyval.tptr = MakeTree(StmtOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
				}
			}
break;
case 33:
#line 201 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 34:
#line 205 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 35:
#line 209 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 36:
#line 213 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 37:
#line 217 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 38:
#line 221 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 39:
#line 226 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 40:
#line 230 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 41:
#line 236 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 42:
#line 245 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 43:
#line 249 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 44:
#line 254 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 45:
#line 259 "grammar.y"
	{
				yyval.tptr = MakeTree(DeclOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 46:
#line 263 "grammar.y"
	{
				yyval.tptr = MakeTree(DeclOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 47:
#line 268 "grammar.y"
	{
				tree commaTree = MakeTree(CommaOp, type_tree, NullExp());
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[0].tptr, commaTree);
			}
break;
case 48:
#line 273 "grammar.y"
	{
				tree commaTree = MakeTree(CommaOp, type_tree, yystack.l_mark[0].tptr);
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[-2].tptr, commaTree);
			}
break;
case 49:
#line 279 "grammar.y"
	{
				yyval.tptr = MakeLeaf(IDNode, yystack.l_mark[0].intg);
			}
break;
case 50:
#line 283 "grammar.y"
	{
				yyval.tptr = MakeLeaf(IDNode, yystack.l_mark[-1].intg);
			}
break;
case 51:
#line 288 "grammar.y"
	{
				yyval.tptr = yyval.tptr;
			}
break;
case 52:
#line 292 "grammar.y"
	{
				yyval.tptr = yyval.tptr;
			}
break;
case 53:
#line 297 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 54:
#line 301 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 55:
#line 305 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 56:
#line 310 "grammar.y"
	{
				yyval.tptr = MakeTree(ArrayTypeOp, yystack.l_mark[-1].tptr, type_tree);
			}
break;
case 57:
#line 315 "grammar.y"
	{
				yyval.tptr = MakeTree(CommaOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 58:
#line 319 "grammar.y"
	{
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 59:
#line 324 "grammar.y"
	{
				yyval.tptr = MakeTree(ArrayTypeOp, yystack.l_mark[0].tptr, MakeLeaf(INTEGERTNode, yystack.l_mark[-1].intg));
			}
break;
case 60:
#line 329 "grammar.y"
	{
				yyval.tptr = MakeTree(BoundOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 61:
#line 333 "grammar.y"
	{
				yyval.tptr = MakeTree(BoundOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 62:
#line 338 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 63:
#line 343 "grammar.y"
	{
				tree assignOp = MakeTree(AssignOp, NullExp(), yystack.l_mark[-2].tptr);
				yyval.tptr = MakeTree(AssignOp, assignOp, yystack.l_mark[0].tptr);
			}
break;
case 64:
#line 349 "grammar.y"
	{
				yyval.tptr = MakeTree(RoutineCallOp, yystack.l_mark[-3].tptr, yystack.l_mark[-1].tptr);
			}
break;
case 65:
#line 354 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 66:
#line 358 "grammar.y"
	{
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 67:
#line 362 "grammar.y"
	{
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 68:
#line 367 "grammar.y"
	{
				yyval.tptr = MakeTree(ReturnOp, NullExp(), NullExp());
			}
break;
case 69:
#line 371 "grammar.y"
	{
				yyval.tptr = MakeTree(ReturnOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 70:
#line 376 "grammar.y"
	{
				tree commaTree = MakeTree(CommaOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
				yyval.tptr = MakeTree(IfElseOp, NullExp(), commaTree);
			}
break;
case 71:
#line 381 "grammar.y"
	{
				tree commaTree = MakeTree(CommaOp, yystack.l_mark[-3].tptr, yystack.l_mark[-2].tptr);
				tree ifTree = MakeTree(IfElseOp, NullExp(), commaTree);
				yyval.tptr = MakeTree(IfElseOp, ifTree, yystack.l_mark[0].tptr);	
			}
break;
case 72:
#line 388 "grammar.y"
	{
				yyval.tptr = MakeTree(LoopOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 73:
#line 393 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 74:
#line 397 "grammar.y"
	{
				yyval.tptr = MakeTree(LTOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 75:
#line 401 "grammar.y"
	{
				yyval.tptr = MakeTree(LEOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 76:
#line 405 "grammar.y"
	{
				yyval.tptr = MakeTree(EQOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 77:
#line 409 "grammar.y"
	{
				yyval.tptr = MakeTree(NEOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 78:
#line 413 "grammar.y"
	{
				yyval.tptr = MakeTree(GEOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 79:
#line 417 "grammar.y"
	{
				yyval.tptr = MakeTree(GTOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 80:
#line 422 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 81:
#line 426 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 82:
#line 430 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 83:
#line 434 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 84:
#line 438 "grammar.y"
	{
				yyval.tptr = MakeTree(NotOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 85:
#line 443 "grammar.y"
	{
				yyval.tptr = MakeLeaf(NUMNode, yystack.l_mark[0].intg);
			}
break;
case 86:
#line 447 "grammar.y"
	{
				yyval.tptr = MakeLeaf(STRINGNode, yystack.l_mark[0].intg);
			}
break;
case 87:
#line 452 "grammar.y"
	{
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = yystack.l_mark[-1].tptr;
				} else {
					yyval.tptr = MkLeftC(yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
				}
			}
break;
case 88:
#line 460 "grammar.y"
	{
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = yystack.l_mark[-1].tptr;
				} else {
					yyval.tptr = MkLeftC(yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
				}
			}
break;
case 89:
#line 468 "grammar.y"
	{
				tree neg = MakeTree(UnaryNegOp, yystack.l_mark[-1].tptr, NullExp());
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = neg;
				} else {
					yyval.tptr = MkLeftC(neg, yystack.l_mark[0].tptr);
				}
			}
break;
case 90:
#line 478 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 91:
#line 482 "grammar.y"
	{
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = yystack.l_mark[-1].tptr;
				} else {
					yyval.tptr = MkLeftC(yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
				}
			}
break;
case 92:
#line 491 "grammar.y"
	{
				yyval.tptr = MakeTree(AddOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 93:
#line 495 "grammar.y"
	{
				yyval.tptr = MakeTree(SubOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 94:
#line 499 "grammar.y"
	{
				yyval.tptr = MakeTree(OrOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 95:
#line 504 "grammar.y"
	{
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = yystack.l_mark[-1].tptr;
				} else {
					yyval.tptr = MkLeftC(yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
				}
			}
break;
case 96:
#line 513 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 97:
#line 517 "grammar.y"
	{
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = yystack.l_mark[-1].tptr;
				} else {
					yyval.tptr = MkLeftC(yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
				}
			}
break;
case 98:
#line 526 "grammar.y"
	{
				yyval.tptr = MakeTree(MultOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 99:
#line 530 "grammar.y"
	{
				yyval.tptr = MakeTree(DivOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 100:
#line 534 "grammar.y"
	{
				yyval.tptr = MakeTree(AndOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 101:
#line 539 "grammar.y"
	{
				yyval.tptr = MakeTree(VarOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), yystack.l_mark[0].tptr);
			}
break;
case 102:
#line 544 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 103:
#line 548 "grammar.y"
	{
				yyval.tptr = MakeTree(SelectOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 104:
#line 552 "grammar.y"
	{
				yyval.tptr = MakeTree(SelectOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 105:
#line 557 "grammar.y"
	{
				yyval.tptr = MakeTree(FieldOp, MakeLeaf(IDNode, yystack.l_mark[0].intg), NullExp());
			}
break;
case 106:
#line 562 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 107:
#line 567 "grammar.y"
	{
				yyval.tptr = MakeTree(IndexOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 108:
#line 571 "grammar.y"
	{
				yyval.tptr = MakeTree(IndexOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
#line 1352 "y.tab.c"
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
