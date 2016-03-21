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
#define RBRACum 317
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,   23,   23,   24,   25,    1,    1,   26,   26,   26,
   26,   34,   36,   36,   36,   36,   36,   22,   22,   22,
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
    2,    7,    1,    2,    2,    4,    4,    0,    2,    3,
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
    4,    0,    0,    0,    6,    0,   10,    0,   13,    0,
    0,   42,    0,    0,    5,    7,   11,    0,    0,    0,
   40,   43,    0,   45,    0,    0,    0,   19,    0,    0,
    0,    0,    0,   44,    0,    0,    0,   20,   16,   17,
   51,    0,   46,    0,    0,    0,    0,    0,    0,    0,
   85,   86,   48,   54,   55,   82,   53,    0,    0,    0,
   80,    0,    0,    0,    0,    0,   22,   52,    0,    0,
    0,    0,  101,    0,   57,    0,    0,    0,   60,    0,
    0,   84,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   87,    0,    0,    0,    0,   95,    0,    0,
   26,    0,    0,    0,    0,    0,  105,  104,  103,    0,
   56,   83,    0,   61,   88,   89,   74,   75,   76,   77,
   78,   79,   92,   93,   94,   91,   98,   99,  100,   97,
    0,    0,    0,   25,    0,   29,    0,   12,   24,  106,
    0,   58,   62,   64,    0,   28,    0,    0,    0,   32,
    0,   35,   36,   37,   38,   39,    0,   30,  108,   67,
   69,    0,    0,    0,   31,    0,    0,   72,   33,   63,
    0,   71,
};
static const short yydgoto[] = {                          2,
   14,   21,   75,  111,   76,   77,  160,  146,  161,  141,
   34,   84,   88,   89,   81,   82,  115,  107,  108,  102,
  103,   29,    6,    7,   11,   15,   16,   35,   22,   36,
   63,   64,   65,   17,  148,   23,  162,   66,  164,  165,
  166,  116,   68,   69,   70,   71,   72,   83,   43,
};
static const short yysindex[] = {                      -213,
 -151,    0, -144, -140, -135, -140,    0, -106,    0, -246,
    0, -187, -187, -245,    0, -142,    0,  -92,    0,  -92,
  -76,    0,  -96,  -71,    0,    0,    0,  -80, -255, -188,
    0,    0,  -84,    0, -195,  -60,  -52,    0, -127, -187,
 -187,  -50,  -48,    0,  -96, -236, -146,    0,    0,    0,
    0,  -47,    0, -167, -256, -256,  -45, -239, -239, -239,
    0,    0,    0,    0,    0,    0,    0, -180,  -73,  -79,
    0,  -49,  -35,  -44,  -43,  -34,    0,    0, -256,  -32,
 -167, -167,    0, -201,    0,  -41, -256,  -45,    0,  -73,
  -73,    0, -256, -256, -256, -256, -256, -256, -239, -239,
 -239,  -73,    0, -239, -239, -239,  -79,    0, -256,  -39,
    0,  -35, -179, -146,  -38,  -31,    0,    0,    0, -256,
    0,    0,  -37,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -36,  -30,  -35,    0, -254,    0,  -29,    0,    0,    0,
 -256,    0,    0,    0, -256,    0, -256, -256, -256,    0,
 -114,    0,    0,    0,    0,    0, -120,    0,    0,    0,
    0,  -29,  -29, -254,    0, -256,  -42,    0,    0,    0,
  -29,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,  235,    0,    0,    0,  -28,
    0,  -23,    0,    0,    0,  -26,    0, -233,    0, -233,
    0,    0,    0,    0,    0,    0,    0,    0,  -17,  -16,
    0,    0,  -70,    0,    0,  -54,    0,    0,    0,    0,
    0,    0,  -56,    0,    0,    0,  -27,    0,    0,    0,
    0,    0,    0, -193,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -141, -105, -115,
    0, -149,    0,    0,    0,  -25,    0,    0,    0,    0,
 -193, -193,    0,    0,    0,    0,    0,  -53,    0, -105,
 -105,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -105,    0,    0,    0,    0, -115,    0,  -24, -192,
    0,    0,    0,    0,    0,  -21,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  -22,    0,    0, -102,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -24,    0,  -75,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -102,    0,    0,  -74,    0,    0,    0,
    0,    0,
};
static const short yygindex[] = {                         0,
    0,    0,    0, -109,    0,  130,   75, -112,    0,   95,
  206,    0,    0,  164,    0,    0,  102,    0,  147,    0,
  -85,  236,    0,  249,    0,    0,  144,    0,  237,    0,
    0,    0,    0,    2,    0,   40,    0, -134,    0,    0,
    0,  -46,  104,  -51,  -59,    0, -131,   65,    0,
};
#define YYTABLESIZE 258
static const short yytable[] = {                         67,
   92,   54,  144,   54,  125,  126,   90,   91,   85,   86,
  163,   39,   56,  167,   12,   26,  136,   27,   54,   40,
   25,   54,  157,  158,   18,  159,   13,   13,   55,   56,
   58,   59,   56,  156,  168,   57,   60,   61,   62,  163,
  123,   18,  167,    1,  137,  138,  139,  133,  134,  135,
   58,   59,   24,   60,   61,   62,   60,   61,   62,  177,
  178,  120,  142,   44,  121,  102,   27,   45,  182,  102,
   18,  102,  102,  152,  102,  102,  102,   27,   39,   49,
   50,   12,  102,   19,   20,  145,   41,  102,  102,  102,
  102,  102,  102,  102,  102,  102,  102,  102,  102,   79,
   93,   94,   95,   96,   97,   98,    3,   80,  142,   81,
  171,  172,  173,   81,    4,   81,   81,   73,   81,    5,
   81,   73,    8,   73,   73,   73,   73,   74,   73,  180,
   13,   81,   81,   81,   81,   81,   81,   81,   81,   81,
   81,   81,   81,   96,  174,  118,  119,   96,  109,   96,
   96,  175,   96,   90,   96,  176,   34,   90,   10,   90,
   90,   33,   90,   34,   90,   96,   96,   96,   96,   96,
   96,   96,   96,   96,   28,   90,   90,   90,   90,   90,
   90,   18,   42,   68,   70,   31,   37,   38,   49,   48,
   68,   70,   49,   49,   19,   20,  127,  128,  129,  130,
  131,  132,   50,   46,   47,   59,   50,   50,   47,   59,
  104,  105,  106,   99,  100,  101,   47,   51,   52,  109,
   78,   87,  110,  143,  114,  117,  113,  112,  122,  150,
  153,  151,  155,  154,    1,  145,  181,    8,   41,    9,
   14,   15,   21,  149,   23,   65,  107,   66,  179,  170,
   53,  124,  169,  140,    9,   30,  147,   32,
};
static const short yycheck[] = {                         46,
   60,  258,  112,  258,   90,   91,   58,   59,   55,   56,
  145,  267,  269,  145,  261,   14,  102,   16,  258,  275,
  266,  258,  277,  278,  258,  280,  273,  273,  265,  269,
  287,  288,  269,  143,  147,  272,  293,  294,  295,  174,
   87,  275,  174,  257,  104,  105,  106,   99,  100,  101,
  287,  288,   13,  293,  294,  295,  293,  294,  295,  172,
  173,  263,  109,  259,  266,  259,  259,  263,  181,  263,
  258,  265,  266,  120,  268,  269,  270,  270,  267,   40,
   41,  261,  276,  271,  272,  265,  275,  281,  282,  283,
  284,  285,  286,  287,  288,  289,  290,  291,  292,  267,
  281,  282,  283,  284,  285,  286,  258,  275,  155,  259,
  157,  158,  159,  263,  259,  265,  266,  259,  268,  260,
  270,  263,  258,  265,  266,  272,  268,  274,  270,  176,
  273,  281,  282,  283,  284,  285,  286,  287,  288,  289,
  290,  291,  292,  259,  259,   81,   82,  263,  269,  265,
  266,  266,  268,  259,  270,  276,  259,  263,  265,  265,
  266,  258,  268,  266,  270,  281,  282,  283,  284,  285,
  286,  287,  288,  289,  267,  281,  282,  283,  284,  285,
  286,  258,  267,  259,  259,  262,  258,  268,  259,  317,
  266,  266,  263,  264,  271,  272,   93,   94,   95,   96,
   97,   98,  259,  264,  259,  259,  263,  264,  263,  263,
  290,  291,  292,  287,  288,  289,  269,  268,  267,  269,
  268,  267,  258,  263,  259,  258,  270,  272,  270,  268,
  268,  263,  263,  270,    0,  265,  279,  266,  262,  266,
  258,  258,  270,  114,  270,  270,  268,  270,  174,  155,
   45,   88,  151,  107,    6,   20,  113,   21,
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
"Variable_1","RBRACum","illegal-symbol",
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
"Type : VOIDnum",
"Type : IDnum Type_rec",
"Type : INTnum Type_rec",
"Type : IDnum Type_rec DOTnum Type",
"Type : INTnum Type_rec DOTnum Type",
"Type_rec :",
"Type_rec : LBRACnum RBRACnum",
"Type_rec : Type_rec LBRACnum RBRACum",
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
#line 562 "grammar.y"

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

#line 473 "y.tab.c"

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
#line 89 "grammar.y"
	{
				yyval.tptr = type_tree = NullExp();
			}
break;
case 14:
#line 93 "grammar.y"
	{
				yyval.tptr = type_tree = MakeTree(TypeIdOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), yystack.l_mark[0].tptr);
			}
break;
case 15:
#line 97 "grammar.y"
	{
				yyval.tptr = type_tree = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, yystack.l_mark[-1].intg), yystack.l_mark[0].tptr);
			}
break;
case 16:
#line 101 "grammar.y"
	{
				tree typeTree = MakeTree(TypeIdOp, MakeLeaf(IDNode, yystack.l_mark[-3].intg), yystack.l_mark[-2].tptr);
				/* This code creates a tree that looks like the assignment pdf				
				tree fieldTree = MakeTree(FieldOp, $4, NullExp());
				$$ = MkRightC(fieldTree, typeTree); */
				yyval.tptr = type_tree = MkRightC(yystack.l_mark[0].tptr, typeTree);
			}
break;
case 17:
#line 109 "grammar.y"
	{
				tree typeTree = MakeTree(TypeIdOp, MakeLeaf(INTEGERTNode, yystack.l_mark[-3].intg), yystack.l_mark[-2].tptr);
				/* This code creates a tree that looks like the assignment pdf
				tree fieldTree = MakeTree(FieldOp, $4, NullExp());
				$$ = MkRightC(fieldTree, typeTree); */
				yyval.tptr = type_tree = MkRightC(yystack.l_mark[0].tptr, typeTree);
			}
break;
case 18:
#line 118 "grammar.y"
	{
				yyval.tptr = type_tree = NullExp();
			}
break;
case 19:
#line 122 "grammar.y"
	{
				yyval.tptr = MakeTree(IndexOp, NullExp(), NullExp());
			}
break;
case 20:
#line 126 "grammar.y"
	{
				yyval.tptr = MakeTree(IndexOp, NullExp(), yystack.l_mark[-2].tptr);
			}
break;
case 21:
#line 131 "grammar.y"
	{
				yyval.tptr = MakeTree(SpecOp, NullExp(), type_tree);
			}
break;
case 22:
#line 135 "grammar.y"
	{
				yyval.tptr = MakeTree(SpecOp, yystack.l_mark[0].tptr, type_tree);
			}
break;
case 23:
#line 140 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 24:
#line 144 "grammar.y"
	{
				yyval.tptr = MkRightC(yystack.l_mark[0].tptr, yystack.l_mark[-2].tptr);
			}
break;
case 25:
#line 149 "grammar.y"
	{
				yyval.tptr = MakeVal(yystack.l_mark[0].tptr);
			}
break;
case 26:
#line 153 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 27:
#line 158 "grammar.y"
	{
				tree idTree = MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[0].intg), MakeLeaf(INTEGERTNode, 0));
				yyval.tptr = MakeTree(RArgTypeOp, idTree, NullExp());
			}
break;
case 28:
#line 163 "grammar.y"
	{
				tree idTree = MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[-2].intg), MakeLeaf(INTEGERTNode, 0));
				tree formalParameter = MakeTree(RArgTypeOp, idTree, NullExp());
				yyval.tptr = MkRightC(yystack.l_mark[0].tptr, formalParameter);
			}
break;
case 29:
#line 170 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 30:
#line 174 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 31:
#line 179 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 32:
#line 184 "grammar.y"
	{	
				yyval.tptr = MakeTree(StmtOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 33:
#line 188 "grammar.y"
	{	
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = yystack.l_mark[-2].tptr;
				} else { 
					yyval.tptr = MakeTree(StmtOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
				}
			}
break;
case 34:
#line 197 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 35:
#line 201 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 36:
#line 205 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 37:
#line 209 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 38:
#line 213 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 39:
#line 217 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 40:
#line 222 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 41:
#line 228 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 42:
#line 237 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 43:
#line 241 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 44:
#line 246 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 45:
#line 251 "grammar.y"
	{
				yyval.tptr = MakeTree(DeclOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 46:
#line 255 "grammar.y"
	{
				yyval.tptr = MakeTree(DeclOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 47:
#line 260 "grammar.y"
	{
				tree commaTree = MakeTree(CommaOp, type_tree, NullExp());
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[0].tptr, commaTree);
			}
break;
case 48:
#line 265 "grammar.y"
	{
				tree commaTree = MakeTree(CommaOp, type_tree, yystack.l_mark[0].tptr);
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[-2].tptr, commaTree);
			}
break;
case 49:
#line 271 "grammar.y"
	{
				yyval.tptr = MakeLeaf(IDNode, yystack.l_mark[0].intg);
			}
break;
case 50:
#line 275 "grammar.y"
	{
				yyval.tptr = MakeLeaf(IDNode, yystack.l_mark[-1].intg);
			}
break;
case 53:
#line 283 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 54:
#line 287 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 55:
#line 291 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 56:
#line 296 "grammar.y"
	{
				yyval.tptr = MakeTree(ArrayTypeOp, yystack.l_mark[-1].tptr, type_tree);
			}
break;
case 57:
#line 301 "grammar.y"
	{
				yyval.tptr = MakeTree(CommaOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 58:
#line 305 "grammar.y"
	{
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 59:
#line 310 "grammar.y"
	{
				yyval.tptr = MakeTree(ArrayTypeOp, yystack.l_mark[0].tptr, type_tree);
			}
break;
case 60:
#line 315 "grammar.y"
	{
				yyval.tptr = MakeTree(BoundOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 61:
#line 319 "grammar.y"
	{
				yyval.tptr = MakeTree(BoundOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 62:
#line 324 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 63:
#line 329 "grammar.y"
	{
				tree assignOp = MakeTree(AssignOp, NullExp(), yystack.l_mark[-2].tptr);
				yyval.tptr = MakeTree(AssignOp, assignOp, yystack.l_mark[0].tptr);
			}
break;
case 64:
#line 335 "grammar.y"
	{
				yyval.tptr = MakeTree(RoutineCallOp, yystack.l_mark[-3].tptr, yystack.l_mark[-1].tptr);
			}
break;
case 65:
#line 340 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 66:
#line 344 "grammar.y"
	{
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 67:
#line 348 "grammar.y"
	{
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 68:
#line 353 "grammar.y"
	{
				yyval.tptr = MakeTree(ReturnOp, NullExp(), NullExp());
			}
break;
case 69:
#line 357 "grammar.y"
	{
				yyval.tptr = MakeTree(ReturnOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 70:
#line 362 "grammar.y"
	{
				tree commaTree = MakeTree(CommaOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
				yyval.tptr = MakeTree(IfElseOp, NullExp(), commaTree);
			}
break;
case 71:
#line 367 "grammar.y"
	{
				tree commaTree = MakeTree(CommaOp, yystack.l_mark[-3].tptr, yystack.l_mark[-2].tptr);
				tree ifTree = MakeTree(IfElseOp, NullExp(), commaTree);
				yyval.tptr = MakeTree(IfElseOp, ifTree, yystack.l_mark[0].tptr);	
			}
break;
case 72:
#line 374 "grammar.y"
	{
				yyval.tptr = MakeTree(LoopOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 73:
#line 379 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 74:
#line 383 "grammar.y"
	{
				yyval.tptr = MakeTree(LTOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 75:
#line 387 "grammar.y"
	{
				yyval.tptr = MakeTree(LEOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 76:
#line 391 "grammar.y"
	{
				yyval.tptr = MakeTree(EQOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 77:
#line 395 "grammar.y"
	{
				yyval.tptr = MakeTree(NEOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 78:
#line 399 "grammar.y"
	{
				yyval.tptr = MakeTree(GEOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 79:
#line 403 "grammar.y"
	{
				yyval.tptr = MakeTree(GTOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 80:
#line 408 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 81:
#line 412 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 82:
#line 416 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 83:
#line 420 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 84:
#line 424 "grammar.y"
	{
				yyval.tptr = MakeTree(NotOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 85:
#line 429 "grammar.y"
	{
				yyval.tptr = MakeLeaf(NUMNode, yystack.l_mark[0].intg);
			}
break;
case 86:
#line 433 "grammar.y"
	{
				yyval.tptr = MakeLeaf(STRINGNode, yystack.l_mark[0].intg);
			}
break;
case 87:
#line 438 "grammar.y"
	{
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = yystack.l_mark[-1].tptr;
				} else {
					yyval.tptr = MkLeftC(yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
				}
			}
break;
case 88:
#line 446 "grammar.y"
	{
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = yystack.l_mark[-1].tptr;
				} else {
					yyval.tptr = MkLeftC(yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
				}
			}
break;
case 89:
#line 454 "grammar.y"
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
#line 464 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 91:
#line 468 "grammar.y"
	{
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = yystack.l_mark[-1].tptr;
				} else {
					yyval.tptr = MkLeftC(yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
				}
			}
break;
case 92:
#line 477 "grammar.y"
	{
				yyval.tptr = MakeTree(AddOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 93:
#line 481 "grammar.y"
	{
				yyval.tptr = MakeTree(SubOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 94:
#line 485 "grammar.y"
	{
				yyval.tptr = MakeTree(OrOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 95:
#line 490 "grammar.y"
	{
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = yystack.l_mark[-1].tptr;
				} else {
					yyval.tptr = MkLeftC(yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
				}
			}
break;
case 96:
#line 499 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 97:
#line 503 "grammar.y"
	{
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = yystack.l_mark[-1].tptr;
				} else {
					yyval.tptr = MkLeftC(yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
				}
			}
break;
case 98:
#line 512 "grammar.y"
	{
				yyval.tptr = MakeTree(MultOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 99:
#line 516 "grammar.y"
	{
				yyval.tptr = MakeTree(DivOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 100:
#line 520 "grammar.y"
	{
				yyval.tptr = MakeTree(AndOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 101:
#line 525 "grammar.y"
	{
				yyval.tptr = MakeTree(VarOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), yystack.l_mark[0].tptr);
			}
break;
case 102:
#line 530 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 103:
#line 534 "grammar.y"
	{
				yyval.tptr = MakeTree(SelectOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 104:
#line 538 "grammar.y"
	{
				yyval.tptr = MakeTree(SelectOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 105:
#line 543 "grammar.y"
	{
				yyval.tptr = MakeTree(FieldOp, MakeLeaf(IDNode, yystack.l_mark[0].intg), NullExp());
			}
break;
case 106:
#line 548 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 107:
#line 553 "grammar.y"
	{
				yyval.tptr = MakeTree(IndexOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 108:
#line 557 "grammar.y"
	{
				yyval.tptr = MakeTree(IndexOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
#line 1355 "y.tab.c"
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
