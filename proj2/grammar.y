%{ /* definition */
#include "proj2.h"
#include "token.h"
#include <stdio.h>
%}
%token <intg> PROGRAMnum IDnum SEMInum
%type <tptr> Program
%% /* yacc specification */
Program : PROGRAMnum IDnum SEMInum
{ $$ = MakeTree(ProgramOp, MakeLeaf(DummyNode, 0), MakeLeaf(IDNode, $2)); printtree($$, 0); }
;
/* other rules */

%%
int yycolumn, yyline;
YYSTYPE yylval;
FILE *treelst;
main() { treelst = stdout; yyparse(); }
yyerror(char *str) { printf("yyerror: %s at line %d\n", str, yyline); }
#include "lex.yy.c"
