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

  tree type_record, type_method, argtype, bractemp;/* globals used to store treenode pointers */

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
#define RBRACNum 317
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,   23,   23,   24,   25,    1,    1,   26,   26,   26,
   26,   34,   34,   36,   36,   36,   36,   22,   22,   22,
    3,    3,    6,    6,    5,    5,    4,    4,   35,   35,
    8,    9,    9,    7,    7,    7,    7,    7,    7,   27,
    2,    2,    2,   29,   28,   28,   11,   11,   30,   30,
   49,   49,   31,   31,   31,   32,   12,   12,   33,   13,
   13,   14,   37,   38,   10,   10,   10,   39,   39,   40,
   40,   41,   42,   42,   42,   42,   42,   42,   42,   45,
   45,   45,   45,   45,   46,   46,   43,   43,   43,   21,
   21,   20,   20,   20,   44,   19,   19,   18,   18,   18,
   47,   48,   48,   48,   15,   16,   17,   17,
};
static const short yylen[] = {                            2,
    4,    1,    2,    3,    3,    1,    2,    0,    1,    1,
    2,    7,    7,    2,    2,    4,    4,    0,    2,    3,
    0,    1,    1,    3,    3,    2,    1,    3,    1,    2,
    3,    1,    3,    0,    1,    1,    1,    1,    1,    3,
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
    4,    0,    0,    0,    6,    0,   10,    0,    0,    0,
   42,    0,    0,    0,    5,    7,   11,    0,    0,    0,
   40,   43,    0,   45,    0,    0,    0,    0,   19,    0,
    0,    0,    0,    0,   44,    0,    0,    0,    0,   20,
   16,   17,   51,    0,   46,    0,    0,    0,    0,    0,
    0,    0,   85,   86,   48,   54,   55,   82,   53,    0,
    0,    0,   80,    0,    0,    0,    0,    0,   22,    0,
   52,    0,    0,    0,    0,  101,    0,   57,    0,    0,
    0,   60,    0,    0,   84,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   87,    0,    0,    0,    0,
   95,    0,    0,   26,    0,    0,    0,    0,    0,    0,
  105,  104,  103,    0,   56,   83,    0,   61,   88,   89,
   74,   75,   76,   77,   78,   79,   92,   93,   94,   91,
   98,   99,  100,   97,    0,    0,    0,   25,    0,   29,
    0,   12,   24,   13,  106,    0,   58,   62,   64,    0,
   28,    0,    0,    0,   32,    0,   35,   36,   37,   38,
   39,    0,   30,  108,   67,   69,    0,    0,    0,   31,
    0,    0,   72,   33,   63,    0,   71,
};
static const short yydgoto[] = {                          2,
   14,   20,   77,  114,   78,   79,  165,  150,  166,  145,
   34,   87,   91,   92,   84,   85,  119,  110,  111,  105,
  106,   29,    6,    7,   11,   15,  151,   35,   21,   36,
   65,   66,   67,   17,  152,   22,  167,   68,  169,  170,
  171,  120,   70,   71,   72,   73,   74,   86,   44,
};
static const short yysindex[] = {                      -236,
 -217,    0, -170, -133, -107, -133,    0, -117,    0, -244,
    0, -252, -187, -162,    0, -121,    0, -103, -103, -150,
    0,  -91,  -78,  -44,    0,    0,    0,  -52, -203, -201,
    0,    0,  -50,    0, -241,  -49,  -51,  -48,    0,  -98,
 -252, -252,  -46,  -43,    0,  -91, -256,  -62,  -62,    0,
    0,    0,    0,  -45,    0, -185, -235, -235,  -42, -239,
 -239, -239,    0,    0,    0,    0,    0,    0,    0,  -93,
  -85,  -83,    0,  -41,  -38,  -40,  -39,  -33,    0,  -37,
    0, -235,  -31, -185, -185,    0, -134,    0,  -36, -235,
  -42,    0,  -85,  -85,    0, -235, -235, -235, -235, -235,
 -235, -239, -239, -239,  -85,    0, -239, -239, -239,  -83,
    0, -235,  -34,    0,  -38, -221,  -62, -221,  -32,  -28,
    0,    0,    0, -235,    0,    0,  -30,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -29,  -26,  -38,    0, -253,    0,
  -35,    0,    0,    0,    0, -235,    0,    0,    0, -235,
    0, -235, -235, -235,    0, -140,    0,    0,    0,    0,
    0, -119,    0,    0,    0,    0,  -35,  -35, -253,    0,
 -235,  -27,    0,    0,    0,  -35,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,  239,    0,    0,    0,  -24,
    0,  -22,    0,    0,    0,  -23,    0, -230, -230,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -14,  -13,
    0,    0, -176,    0,    0, -196,    0,    0,    0,    0,
    0,    0,    0,  -58,    0,    0,    0,  -21,  -21,    0,
    0,    0,    0,    0,    0, -190,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -135,
 -100, -110,    0, -145,    0,    0,    0,  -20,    0,    0,
    0,    0,    0, -190, -190,    0,    0,    0,    0,    0,
 -156,    0, -100, -100,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -100,    0,    0,    0,    0, -110,
    0,  -19, -202,    0,    0,    0,    0,    0,    0,  -15,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -16,    0,    0, -105,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -19,
    0,  -97,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -105,    0,
    0,  -72,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
    0,    0,  198, -111,    0,  129,   69, -116,    0,   95,
  210,    0,    0,  166,    0,    0,  102,    0,  149,    0,
  -79,  241,    0,  255,    0,    0,  252,    0,  243,    0,
    0,    0,    0,  197,  146,   68,    0, -146,    0,    0,
    0,  -47,   99,  -53,  -61,    0, -137,   21,    0,
};
#define YYTABLESIZE 264
static const short yytable[] = {                         69,
   95,   56,  168,  148,   56,   18,   93,   94,   57,   88,
   89,  172,   58,  129,  130,   59,   12,   45,   56,   19,
    1,   46,   56,  162,  163,  140,  164,   18,   13,   58,
   60,   61,  168,   58,  173,  161,   62,   63,   64,   12,
    3,  172,  127,  149,   18,  141,  142,  143,  137,  138,
  139,   60,   61,   62,   63,   64,   27,   62,   63,   64,
  182,  183,   47,   40,  146,   40,   47,   27,  102,  187,
   18,   41,  102,   42,  102,  102,  157,  102,  102,  102,
   24,   82,   49,   23,   19,  102,   49,   49,    4,   83,
  102,  102,  102,  102,  102,  102,  102,  102,  102,  102,
  102,  102,   59,   25,  122,  123,   59,   18,   51,   52,
   13,   31,  146,   81,  176,  177,  178,   81,  179,   81,
   81,   19,   81,   73,   81,  180,    5,   73,  124,   73,
   73,  125,   73,  185,   73,   81,   81,   81,   81,   81,
   81,   81,   81,   81,   81,   81,   81,   10,   96,  112,
    8,   13,   96,   34,   96,   96,  181,   96,   90,   96,
   34,   68,   90,   28,   90,   90,   33,   90,   68,   90,
   96,   96,   96,   96,   96,   96,   96,   96,   96,   37,
   90,   90,   90,   90,   90,   90,   70,   96,   97,   98,
   99,  100,  101,   70,  131,  132,  133,  134,  135,  136,
   50,  102,  103,  104,   50,   50,  107,  108,  109,   75,
   26,   76,   27,   38,   47,   39,   43,   48,   50,  113,
   49,   53,   81,   54,   90,  117,  121,  112,  147,  149,
  116,  115,  118,  126,  156,  155,  160,  158,    1,   41,
  159,    8,    9,   14,   15,  153,   80,  184,   21,   23,
   65,  186,  107,   66,  175,   55,  128,  174,  144,   30,
    9,   16,   32,  154,
};
static const short yycheck[] = {                         47,
   62,  258,  149,  115,  258,  258,   60,   61,  265,   57,
   58,  149,  269,   93,   94,  272,  261,  259,  258,  272,
  257,  263,  258,  277,  278,  105,  280,  258,  273,  269,
  287,  288,  179,  269,  151,  147,  293,  294,  295,  261,
  258,  179,   90,  265,  275,  107,  108,  109,  102,  103,
  104,  287,  288,  293,  294,  295,  259,  293,  294,  295,
  177,  178,  259,  267,  112,  267,  263,  270,  259,  186,
  258,  275,  263,  275,  265,  266,  124,  268,  269,  270,
   13,  267,  259,  271,  272,  276,  263,  264,  259,  275,
  281,  282,  283,  284,  285,  286,  287,  288,  289,  290,
  291,  292,  259,  266,   84,   85,  263,  258,   41,   42,
  273,  262,  160,  259,  162,  163,  164,  263,  259,  265,
  266,  272,  268,  259,  270,  266,  260,  263,  263,  265,
  266,  266,  268,  181,  270,  281,  282,  283,  284,  285,
  286,  287,  288,  289,  290,  291,  292,  265,  259,  269,
  258,  273,  263,  259,  265,  266,  276,  268,  259,  270,
  266,  259,  263,  267,  265,  266,  258,  268,  266,  270,
  281,  282,  283,  284,  285,  286,  287,  288,  289,  258,
  281,  282,  283,  284,  285,  286,  259,  281,  282,  283,
  284,  285,  286,  266,   96,   97,   98,   99,  100,  101,
  259,  287,  288,  289,  263,  264,  290,  291,  292,  272,
   14,  274,   16,  258,  264,  268,  267,  269,  317,  258,
  269,  268,  268,  267,  267,  259,  258,  269,  263,  265,
  270,  272,  270,  270,  263,  268,  263,  268,    0,  262,
  270,  266,  266,  258,  258,  117,   49,  179,  270,  270,
  270,  279,  268,  270,  160,   46,   91,  156,  110,   19,
    6,   10,   20,  118,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 317
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
"Variable_1","RBRACNum","illegal-symbol",
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
"MethodDecl : METHODnum VOIDnum IDnum LPARENnum Formal_Parameter_List RPARENnum Block",
"MethodDecl : METHODnum Type IDnum LPARENnum Formal_Parameter_List RPARENnum Block",
"Type : IDnum Type_rec",
"Type : INTnum Type_rec",
"Type : IDnum Type_rec DOTnum Type",
"Type : INTnum Type_rec DOTnum Type",
"Type_rec :",
"Type_rec : LBRACnum RBRACnum",
"Type_rec : Type_rec LBRACnum RBRACNum",
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
#line 573 "grammar.y"

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
#line 50 "grammar.y"
	{
				yyval.tptr = MakeTree(ClassDefOp, yystack.l_mark[0].tptr, MakeLeaf(IDNode, yystack.l_mark[-1].intg));
			}
break;
case 5:
#line 55 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 6:
#line 60 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 7:
#line 64 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 8:
#line 69 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 9:
#line 73 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 10:
#line 77 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 11:
#line 81 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 12:
#line 87 "grammar.y"
	{
				tree headOp = MakeTree(HeadOp, MakeLeaf(IDNode, yystack.l_mark[-4].intg), yystack.l_mark[-2].tptr);
				yyval.tptr = MakeTree(MethodOp, headOp, yystack.l_mark[0].tptr);
			}
break;
case 13:
#line 92 "grammar.y"
	{
				tree headOp = MakeTree(HeadOp, MakeLeaf(IDNode, yystack.l_mark[-4].intg), yystack.l_mark[-2].tptr);
				yyval.tptr = MakeTree(MethodOp, headOp, yystack.l_mark[0].tptr);
			}
break;
case 14:
#line 99 "grammar.y"
	{
				yyval.tptr = MakeTree(TypeIdOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), yystack.l_mark[0].tptr);
				printtree(yyval.tptr, 0);
			}
break;
case 15:
#line 104 "grammar.y"
	{
				yyval.tptr = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, yystack.l_mark[-1].intg), yystack.l_mark[0].tptr);
				printtree(yyval.tptr, 0);
			}
break;
case 16:
#line 109 "grammar.y"
	{
				tree typeTree = MakeTree(TypeIdOp, MakeLeaf(IDNode, yystack.l_mark[-3].intg), yystack.l_mark[-2].tptr);
				yyval.tptr = MkRightC(yystack.l_mark[0].tptr, typeTree);
				printtree(yyval.tptr, 0);
			}
break;
case 17:
#line 115 "grammar.y"
	{
				tree typeTree = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, yystack.l_mark[-3].intg), yystack.l_mark[-2].tptr);
				yyval.tptr = MkRightC(yystack.l_mark[0].tptr, typeTree);
				printtree(yyval.tptr, 0);
			}
break;
case 18:
#line 122 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 19:
#line 126 "grammar.y"
	{
				yyval.tptr = MakeTree(IndexOp, NullExp(), NullExp());
			}
break;
case 20:
#line 130 "grammar.y"
	{
				yyval.tptr = MakeTree(IndexOp, NullExp(), yystack.l_mark[-2].tptr);
			}
break;
case 21:
#line 135 "grammar.y"
	{
				yyval.tptr = MakeTree(SpecOp, NullExp(), NullExp());
			}
break;
case 22:
#line 139 "grammar.y"
	{
				yyval.tptr = MakeTree(SpecOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 23:
#line 144 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 24:
#line 148 "grammar.y"
	{
				yyval.tptr = MkRightC(yystack.l_mark[0].tptr, yystack.l_mark[-2].tptr);
			}
break;
case 25:
#line 153 "grammar.y"
	{
				yyval.tptr = MakeVal(yystack.l_mark[0].tptr);
			}
break;
case 26:
#line 157 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 27:
#line 162 "grammar.y"
	{
				tree idTree = MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[0].intg), MakeLeaf(INTEGERTNode, 0));
				yyval.tptr = MakeTree(RArgTypeOp, idTree, NullExp());
			}
break;
case 28:
#line 167 "grammar.y"
	{
				tree idTree = MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[-2].intg), MakeLeaf(INTEGERTNode, 0));
				tree formalParameter = MakeTree(RArgTypeOp, idTree, NullExp());
				yyval.tptr = MkRightC(yystack.l_mark[0].tptr, formalParameter);
			}
break;
case 29:
#line 174 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 30:
#line 178 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 31:
#line 183 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 32:
#line 188 "grammar.y"
	{	
				yyval.tptr = MakeTree(StmtOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 33:
#line 192 "grammar.y"
	{	
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = yystack.l_mark[-2].tptr;
				} else { 
					yyval.tptr = MakeTree(StmtOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
				}
			}
break;
case 34:
#line 201 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 35:
#line 205 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 36:
#line 209 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 37:
#line 213 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 38:
#line 217 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 39:
#line 221 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 40:
#line 226 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 41:
#line 237 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, NullExp(), NullExp());
			}
break;
case 42:
#line 241 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 43:
#line 245 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 44:
#line 251 "grammar.y"
	{
				/* Save Type */
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 45:
#line 257 "grammar.y"
	{
				yyval.tptr = MakeTree(DeclOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 46:
#line 261 "grammar.y"
	{
				yyval.tptr = MakeTree(DeclOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 47:
#line 267 "grammar.y"
	{
				/* set Left child to Type */
				tree commaTree = MakeTree(CommaOp, NullExp(), NullExp());
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[0].tptr, commaTree);
			}
break;
case 48:
#line 273 "grammar.y"
	{
				/* set Left child to Type */
				tree commaTree = MakeTree(CommaOp, NullExp(), yystack.l_mark[0].tptr);
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[-2].tptr, commaTree);
			}
break;
case 49:
#line 280 "grammar.y"
	{
				yyval.tptr = MakeLeaf(IDNode, yystack.l_mark[0].intg);
			}
break;
case 50:
#line 284 "grammar.y"
	{
				yyval.tptr = MakeLeaf(IDNode, yystack.l_mark[-1].intg);
			}
break;
case 53:
#line 292 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
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
#line 305 "grammar.y"
	{
				/*TODO add type to right child*/
				yyval.tptr = MakeTree(ArrayTypeOp, yystack.l_mark[-1].tptr, NullExp());
			}
break;
case 57:
#line 311 "grammar.y"
	{
				yyval.tptr = MakeTree(CommaOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 58:
#line 315 "grammar.y"
	{
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 59:
#line 320 "grammar.y"
	{
				/* TODO Add the type subtree */
				yyval.tptr = MakeTree(ArrayTypeOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 60:
#line 326 "grammar.y"
	{
				yyval.tptr = MakeTree(BoundOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 61:
#line 330 "grammar.y"
	{
				yyval.tptr = MakeTree(BoundOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 62:
#line 335 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 63:
#line 340 "grammar.y"
	{
				tree assignOp = MakeTree(AssignOp, NullExp(), yystack.l_mark[-2].tptr);
				yyval.tptr = MakeTree(AssignOp, assignOp, yystack.l_mark[0].tptr);
			}
break;
case 64:
#line 346 "grammar.y"
	{
				yyval.tptr = MakeTree(RoutineCallOp, yystack.l_mark[-3].tptr, yystack.l_mark[-1].tptr);
			}
break;
case 65:
#line 351 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 66:
#line 355 "grammar.y"
	{
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 67:
#line 359 "grammar.y"
	{
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 68:
#line 364 "grammar.y"
	{
				yyval.tptr = MakeTree(ReturnOp, NullExp(), NullExp());
			}
break;
case 69:
#line 368 "grammar.y"
	{
				yyval.tptr = MakeTree(ReturnOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 70:
#line 373 "grammar.y"
	{
				tree commaTree = MakeTree(CommaOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
				yyval.tptr = MakeTree(IfElseOp, NullExp(), commaTree);
			}
break;
case 71:
#line 378 "grammar.y"
	{
				tree commaTree = MakeTree(CommaOp, yystack.l_mark[-3].tptr, yystack.l_mark[-2].tptr);
				tree ifTree = MakeTree(IfElseOp, NullExp(), commaTree);
				yyval.tptr = MakeTree(IfElseOp, ifTree, yystack.l_mark[0].tptr);	
			}
break;
case 72:
#line 385 "grammar.y"
	{
				yyval.tptr = MakeTree(LoopOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 73:
#line 390 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 74:
#line 394 "grammar.y"
	{
				yyval.tptr = MakeTree(LTOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 75:
#line 398 "grammar.y"
	{
				yyval.tptr = MakeTree(LEOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 76:
#line 402 "grammar.y"
	{
				yyval.tptr = MakeTree(EQOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 77:
#line 406 "grammar.y"
	{
				yyval.tptr = MakeTree(NEOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 78:
#line 410 "grammar.y"
	{
				yyval.tptr = MakeTree(GEOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 79:
#line 414 "grammar.y"
	{
				yyval.tptr = MakeTree(GTOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 80:
#line 419 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 81:
#line 423 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 82:
#line 427 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 83:
#line 431 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 84:
#line 435 "grammar.y"
	{
				yyval.tptr = MakeTree(NotOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 85:
#line 440 "grammar.y"
	{
				yyval.tptr = MakeLeaf(INTEGERTNode, yystack.l_mark[0].intg);
			}
break;
case 86:
#line 444 "grammar.y"
	{
				yyval.tptr = MakeLeaf(STRINGNode, yystack.l_mark[0].intg);
			}
break;
case 87:
#line 449 "grammar.y"
	{
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = yystack.l_mark[-1].tptr;
				} else {
					yyval.tptr = MkLeftC(yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
				}
			}
break;
case 88:
#line 457 "grammar.y"
	{
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = yystack.l_mark[-1].tptr;
				} else {
					yyval.tptr = MkLeftC(yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
				}
			}
break;
case 89:
#line 465 "grammar.y"
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
#line 475 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 91:
#line 479 "grammar.y"
	{
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = yystack.l_mark[-1].tptr;
				} else {
					yyval.tptr = MkLeftC(yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
				}
			}
break;
case 92:
#line 488 "grammar.y"
	{
				yyval.tptr = MakeTree(AddOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 93:
#line 492 "grammar.y"
	{
				yyval.tptr = MakeTree(SubOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 94:
#line 496 "grammar.y"
	{
				yyval.tptr = MakeTree(OrOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 95:
#line 501 "grammar.y"
	{
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = yystack.l_mark[-1].tptr;
				} else {
					yyval.tptr = MkLeftC(yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
				}
			}
break;
case 96:
#line 510 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 97:
#line 514 "grammar.y"
	{
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = yystack.l_mark[-1].tptr;
				} else {
					yyval.tptr = MkLeftC(yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
				}
			}
break;
case 98:
#line 523 "grammar.y"
	{
				yyval.tptr = MakeTree(MultOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 99:
#line 527 "grammar.y"
	{
				yyval.tptr = MakeTree(DivOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 100:
#line 531 "grammar.y"
	{
				yyval.tptr = MakeTree(AndOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 101:
#line 536 "grammar.y"
	{
				yyval.tptr = MakeTree(VarOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), yystack.l_mark[0].tptr);
			}
break;
case 102:
#line 541 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 103:
#line 545 "grammar.y"
	{
				yyval.tptr = MakeTree(SelectOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 104:
#line 549 "grammar.y"
	{
				yyval.tptr = MakeTree(SelectOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 105:
#line 554 "grammar.y"
	{
				yyval.tptr = MakeTree(FieldOp, MakeLeaf(IDNode, yystack.l_mark[0].intg), NullExp());
			}
break;
case 106:
#line 559 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 107:
#line 564 "grammar.y"
	{
				yyval.tptr = MakeTree(IndexOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 108:
#line 568 "grammar.y"
	{
				yyval.tptr = MakeTree(IndexOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
#line 1361 "y.tab.c"
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
