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
#define Term 314
#define Expression_rec2 315
#define Variable_tail 316
#define Variable_1 317
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,   18,   18,   19,   20,    1,    1,   21,   21,   21,
   21,   29,   29,   31,    3,    3,    6,    6,    5,    5,
    4,    4,   30,   30,    8,    9,    9,    7,    7,    7,
    7,    7,    7,   22,    2,    2,    2,   24,   23,   23,
   11,   11,   25,   25,   43,   43,   26,   26,   26,   27,
   12,   12,   28,   13,   13,   14,   32,   33,   10,   10,
   10,   34,   34,   35,   35,   36,   37,   37,   37,   37,
   37,   37,   37,   39,   39,   39,   39,   39,   40,   40,
   38,   38,   41,   42,   42,   42,   15,   16,   17,   17,
};
static const short yylen[] = {                            2,
    4,    1,    2,    3,    3,    1,    2,    0,    1,    1,
    2,    7,    7,    1,    0,    1,    1,    3,    3,    2,
    1,    3,    1,    2,    3,    1,    3,    0,    1,    1,
    1,    1,    1,    3,    0,    1,    2,    3,    1,    3,
    1,    3,    1,    2,    2,    3,    1,    1,    1,    3,
    1,    3,    2,    1,    2,    3,    3,    4,    0,    1,
    3,    1,    2,    3,    5,    3,    1,    3,    3,    3,
    3,    3,    3,    1,    1,    1,    3,    2,    1,    1,
    1,    3,    2,    0,    2,    2,    2,    3,    1,    3,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    2,    0,    3,    0,
    4,    0,    0,    0,    6,    0,   10,   14,    0,   36,
    0,    0,    0,    5,    7,   11,   34,   37,    0,   39,
    0,    0,    0,    0,    0,    0,   38,    0,    0,    0,
    0,   45,    0,   40,    0,    0,    0,   81,   42,   48,
   49,   47,    0,    0,    0,    0,    0,   16,    0,   46,
    0,   51,    0,    0,    0,    0,   54,    0,    0,    0,
    0,    0,    0,    0,   20,    0,    0,    0,    0,    0,
   50,    0,    0,    0,    0,   83,   82,    0,   55,   68,
   69,   70,   71,   72,   73,    0,   19,    0,   23,    0,
   12,   18,   13,   52,    0,    0,   87,   86,   85,   56,
   22,    0,    0,    0,   26,    0,   29,   30,   31,   32,
   33,    0,   24,   88,    0,   63,    0,    0,    0,   25,
    0,    0,   90,    0,   66,   27,    0,    0,   57,    0,
   58,    0,   65,   61,
};
static const short yydgoto[] = {                          2,
   14,   19,   56,   75,   57,   58,  115,   99,  116,  137,
   30,   61,   66,   67,   84,   85,  105,    6,    7,   11,
   15,  100,   31,   20,   32,   49,   50,   51,   17,  101,
   21,  117,  118,  119,  120,  121,  106,   53,    0,    0,
  122,   86,   36,
};
static const short yysindex[] = {                      -239,
 -223,    0, -204, -203, -187, -203,    0, -182,    0, -242,
    0, -195, -259, -226,    0, -174,    0,    0, -258,    0,
 -162, -161, -158,    0,    0,    0,    0,    0, -166,    0,
 -191, -160, -167, -164, -159, -157,    0, -162, -262, -238,
 -238,    0, -156,    0, -261, -152, -154,    0,    0,    0,
    0,    0, -219, -151, -155, -150, -148,    0, -149,    0,
 -168,    0, -251, -147, -261, -154,    0, -261, -261, -261,
 -261, -261, -261, -145,    0, -151, -176, -238, -176, -261,
    0, -261, -144, -251, -251,    0,    0, -153,    0,    0,
    0,    0,    0,    0,    0, -151,    0, -257,    0, -146,
    0,    0,    0,    0, -143, -141,    0,    0,    0,    0,
    0, -261, -261, -261,    0, -210,    0,    0,    0,    0,
    0, -218,    0,    0, -261,    0, -146, -146, -257,    0,
 -261, -261,    0, -171,    0,    0, -142, -139,    0, -146,
    0, -261,    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,  116,    0,    0,    0, -140,
    0, -135,    0,    0,    0, -137,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -250,    0,
    0, -175,    0,    0,    0, -177,    0,    0,    0, -138,
 -138,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -220,    0,    0,    0, -136,    0,    0,    0,
    0,    0, -232,    0,    0, -169,    0,    0,    0,    0,
    0,    0,    0, -248,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -232, -232,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -207,    0,    0,
    0,    0,    0,    0,    0, -133,    0,    0,    0,    0,
    0, -206,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -207,    0,
 -134,    0,    0, -205,    0,    0,    0, -132,    0,    0,
    0, -134,    0,    0,
};
static const short yygindex[] = {                         0,
    0,    0,   89,  -71,    0,   53,    4,  -98,    0,   -5,
  101,    0,    0,   74,    0,    0,   16,    0,  136,    0,
    0,  133,    0,  125,    0,    0,    0,    0,    1,   66,
  134,    0,    0,    0,    0,    0,  -39,    8,    0,    0,
  100,  -15,    0,
};
#define YYTABLESIZE 147
static const short yytable[] = {                         52,
   63,  123,   45,   27,   97,   62,   46,   46,   43,   47,
   21,   22,   43,   43,   25,   82,   26,    1,   12,  112,
  113,   21,  114,   83,  111,   88,   18,   18,  134,  135,
   13,   48,   48,   54,    3,   55,   84,   84,   67,   24,
  104,  143,   67,   84,   67,   67,   13,   67,  129,   67,
  131,   28,   62,   64,    4,  130,    5,  132,   28,   62,
   64,   68,   69,   70,   71,   72,   73,   37,  108,  109,
    8,   38,  126,  127,  128,   90,   91,   92,   93,   94,
   95,   44,   10,   41,   12,   44,   44,   41,   98,   53,
   18,  138,  139,   53,   80,   29,   33,   81,   13,   34,
   35,   40,  138,   39,   41,   63,   74,  140,   42,   43,
   78,   60,   65,  107,  110,    1,   76,   96,   98,   77,
   79,  125,   87,  142,  124,    8,   35,  141,    9,   59,
  102,   15,  136,   17,   89,   59,  144,   60,   44,   89,
  133,    9,   16,   28,  103,   64,   23,
};
static const short yycheck[] = {                         39,
  258,  100,  265,  262,   76,   45,  269,  269,  259,  272,
  259,  271,  263,  264,   14,  267,   16,  257,  261,  277,
  278,  270,  280,  275,   96,   65,  286,  286,  127,  128,
  273,  294,  294,  272,  258,  274,  269,  270,  259,  266,
   80,  140,  263,  276,  265,  266,  273,  268,  259,  270,
  269,  259,  259,  259,  259,  266,  260,  276,  266,  266,
  266,  281,  282,  283,  284,  285,  286,  259,   84,   85,
  258,  263,  112,  113,  114,   68,   69,   70,   71,   72,
   73,  259,  265,  259,  261,  263,  264,  263,  265,  259,
  286,  131,  132,  263,  263,  258,  258,  266,  273,  258,
  267,  269,  142,  264,  269,  258,  258,  279,  268,  267,
  259,  268,  267,  258,  268,    0,  272,  263,  265,  270,
  270,  263,  270,  263,  268,  266,  262,  270,  266,   41,
   78,  270,  129,  270,  268,  270,  142,  270,   38,   66,
  125,    6,   10,   19,   79,   46,   13,
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
"Expression_rec","If_rec","Comp_op","Term","Expression_rec2","Variable_tail",
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
"MethodDecl : METHODnum VOIDnum IDnum LPARENnum Formal_Parameter_List RPARENnum Block",
"MethodDecl : METHODnum Type IDnum LPARENnum Formal_Parameter_List RPARENnum Block",
"Type : GTnum",
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
"SimpleExpression : ICONSTnum",
"SimpleExpression : LPARENnum Variable RPARENnum",
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
#line 467 "grammar.y"

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

#line 417 "y.tab.c"

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
#line 49 "grammar.y"
	{
				yyval.tptr = MakeTree(ClassDefOp, yystack.l_mark[0].tptr, MakeLeaf(IDNode, yystack.l_mark[-1].intg));
			}
break;
case 5:
#line 54 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 6:
#line 59 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 7:
#line 63 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 8:
#line 68 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 9:
#line 72 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 10:
#line 76 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 11:
#line 80 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 12:
#line 86 "grammar.y"
	{
				tree headOp = MakeTree(HeadOp, MakeLeaf(IDNode, yystack.l_mark[-4].intg), yystack.l_mark[-2].tptr);
				yyval.tptr = MakeTree(MethodOp, headOp, yystack.l_mark[0].tptr);
			}
break;
case 13:
#line 91 "grammar.y"
	{
				tree headOp = MakeTree(HeadOp, MakeLeaf(IDNode, yystack.l_mark[-4].intg), yystack.l_mark[-2].tptr);
				yyval.tptr = MakeTree(MethodOp, headOp, yystack.l_mark[0].tptr);
			}
break;
case 14:
#line 98 "grammar.y"
	{
				yyval.tptr = MakeLeaf(TypeIdOp, yystack.l_mark[0].intg);
			}
break;
case 15:
#line 103 "grammar.y"
	{
				yyval.tptr = MakeTree(SpecOp, NullExp(), NullExp());
			}
break;
case 16:
#line 107 "grammar.y"
	{
				yyval.tptr = MakeTree(SpecOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 17:
#line 112 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 18:
#line 116 "grammar.y"
	{
				yyval.tptr = MkRightC(yystack.l_mark[0].tptr, yystack.l_mark[-2].tptr);
			}
break;
case 19:
#line 121 "grammar.y"
	{
				yyval.tptr = MakeVal(yystack.l_mark[0].tptr);
			}
break;
case 20:
#line 125 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 21:
#line 130 "grammar.y"
	{
				tree idTree = MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[0].intg), MakeLeaf(INTEGERTNode, 0));
				yyval.tptr = MakeTree(RArgTypeOp, idTree, NullExp());
			}
break;
case 22:
#line 135 "grammar.y"
	{
				tree idTree = MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[-2].intg), MakeLeaf(INTEGERTNode, 0));
				tree formalParameter = MakeTree(RArgTypeOp, idTree, NullExp());
				yyval.tptr = MkRightC(yystack.l_mark[0].tptr, formalParameter);
			}
break;
case 23:
#line 142 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 24:
#line 146 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 25:
#line 151 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 26:
#line 156 "grammar.y"
	{	
				yyval.tptr = MakeTree(StmtOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 27:
#line 160 "grammar.y"
	{	
				if (yystack.l_mark[0].tptr == NullExp()) {
					yyval.tptr = yystack.l_mark[-2].tptr;
				} else { 
					yyval.tptr = MakeTree(StmtOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
				}
			}
break;
case 28:
#line 169 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 29:
#line 173 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 30:
#line 177 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 31:
#line 181 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 32:
#line 185 "grammar.y"
	{
				printf("Found If");
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 33:
#line 190 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 34:
#line 195 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 35:
#line 206 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, NullExp(), NullExp());
			}
break;
case 36:
#line 210 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 37:
#line 214 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 38:
#line 220 "grammar.y"
	{
				/* Save Type */
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 39:
#line 226 "grammar.y"
	{
				yyval.tptr = MakeTree(DeclOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 40:
#line 230 "grammar.y"
	{
				yyval.tptr = MakeTree(DeclOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 41:
#line 236 "grammar.y"
	{
				/* set Left child to Type */
				tree commaTree = MakeTree(CommaOp, NullExp(), NullExp());
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[0].tptr, commaTree);
			}
break;
case 42:
#line 242 "grammar.y"
	{
				/* set Left child to Type */
				tree commaTree = MakeTree(CommaOp, NullExp(), yystack.l_mark[0].tptr);
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[-2].tptr, commaTree);
			}
break;
case 43:
#line 249 "grammar.y"
	{
				printf("VarDecId");
				yyval.tptr = MakeLeaf(IDNode, yystack.l_mark[0].intg);
			}
break;
case 44:
#line 254 "grammar.y"
	{
				yyval.tptr = MakeLeaf(IDNode, yystack.l_mark[-1].intg);
			}
break;
case 47:
#line 262 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 48:
#line 266 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 49:
#line 270 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 50:
#line 275 "grammar.y"
	{
				/*TODO add type to right child*/
				yyval.tptr = MakeTree(ArrayTypeOp, yystack.l_mark[-1].tptr, NullExp());
			}
break;
case 51:
#line 281 "grammar.y"
	{
				yyval.tptr = MakeTree(CommaOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 52:
#line 285 "grammar.y"
	{
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 53:
#line 290 "grammar.y"
	{
				/* TODO Add the type subtree */
				yyval.tptr = MakeTree(ArrayTypeOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 54:
#line 296 "grammar.y"
	{
				yyval.tptr = MakeTree(BoundOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 55:
#line 300 "grammar.y"
	{
				yyval.tptr = MakeTree(BoundOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 56:
#line 305 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 57:
#line 310 "grammar.y"
	{
				tree assignOp = MakeTree(AssignOp, NullExp(), yystack.l_mark[-2].tptr);
				yyval.tptr = MakeTree(AssignOp, assignOp, yystack.l_mark[0].tptr);
			}
break;
case 58:
#line 316 "grammar.y"
	{
				yyval.tptr = MakeTree(RoutineCallOp, yystack.l_mark[-3].tptr, yystack.l_mark[-1].tptr);
			}
break;
case 59:
#line 321 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 60:
#line 325 "grammar.y"
	{
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 61:
#line 329 "grammar.y"
	{
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 62:
#line 334 "grammar.y"
	{
				yyval.tptr = MakeTree(ReturnOp, NullExp(), NullExp());
			}
break;
case 63:
#line 338 "grammar.y"
	{
				yyval.tptr = MakeTree(ReturnOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 64:
#line 344 "grammar.y"
	{
				tree commaTree = MakeTree(CommaOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
				yyval.tptr = MakeTree(IfElseOp, NullExp(), commaTree);
			}
break;
case 65:
#line 349 "grammar.y"
	{
				tree commaTree = MakeTree(CommaOp, yystack.l_mark[-3].tptr, yystack.l_mark[-2].tptr);
				tree ifTree = MakeTree(IfElseOp, NullExp(), commaTree);
				yyval.tptr = MakeTree(IfElseOp, ifTree, yystack.l_mark[0].tptr);	
			}
break;
case 66:
#line 356 "grammar.y"
	{
				yyval.tptr = MakeTree(LoopOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 67:
#line 361 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 68:
#line 365 "grammar.y"
	{
				yyval.tptr = MakeTree(LTOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 69:
#line 369 "grammar.y"
	{
				yyval.tptr = MakeTree(LEOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 70:
#line 373 "grammar.y"
	{
				yyval.tptr = MakeTree(EQOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 71:
#line 377 "grammar.y"
	{
				yyval.tptr = MakeTree(NEOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 72:
#line 381 "grammar.y"
	{
				yyval.tptr = MakeTree(GEOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 73:
#line 385 "grammar.y"
	{
				yyval.tptr = MakeTree(GTOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 74:
#line 390 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 75:
#line 394 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 76:
#line 398 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 77:
#line 402 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 78:
#line 406 "grammar.y"
	{
				yyval.tptr = MakeTree(UnaryNegOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 79:
#line 411 "grammar.y"
	{
				yyval.tptr = MakeLeaf(INTEGERTNode, yystack.l_mark[0].intg);
			}
break;
case 80:
#line 415 "grammar.y"
	{
				yyval.tptr = MakeLeaf(STRINGNode, yystack.l_mark[0].intg);
			}
break;
case 81:
#line 421 "grammar.y"
	{
				yyval.tptr = MakeLeaf(NUMNode, yystack.l_mark[0].intg);
			}
break;
case 82:
#line 425 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 83:
#line 430 "grammar.y"
	{
				yyval.tptr = MakeTree(VarOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), yystack.l_mark[0].tptr);
			}
break;
case 84:
#line 435 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 85:
#line 439 "grammar.y"
	{
				yyval.tptr = MakeTree(SelectOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 86:
#line 443 "grammar.y"
	{
				yyval.tptr = MakeTree(SelectOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 87:
#line 448 "grammar.y"
	{
				yyval.tptr = MakeTree(FieldOp, MakeLeaf(IDNode, yystack.l_mark[0].intg), NullExp());
			}
break;
case 88:
#line 453 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 89:
#line 458 "grammar.y"
	{
				yyval.tptr = MakeTree(IndexOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 90:
#line 462 "grammar.y"
	{
				yyval.tptr = MakeTree(IndexOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
#line 1166 "y.tab.c"
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
