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
#define IfStatement 312
#define If_rec 313
#define Comp_op 314
#define Term 315
#define Expression_rec2 316
#define Variable_tail 317
#define Variable_1 318
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,   18,   18,   19,   20,    1,    1,   21,   21,   21,
   21,   29,   29,   31,    3,    3,    6,    6,    5,    5,
    4,    4,   30,   30,    8,    9,    9,    7,    7,    7,
    7,    7,    7,    7,   22,    2,    2,    2,   24,   23,
   23,   11,   11,   25,   25,   42,   42,   26,   26,   26,
   27,   12,   12,   28,   13,   13,   14,   32,   33,   10,
   10,   10,   34,   34,   35,   36,   36,   36,   36,   36,
   36,   36,   38,   38,   38,   38,   38,   39,   39,   37,
   40,   41,   41,   41,   15,   16,   17,   17,
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
    2,    0,    2,    2,    2,    3,    1,    3,
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
    0,   12,   18,   13,   53,   57,   22,    0,   29,    0,
    0,    0,   26,    0,    0,    0,    0,    0,    0,   24,
    0,    0,    0,    0,   81,   64,    0,   33,   25,   27,
   30,   31,   32,   34,    0,    0,    0,    0,   85,   84,
   83,   65,    0,    0,   58,   86,    0,   59,    0,   88,
   62,
};
static const short yydgoto[] = {                          2,
   14,   19,   55,   72,   56,   57,  103,   90,  104,  133,
   30,   60,   63,   64,  113,  114,  127,    6,    7,   11,
   15,   91,   31,   20,   32,   48,   49,   50,   17,   92,
   21,  105,  106,  107,  108,  128,   52,    0,    0,  109,
  115,   36,
};
static const short yysindex[] = {                      -241,
 -201,    0, -177, -229, -175, -229,    0, -192,    0, -248,
    0, -198, -267, -226,    0, -184,    0,    0, -257,    0,
 -168, -167, -166,    0,    0,    0,    0,    0, -174,    0,
 -185, -170, -173, -172, -169, -165,    0, -168, -258, -214,
 -214,    0, -164,    0, -199, -162,    0,    0,    0,    0,
    0, -215, -160, -171, -163, -156,    0, -161,    0, -220,
    0, -199, -162,    0, -199, -199, -199, -199, -199, -199,
 -157,    0, -160, -186, -214, -186, -199,    0, -158,    0,
    0,    0,    0,    0,    0,    0, -160,    0, -247,    0,
 -154,    0,    0,    0,    0,    0,    0, -249,    0, -199,
 -199, -151,    0, -256, -147, -146, -145, -144, -228,    0,
 -199, -142, -249, -249,    0,    0, -154,    0,    0,    0,
    0,    0,    0,    0, -199, -199, -150, -143,    0,    0,
    0,    0, -153, -141,    0,    0, -199,    0, -199,    0,
    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,  119,    0,    0,    0, -140,
    0, -139,    0,    0,    0, -138,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -200,    0,
    0, -179,    0,    0,    0, -187,    0,    0,    0, -149,
 -149,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -231,    0,    0,    0, -137,    0,    0,    0,    0,
    0,    0, -178,    0,    0,    0,    0,    0,    0,    0,
 -250,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -136,    0,
    0,    0,    0,    0,    0,    0,    0, -227,    0, -135,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0, -227, -227,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -134,    0,    0, -133,    0,    0,
    0,    0,    0, -132,    0,    0,    0,    0, -134,    0,
    0,
};
static const short yygindex[] = {                         0,
    0,    0,   84,  -65,    0,   52,   25,  -90,    0,   -8,
   94,    0,    0,   71,    0,    0,    2,    0,  131,    0,
    0,  130,    0,  122,    0,    0,    0,    0,    1,   66,
  132,    0,    0,    0,    0,  -39,  -15,    0,    0,    0,
  -69,    0,
};
#define YYTABLESIZE 145
static const short yytable[] = {                         51,
  110,   98,   99,   22,   27,   61,   45,   88,   21,  119,
   98,   99,   12,   46,   25,    1,   26,  111,   18,   21,
  100,   97,   79,  101,   13,  112,  132,   66,   18,  100,
    5,   66,  101,   66,   66,   47,   66,   95,   66,   24,
  125,   82,   77,  130,  131,   78,   13,  126,   82,   81,
   82,   83,   84,   85,   86,  102,    3,   53,   44,   54,
  116,  117,   44,   44,  102,   65,   66,   67,   68,   69,
   70,   45,   10,   37,   12,   45,   45,   38,   89,   42,
   54,    4,    8,   42,   54,  134,  135,   18,   13,   29,
   33,   34,   35,   39,   47,   40,   41,   71,   42,  134,
   73,   43,   75,   59,   62,   87,   74,  118,   76,   96,
   89,  121,  122,  123,  124,  129,  138,  136,    1,  137,
   15,  139,   36,   63,   58,    8,   93,    9,  120,   28,
  141,   44,   17,   80,   87,   60,    9,   61,  140,   16,
   28,   94,    0,    0,   23,
};
static const short yycheck[] = {                         39,
   91,  258,  259,  271,  262,   45,  265,   73,  259,  266,
  258,  259,  261,  272,   14,  257,   16,  267,  286,  270,
  277,   87,   62,  280,  273,  275,  117,  259,  286,  277,
  260,  263,  280,  265,  266,  294,  268,   77,  270,  266,
  269,  269,  263,  113,  114,  266,  273,  276,  276,   65,
   66,   67,   68,   69,   70,  312,  258,  272,  259,  274,
  100,  101,  263,  264,  312,  281,  282,  283,  284,  285,
  286,  259,  265,  259,  261,  263,  264,  263,  265,  259,
  259,  259,  258,  263,  263,  125,  126,  286,  273,  258,
  258,  258,  267,  264,  294,  269,  269,  258,  268,  139,
  272,  267,  259,  268,  267,  263,  270,  259,  270,  268,
  265,  259,  259,  259,  259,  258,  270,  268,    0,  263,
  270,  263,  262,  259,   41,  266,   75,  266,  104,  266,
  139,   38,  270,   63,  268,  270,    6,  270,  137,   10,
   19,   76,   -1,   -1,   13,
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
"Field_rec","MethodDecl_rec","Tail","FieldDecl_body","Bracket_rec1",
"Bracket_rec2","ArrayInitializer_body","ArrayCreationExpression_tail",
"FormalParameterList_z1","FormalParameterList","FormalParameterList_rec",
"IDENTIFIER_rec","Type_front","Statement_rec","MethodCallStatement_tail",
"Expression_rec","IfStatement","If_rec","Comp_op","Term","Expression_rec2",
"Variable_tail","Variable_1","illegal-symbol",
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
#line 450 "grammar.y"

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

#line 416 "y.tab.c"

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
				yyval.tptr = MakeTree(StmtOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 28:
#line 166 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 29:
#line 170 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 30:
#line 174 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 31:
#line 178 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 32:
#line 182 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 33:
#line 186 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 34:
#line 190 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 35:
#line 195 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 36:
#line 206 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, NullExp(), NullExp());
			}
break;
case 37:
#line 210 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 38:
#line 214 "grammar.y"
	{
				yyval.tptr = MakeTree(BodyOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 39:
#line 220 "grammar.y"
	{
				/* Save Type */
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 40:
#line 226 "grammar.y"
	{
				yyval.tptr = MakeTree(DeclOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 41:
#line 230 "grammar.y"
	{
				yyval.tptr = MakeTree(DeclOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 42:
#line 236 "grammar.y"
	{
				/* set Left child to Type */
				tree commaTree = MakeTree(CommaOp, NullExp(), NullExp());
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[0].tptr, commaTree);
			}
break;
case 43:
#line 242 "grammar.y"
	{
				/* set Left child to Type */
				tree commaTree = MakeTree(CommaOp, NullExp(), yystack.l_mark[0].tptr);
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[-2].tptr, commaTree);
			}
break;
case 44:
#line 249 "grammar.y"
	{
				printf("VarDecId");
				yyval.tptr = MakeLeaf(IDNode, yystack.l_mark[0].intg);
			}
break;
case 45:
#line 254 "grammar.y"
	{
				yyval.tptr = MakeLeaf(IDNode, yystack.l_mark[-1].intg);
			}
break;
case 48:
#line 262 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 49:
#line 266 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 50:
#line 270 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 51:
#line 275 "grammar.y"
	{
				/*TODO add type to right child*/
				yyval.tptr = MakeTree(ArrayTypeOp, yystack.l_mark[-1].tptr, NullExp());
			}
break;
case 52:
#line 281 "grammar.y"
	{
				yyval.tptr = MakeTree(CommaOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 53:
#line 285 "grammar.y"
	{
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 54:
#line 290 "grammar.y"
	{
				/* TODO Add the type subtree */
				yyval.tptr = MakeTree(ArrayTypeOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 55:
#line 296 "grammar.y"
	{
				yyval.tptr = MakeTree(BoundOp, NullExp(), yystack.l_mark[0].tptr);
			}
break;
case 56:
#line 300 "grammar.y"
	{
				yyval.tptr = MakeTree(BoundOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 57:
#line 305 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 58:
#line 310 "grammar.y"
	{
				tree assignOp = MakeTree(AssignOp, NullExp(), yystack.l_mark[-2].tptr);
				yyval.tptr = MakeTree(AssignOp, assignOp, yystack.l_mark[0].tptr);
			}
break;
case 59:
#line 316 "grammar.y"
	{
				yyval.tptr = MakeTree(RoutineCallOp, yystack.l_mark[-3].tptr, yystack.l_mark[-1].tptr);
			}
break;
case 60:
#line 321 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 61:
#line 325 "grammar.y"
	{
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 62:
#line 329 "grammar.y"
	{
				yyval.tptr = MakeTree(CommaOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 63:
#line 334 "grammar.y"
	{
				yyval.tptr = MakeTree(ReturnOp, NullExp(), NullExp());
			}
break;
case 64:
#line 338 "grammar.y"
	{
				yyval.tptr = MakeTree(ReturnOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 65:
#line 343 "grammar.y"
	{
				yyval.tptr = MakeTree(LoopOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 66:
#line 348 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 67:
#line 352 "grammar.y"
	{
				yyval.tptr = MakeTree(LTOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 68:
#line 356 "grammar.y"
	{
				yyval.tptr = MakeTree(LEOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 69:
#line 360 "grammar.y"
	{
				yyval.tptr = MakeTree(EQOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 70:
#line 364 "grammar.y"
	{
				yyval.tptr = MakeTree(NEOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 71:
#line 368 "grammar.y"
	{
				yyval.tptr = MakeTree(GEOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 72:
#line 372 "grammar.y"
	{
				yyval.tptr = MakeTree(GTOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
case 73:
#line 377 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 74:
#line 381 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 75:
#line 385 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[0].tptr;
			}
break;
case 76:
#line 389 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 77:
#line 393 "grammar.y"
	{
				yyval.tptr = MakeTree(UnaryNegOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 78:
#line 398 "grammar.y"
	{
				yyval.tptr = MakeLeaf(INTEGERTNode, yystack.l_mark[0].intg);
			}
break;
case 79:
#line 402 "grammar.y"
	{
				yyval.tptr = MakeLeaf(STRINGNode, yystack.l_mark[0].intg);
			}
break;
case 80:
#line 407 "grammar.y"
	{
				yyval.tptr = MakeLeaf(NUMNode, yystack.l_mark[0].intg);
			}
break;
case 81:
#line 413 "grammar.y"
	{
				yyval.tptr = MakeTree(VarOp, MakeLeaf(IDNode, yystack.l_mark[-1].intg), yystack.l_mark[0].tptr);
			}
break;
case 82:
#line 418 "grammar.y"
	{
				yyval.tptr = NullExp();
			}
break;
case 83:
#line 422 "grammar.y"
	{
				yyval.tptr = MakeTree(SelectOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 84:
#line 426 "grammar.y"
	{
				yyval.tptr = MakeTree(SelectOp, yystack.l_mark[-1].tptr, yystack.l_mark[0].tptr);
			}
break;
case 85:
#line 431 "grammar.y"
	{
				yyval.tptr = MakeTree(FieldOp, MakeLeaf(IDNode, yystack.l_mark[0].intg), NullExp());
			}
break;
case 86:
#line 436 "grammar.y"
	{
				yyval.tptr = yystack.l_mark[-1].tptr;
			}
break;
case 87:
#line 441 "grammar.y"
	{
				yyval.tptr = MakeTree(IndexOp, yystack.l_mark[0].tptr, NullExp());
			}
break;
case 88:
#line 445 "grammar.y"
	{
				yyval.tptr = MakeTree(IndexOp, yystack.l_mark[-2].tptr, yystack.l_mark[0].tptr);
			}
break;
#line 1145 "y.tab.c"
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
