%{
#include  "proj2.h"
#include  <stdio.h>

  tree type_record, type_method, argtype, bractemp;/* globals used to store treenode pointers */

%}

%token <intg>  PROGRAMnum IDnum SEMInum CLASSnum  DECLARATIONSnum  ENDDECLARATIONSnum
%token <intg>  COMMAnum EQUALnum LBRACEnum RBRACEnum LBRACnum RBRACnum LPARENnum RPARENnum VOIDnum
%token <intg>  INTnum METHODnum VALnum DOTnum ASSGNnum RETURNnum IFnum ELSEnum WHILEnum
%token <intg>  LTnum LEnum EQnum NEnum GEnum GTnum PLUSnum MINUSnum ORnum TIMESnum DIVIDEnum ANDnum
%token <intg>  NOTnum ICONSTnum SCONSTnum

%type  <tptr>  Program ClassDecl_rec ClassDecl ClassBody MethodDecl_z1 MethodDecl_rec MethodDecl_List Decls
%type  <tptr>  FieldDecl_rec FieldDecl Tail FieldDecl_body VariableDeclId Bracket_rec1 Bracket_rec2
%type  <tptr>  VariableInitializer ArrayInitializer ArrayInitializer_body  ArrayCreationExpression
%type  <tptr>  ArrayCreationExpression_tail MethodDecl FormalParameterList_z1 FormalParameterList
%type  <tptr>  FormalParameterList_rec IDENTIFIER_rec Block Type Type_front 
%type  <tptr>  StatementList Statement_rec Statement AssignmentStatement MethodCallStatement
%type  <tptr>  MethodCallStatement_tail Expression_rec ReturnStatement IfStatement If_rec WhileStatement
%type  <tptr>  Expression Comp_op SimpleExpression Term Factor Expression_rec2
%type  <tptr>  UnsignedConstant Variable Variable_tail Variable_rec Variable_1 


%%/* yacc specification*/
Program         :      PROGRAMnum IDnum SEMInum ClassDecl_rec
                       {  
                         /* $$ = MakeTree(ProgramOp, $4, NullExp());  */
                         $$ = MakeTree(ProgramOp, $4, MakeLeaf(IDNode, $2)); 
                         printtree($$, 0);
                       }
                ;
ClassDecl_rec   :      ClassDecl                        /* 1 or More of ClassDecl */
                          {  $$ = MakeTree(ClassOp, NullExp(), $1); } 
                |      ClassDecl_rec ClassDecl
			  {  $$ = MakeTree(ClassOp, $1, $2); }
		/* This Grammar Rule definition creates the tree in the order that the classes are made*/
		/*|	  ClassDecl ClassDecl_rec
			  {  $$ = MakeTree(ClassOp, $2, $1); }*/
                ;
ClassDecl 	:	CLASSnum IDnum ClassBody
			{
				$$ = MakeTree(ClassDefOp, $3, MakeLeaf(IDNode, $2));
			} 
		;
ClassBody	:	LBRACEnum RBRACEnum
			{
				$$ = MakeTree(BodyOp, NullExp(), NullExp());
			}
		|	LBRACEnum Decls RBRACEnum
			{
				$$ = MakeTree(BodyOp, $2, NullExp());
			}
		|	LBRACEnum MethodDecl_List RBRACEnum
			{
				$$ = MakeTree(BodyOp, NullExp(), $2);
			}
		|	LBRACEnum Decls MethodDecl_List RBRACEnum
			{
				$$ = MakeTree(BodyOp, $2, $3);
			}
		;
Decls		:	DECLARATIONSnum ENDDECLARATIONSnum
			{
				$$ = MakeTree(BodyOp, NullExp(), NullExp());
			}
		;

%%

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

