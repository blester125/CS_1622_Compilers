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
#define MethodDecl_rec 296
#define Tail 297
#define FieldDecl_body 298
#define Bracket_rec1 299
#define Bracket_rec2 300
#define ArrayInitializer_body 301
#define ArrayCreationExpression_tail 302
#define FormalParameterList_z1 303
#define FormalParameterList 304
#define FormalParameterList_rec 305
#define IDENTIFIER_rec 306
#define Type_front 307
#define Statement_rec 308
#define MethodCallStatement_tail 309
#define Expression_rec 310
#define IfStatement 311
#define If_rec 312
#define Comp_op 313
#define Term 314
#define Expression_rec2 315
#define Variable_tail 316
#define Variable_rec 317
#define Variable_1 318
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,   15,   15,   16,   17,    1,    1,   18,   18,   18,
   18,   26,   26,   28,    3,    3,    6,    6,    5,    5,
    4,    4,   27,   27,    8,    9,    9,    7,    7,    7,
    7,    7,    7,    7,   19,    2,    2,    2,   21,   20,
   20,   11,   11,   22,   22,   38,   38,   23,   23,   23,
   24,   12,   12,   25,   13,   13,   14,   29,   30,   10,
   10,   10,   31,   31,   32,   33,   33,   33,   33,   33,
   33,   33,   35,   35,   35,   35,   35,   36,   36,   34,
   37,
};
static const short yylen[] = {                            2,
    4,    1,    2,    3,    3,    1,    2,    0,    1,    1,
    2,    7,    7,    1,    0,    1,    1,    3,    3,    2,
    1,    3,    1,    2,    3,    1,    2,    0,    1,    2,
    2,    2,    2,    2,    3,    0,    1,    2,    3,    1,
    3,    1,    3,    1,    2,    2,    3,    1,    1,    1,
    3,    1,    3,    2,    1,    2,    3,    3,    4,    0,
    1,    3,    1,    2,    3,    1,    3,    3,    3,    3,
    3,    3,    1,    1,    1,    3,    2,    1,    1,    1,
    1,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    2,    0,    3,    0,
    4,    0,    0,    0,    6,    0,   10,   14,    0,   37,
    0,    0,    0,    5,    7,   11,   35,   38,    0,   40,
    0,    0,    0,    0,    0,    0,   39,    0,    0,    0,
    0,   46,    0,   41,    0,    0,   80,   43,   49,   50,
   48,    0,    0,    0,    0,    0,   16,    0,   47,    0,
   52,    0,    0,   55,    0,    0,    0,    0,    0,    0,
    0,   20,    0,    0,    0,    0,    0,   51,    0,   56,
   67,   68,   69,   70,   71,   72,    0,   19,    0,   23,
    0,   12,   18,   13,   53,   57,   22,   81,   29,    0,
    0,    0,   26,    0,    0,    0,    0,    0,    0,   24,
   64,    0,   33,   25,   27,   30,   31,   32,   34,    0,
    0,   65,    0,    0,   58,   59,    0,   62,
};
static const short yydgoto[] = {                          2,
   14,   19,   55,   72,   56,   57,  103,   90,  104,  123,
   30,   60,   63,   64,    6,    7,   11,   15,   91,   31,
   20,   32,   48,   49,   50,   17,   92,   21,  105,  106,
  107,  108,  124,   52,    0,    0,  109,   36,
};
static const short yysindex[] = {                      -242,
 -227,    0, -222, -217, -213, -217,    0, -209,    0, -245,
    0, -277, -266, -248,    0, -216,    0,    0, -250,    0,
 -174, -173, -172,    0,    0,    0,    0,    0, -197,    0,
 -188, -177, -181, -179, -176, -178,    0, -174, -261, -194,
 -194,    0, -175,    0, -203, -171,    0,    0,    0,    0,
    0, -233, -164, -170, -169, -162,    0, -167,    0, -249,
    0, -203, -171,    0, -203, -203, -203, -203, -203, -203,
 -168,    0, -164, -189, -194, -189, -203,    0, -163,    0,
    0,    0,    0,    0,    0,    0, -164,    0, -251,    0,
 -166,    0,    0,    0,    0,    0,    0,    0,    0, -203,
 -203, -161,    0, -256, -159, -155, -153, -152, -229,    0,
    0, -166,    0,    0,    0,    0,    0,    0,    0, -203,
 -203,    0, -160, -154,    0,    0, -203,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,  108,    0,    0,    0, -151,
    0, -150,    0,    0,    0, -149,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -205,    0,
    0, -182,    0,    0,    0, -190,    0,    0,    0, -157,
 -157,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -224,    0,    0,    0, -156,    0,    0,    0,    0,
    0,    0, -180,    0,    0,    0,    0,    0,    0,    0,
 -240,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -148,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -143,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -147,
    0,    0,    0, -146,    0,    0, -147,    0,
};
static const short yygindex[] = {                         0,
    0,    0,   70,  -60,    0,   44,   16,  -90,    0,   -6,
   84,    0,    0,   62,    0,  120,    0,    0,  117,    0,
  109,    0,    0,    0,    0,   18,   53,  118,    0,    0,
    0,    0,  -39,   -2,    0,    0,    0,    0,
};
#define YYTABLESIZE 131
static const short yytable[] = {                         51,
  110,   98,   99,   45,   22,   61,   98,   99,   18,  114,
   46,   27,   88,   77,    1,   12,   78,   24,   21,   18,
  100,  122,   79,  101,   13,  100,   97,   13,  101,   21,
    3,   25,   47,   26,   66,   18,    4,   95,   66,  120,
   66,   66,    5,   66,    8,   66,  121,   65,   66,   67,
   68,   69,   70,   44,  102,   10,   13,   44,   44,  102,
  111,  112,   81,   82,   83,   84,   85,   86,   45,   35,
   37,   12,   45,   45,   38,   89,   42,   53,   54,   54,
   42,  125,   54,   29,   33,   34,   39,   40,   43,   41,
   47,   42,   59,   71,   87,   62,   75,  113,   89,  116,
   74,   73,   76,  117,   96,  118,  119,    1,  127,  126,
   58,   36,   15,   17,    8,   63,    9,   28,   93,  115,
  128,   44,   60,   61,   80,    9,   16,   28,   94,    0,
   23,
};
static const short yycheck[] = {                         39,
   91,  258,  259,  265,  271,   45,  258,  259,  286,  266,
  272,  262,   73,  263,  257,  261,  266,  266,  259,  286,
  277,  112,   62,  280,  273,  277,   87,  273,  280,  270,
  258,   14,  294,   16,  259,  286,  259,   77,  263,  269,
  265,  266,  260,  268,  258,  270,  276,  281,  282,  283,
  284,  285,  286,  259,  311,  265,  273,  263,  264,  311,
  100,  101,   65,   66,   67,   68,   69,   70,  259,  267,
  259,  261,  263,  264,  263,  265,  259,  272,  259,  274,
  263,  121,  263,  258,  258,  258,  264,  269,  267,  269,
  294,  268,  268,  258,  263,  267,  259,  259,  265,  259,
  270,  272,  270,  259,  268,  259,  259,    0,  263,  270,
   41,  262,  270,  270,  266,  259,  266,  266,   75,  104,
  127,   38,  270,  270,   63,    6,   10,   19,   76,   -1,
   13,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 318
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
"MethodDecl_rec","Tail","FieldDecl_body","Bracket_rec1","Bracket_rec2",
"ArrayInitializer_body","ArrayCreationExpression_tail","FormalParameterList_z1",
"FormalParameterList","FormalParameterList_rec","IDENTIFIER_rec","Type_front",
"Statement_rec","MethodCallStatement_tail","Expression_rec","IfStatement",
"If_rec","Comp_op","Term","Expression_rec2","Variable_tail","Variable_rec",
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
"StatementList_rec : StatementList_rec Statement",
"Statement :",
"Statement : SEMInum",
"Statement : AssignmentStatement SEMInum",
"Statement : MethodCallStatement SEMInum",
"Statement : ReturnStatement SEMInum",
"Statement : IfStatement SEMInum",
"Statement : WhileStatement SEMInum",
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
"Variable : IDnum",

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
#line 417 "grammar.y"

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

#line 399 "y.tab.c"

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
#line 34 "grammar.y"
	{  
                         yyval.tptr = MakeTree(ProgramOp, yystack.l_mark[0].tptr, MakeLeaf(IDNode, yystack.l_mark[-2].intg)); 
                         printtree(yyval.tptr, 0);
                       }
break;
case 2:
#line 40 "grammar.y"
	{  yyval.tptr = MakeTree(ClassOp, NullExp(), yystack.l_mark[0].tptr); }
break;
case 3:
#line 42 "grammar.y"
	{  yyval.tptr = MakeTree(ClassOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr); }
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
#line 85 "grammar.y"
	{
				tree headOp = MakeTree(HeadOp, MakeLeaf(IDNode, yystack.l_mark[-4].intg), yystack.l_mark[-2].tptr);
				yyval.tptr = MakeTree(MethodOp, headOp, yystack.l_mark[0].tptr);
			}
break;
case 13:
#line 90 "grammar.y"
	{
				tree headOp = MakeTree(HeadOp, MakeLeaf(IDNode, yystack.l_mark[-4].intg), yystack.l_mark[-2].tptr);
				yyval.tptr = MakeTree(MethodOp, headOp, yystack.l_mark[0].tptr);
			}
break;
case 14:
#line 97 "grammar.y"
	{
				yyval.tptr = MakeLeaf(TypeIdOp, yystack.l_mark[0].intg);
			}
break;
case 15:
#line 102 "grammar.y"
	{
				yyval.tptr = MakeTree(SpecOp, NullExp(), NullExp());
			}
break;
case 16:
#line 106 "grammar.y"
	{
				yyval.tptr = MakeTree(SpecOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 17:
#line 111 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 18:
#line 115 "grammar.y"
	{
				yyval.tptr = MkRightC(yystack.l_mark[0].tptr, yystack.l_mark[-2].tptr);
			}
break;
case 19:
#line 120 "grammar.y"
	{
				yyval.tptr = MakeVal(yystack.l_mark[0].tptr);
			}
break;
case 20:
#line 124 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 21:
#line 129 "grammar.y"
	{
				tree idTree = MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[0].intg), MakeLeaf(INTEGERTNode, 0));
				yyval.tptr = MakeTree(RArgTypeOp, idTree, NullExp());
			}
break;
case 22:
#line 134 "grammar.y"
	{
				tree idTree = MakeTree(CommaOp, MakeLeaf(IDNode, yystack.l_mark[-2].intg), MakeLeaf(INTEGERTNode, 0));
				tree formalParameter = MakeTree(RArgTypeOp, idTree, NullExp());
				yyval.tptr = MkRightC(yystack.l_mark[0].tptr, formalParameter);
			}
break;
case 23:
#line 141 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 24:
#line 145 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 25:
#line 150 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 26:
#line 155 "grammar.y"
	{
				yyval.tptr = MakeTree(StmtOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 27:
#line 159 "grammar.y"
	{
				yyval.tptr = MakeTree(StmtOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 28:
#line 165 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 29:
#line 169 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 30:
#line 173 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 31:
#line 177 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 32:
#line 181 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 33:
#line 185 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 34:
#line 189 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 35:
#line 194 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 36:
#line 205 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, NullExp(), NullExp());
			}
break;
case 37:
#line 209 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 38:
#line 213 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 39:
#line 219 "grammar.y"
	{
				/* Save Type */
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 40:
#line 225 "grammar.y"
	{
				yyval.tptr = MakeTree(DeclOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 41:
#line 229 "grammar.y"
	{
				yyval.tptr = MakeTree(DeclOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 42:
#line 235 "grammar.y"
	{
				/* set Left child to Type */
				tree commaTree = MakeTree(CommaOp, NullExp(), NullExp());
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[0].tptr, commaTree);
			}
break;
case 43:
#line 241 "grammar.y"
	{
				/* set Left child to Type */
				tree commaTree = MakeTree(CommaOp, NullExp(), yystack.l_mark[0].tptr);
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[-2].tptr, commaTree);
			}
break;
case 44:
#line 248 "grammar.y"
	{
				printf("VarDecId");
				yyval.tptr = MakeLeaf(IDNode, yystack.l_mark[0].intg);
			}
break;
case 45:
#line 253 "grammar.y"
	{
				yyval.tptr = MakeLeaf(IDNode, yystack.l_mark[-1].intg);
			}
break;
case 48:
#line 261 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 49:
#line 265 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 50:
#line 269 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 51:
#line 274 "grammar.y"
	{
				/*TODO add type to right child*/
				yyval.tptr = MakeTree(ArrayTypeOp, yystack.l_mark[-1].tptr, NullExp());
			}
break;
case 52:
#line 280 "grammar.y"
	{
				yyval.tptr = MakeTree(CommaOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 53:
#line 284 "grammar.y"
	{
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 54:
#line 289 "grammar.y"
	{
				/* TODO Add the type subtree */
				yyval.tptr = MakeTree(ArrayTypeOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 55:
#line 295 "grammar.y"
	{
				yyval.tptr = MakeTree(BoundOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 56:
#line 299 "grammar.y"
	{
				yyval.tptr = MakeTree(BoundOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 57:
#line 304 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 58:
#line 309 "grammar.y"
	{
				tree assignOp = MakeTree(AssignOp, NullExp(), yystack.l_mark[-2].tptr);
				yyval.tptr = MakeTree(AssignOp, assignOp, yystack.l_mark[0].tptr);
			}
break;
case 59:
#line 315 "grammar.y"
	{
				yyval.tptr = MakeTree(RoutineCallOp, yystack.l_mark[-3].tptr, yystack.l_mark[-1].tptr);
			}
break;
case 60:
#line 320 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 61:
#line 324 "grammar.y"
	{
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 62:
#line 328 "grammar.y"
	{
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 63:
#line 333 "grammar.y"
	{
				yyval.tptr = MakeTree(ReturnOp, NullExp(), NullExp());
			}
break;
case 64:
#line 337 "grammar.y"
	{
				yyval.tptr = MakeTree(ReturnOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 65:
#line 342 "grammar.y"
	{
				yyval.tptr = MakeTree(LoopOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 66:
#line 347 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 67:
#line 351 "grammar.y"
	{
				yyval.tptr = MakeTree(LTOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 68:
#line 355 "grammar.y"
	{
				yyval.tptr = MakeTree(LEOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 69:
#line 359 "grammar.y"
	{
				yyval.tptr = MakeTree(EQOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 70:
#line 363 "grammar.y"
	{
				yyval.tptr = MakeTree(NEOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 71:
#line 367 "grammar.y"
	{
				yyval.tptr = MakeTree(GEOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 72:
#line 371 "grammar.y"
	{
				yyval.tptr = MakeTree(GTOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 73:
#line 376 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 74:
#line 380 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 75:
#line 384 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 76:
#line 388 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 77:
#line 392 "grammar.y"
	{
				yyval.tptr = MakeTree(UnaryNegOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 78:
#line 397 "grammar.y"
	{
				yyval.tptr = MakeLeaf(INTEGERTNode, yystack.l_mark[0].intg);
			}
break;
case 79:
#line 401 "grammar.y"
	{
				yyval.tptr = MakeLeaf(STRINGNode, yystack.l_mark[0].intg);
			}
break;
case 80:
#line 406 "grammar.y"
	{
				yyval.tptr = MakeLeaf(NUMNode, yystack.l_mark[0].intg);
			}
break;
case 81:
#line 412 "grammar.y"
	{
				yyval.tptr = MakeTree(VarOp, MakeLeaf(IDNode, yystack.l_mark[0].intg), NullExp());
			}
break;
#line 1086 "y.tab.c"
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
