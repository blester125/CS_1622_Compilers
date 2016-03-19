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

%type  <tptr>  MethodDecl_List FieldDecl_List Formal_Parameter_List

%type  <tptr>  Formal_Parameter_Start Formal_Parameter_List Formal_Parameter
%type  <tptr>  Statement StatementList StatementList_rec

%type  <tptr>  Program ClassDecl_rec ClassDecl ClassBody MethodDecl_z1 MethodDecl_rec Decls
%type  <tptr>  FieldDecl_rec FieldDecl Tail FieldDecl_body VariableDeclId Bracket_rec1 Bracket_rec2
%type  <tptr>  VariableInitializer ArrayInitializer ArrayInitializer_body  ArrayCreationExpression
%type  <tptr>  ArrayCreationExpression_tail MethodDecl FormalParameterList_z1 FormalParameterList
%type  <tptr>  FormalParameterList_rec IDENTIFIER_rec Block Type Type_front 
%type  <tptr>  StatementList Statement_rec Statement AssignmentStatement MethodCallStatement
%type  <tptr>  MethodCallStatement_tail Expression_rec ReturnStatement IfStatement If_rec WhileStatement
%type  <tptr>  Expression Comp_op SimpleExpression Term Factor Expression_rec2
%type  <tptr>  UnsignedConstant Variable Variable_tail Variable_rec Variable_1 


%%/* yacc specification*/
/* Done */
Program         :      PROGRAMnum IDnum SEMInum ClassDecl_rec
                       {  
                         $$ = MakeTree(ProgramOp, $4, MakeLeaf(IDNode, $2)); 
                         printtree($$, 0);
                       }
                ;
/* Done */
ClassDecl_rec   :      ClassDecl                        /* 1 or More of ClassDecl */
                          {  $$ = MakeTree(ClassOp, NullExp(), $1); } 
                |      ClassDecl_rec ClassDecl
			  {  $$ = MakeTree(ClassOp, $1, $2); }
		/* This Grammar Rule definition creates the tree in the order that the classes are made*/
		/*|	  ClassDecl ClassDecl_rec
			  {  $$ = MakeTree(ClassOp, $2, $1); }*/
                ;
/* Done */
ClassDecl 	:	CLASSnum IDnum ClassBody
			{
				$$ = MakeTree(ClassDefOp, $3, MakeLeaf(IDNode, $2));
			} 
		;
ClassBody	:	LBRACEnum MethodDecl_List RBRACEnum
			{
				$$ = $2;
			}
		;
MethodDecl_List	:	MethodDecl_z1
			{
				$$ = $1;
			}
		|	MethodDecl_List MethodDecl
			{
				$$ = MakeTree(BodyOp, $1, $2);
			}
		;
MethodDecl_z1	:	
			{
				$$ = MakeTree(BodyOp, NullExp(), NullExp());
			}
		|	Decls
			{
				$$ = MakeTree(BodyOp, $1, NullExp());
			}
		|	MethodDecl
			{
				$$ = MakeTree(BodyOp, NullExp(), $1);
			}
		|	Decls MethodDecl
			{
				$$ = MakeTree(BodyOp, $1, $2);
			}
		;
/* TODO Store Type*/
MethodDecl	:	METHODnum VOIDnum IDnum LPARENnum RPARENnum Block
			{
				tree headOp = MakeTree(HeadOp, MakeLeaf(IDNode, $3), NullExp());
				$$ = MakeTree(MethodOp, headOp, $6); 
			}
		|	METHODnum Type IDnum LPARENnum RPARENnum Block
			{
				tree headOp = MakeTree(HeadOp, MakeLeaf(IDNode, $3), NullExp());
				$$ = MakeTree(MethodOp, headOp, $6);
			}
		|	METHODnum VOIDnum IDnum LPARENnum Formal_Parameter_Start RPARENnum Block
			{
				tree headOp = MakeTree(HeadOp, MakeLeaf(IDNode, $3), $5);
				$$ = MakeTree(MethodOp, headOp, $7);
			}
		|	METHODnum Type IDnum LPARENnum Formal_Parameter_Start RPARENnum Block
			{
				tree headOp = MakeTree(HeadOp, MakeLeaf(IDNode, $3), $5);
				$$ = MakeTree(MethodOp, headOp, $7);
			}
		;
Type		:	GTnum
			{
				$$ = MakeLeaf(TypeIdOp, $1);
			}
		;
Formal_Parameter_Start :Formal_Parameter_List
			{
				$$ = MakeTree(SpecOp, $1, NullExp());
			}
		;
Formal_Parameter_List :	
			{
				$$ = NullExp();
			}
		|	Formal_Parameter
			{
				$$ = $1;
			}
		|	Formal_Parameter SEMInum Formal_Parameter_List
			{
				$$ = MkRightC($3, $1);
			}
		;
/* TODO */
Formal_Parameter:	ASSGNnum
			{
				$$ = MakeTree(RArgTypeOp, NullExp(), NullExp());
			}		
		;
/* Done */ 
Block		:	StatementList
			{
				$$ = MakeTree(BodyOp, NullExp(), $1);
			}
		|	Decls StatementList
			{
				$$ = MakeTree(BodyOp, $1, $2);
			}
		;
/* Done */
StatementList	:	LBRACEnum StatementList_rec RBRACEnum
			{
				$$ = $2;
			}
		;
/* Done */	
StatementList_rec:	Statement
			{
				$$ = MakeTree(StmtOp, NullExp(), $1);
			}
		|	StatementList_rec Statement
			{
				$$ = MakeTree(StmtOp, $1, $2);
			}
		;
/* TODO Invetigate the SEMInum problem*/
Statement	:	SEMInum
			{
				$$ = NullExp();
			}
		|	AssignmentStatement SEMInum
			{
				$$ = $1;
			}
		|	MethodCallStatement SEMInum
			{
				$$ = $1;
			}
		|	ReturnStatement SEMInum
			{
				$$ = $1;
			}
		|	IfStatement SEMInum
			{
				$$ = $1;
			}
		|	WhileStatement SEMInum
			{
				$$ = $1;
			}
		;
/* Done */
Decls		:	DECLARATIONSnum ENDDECLARATIONSnum
			{
				$$ = MakeTree(BodyOp, NullExp(), NullExp());
			}
		|	DECLARATIONSnum FieldDecl ENDDECLARATIONSnum
			{
				$$ = MakeTree(BodyOp, NullExp(), $2);
			}
		|	DECLARATIONSnum FieldDecl_List FieldDecl ENDDECLARATIONSnum
			{
				$$ = MakeTree(BodyOp, $2, $3);
			}  
		;
/* Done */
FieldDecl_List	:	FieldDecl
			{
				$$ = MakeTree(BodyOp, NullExp(), $1);
			}
		|	FieldDecl_List FieldDecl
			{
				$$ = MakeTree(BodyOp, $1, $2);
			}
		;
/* TODO */
FieldDecl	:	LTnum
			{
				$$ = MakeTree(DeclOp, NullExp(), NullExp());
			}
		;
VariableDeclId	:	IDnum
			{
				$$ = MakeLeaf(IDNode, $1);
			}
		|	IDnum BracketLoop
			{
				$$ = MakeLeaf(IDNode, $1);
			}
		;
BracketLoop	:	LBRACEnum RBRACEnum
		|	BracketLoop LBRACEnum RBRACEnum
		;
VariableInitializer:	Expression
			{
				$$ = $1;
			}
		|	ArrayInitializer
			{
				$$ = $1;
			}
		|	ArrayCreationExpression
			{
				$$ = $1;
			}		
		;
AssignmentStatement:	Variable ASSGNnum Expression
			{
				tree assignOp = MakeTree(AssignOp, NullExp(), $1);
				$$ = MakeTree(AssignOp, assignOp, $3);
			}
		;
ReturnStatement	:	RETURNnum
			{
				$$ = MakeTree(ReturnOp, NullExp(), NullExp());
			}
		|	RETURNnum Expression
			{
				$$ = MakeTree(ReturnOp, $2, NullExp());
			}
		;
WhileStatement	:	WHILEnum Expression StatementList
			{
				$$ = MakeTree(LoopOp, $2, $3);
			}
		;
Expression	:	SimpleExpression
			{
				$$ = $1;
			}
		|	SimpleExpression LTnum SimpleExpression
			{
				$$ = MakeTree(LTOp, $1, $3);
			}
		|	SimpleExpression LEnum SimpleExpression
			{
				$$ = MakeTree(LEOp, $1, $3);
			}
		|	SimpleExpression EQnum SimpleExpression
			{
				$$ = MakeTree(EQOp, $1, $3);
			}
		|	SimpleExpression NEnum SimpleExpression
			{
				$$ = MakeTree(NEOp, $1, $3);
			}
		|	SimpleExpression GEnum SimpleExpression
			{
				$$ = MakeTree(GEOp, $1, $3);
			}
		|	SimpleExpression GTnum SimpleExpression
			{
				$$ = MakeTree(GTOp, $1, $3);
			}
		;
Factor		:	UnsignedConstant
			{
				$$ = $1;
			}
		|	Variable
			{
				$$ = $1;
			}
		|	MethodCallStatement
			{
				$$ = $1;
			}
		|	LPARENnum Expression RPRENnum
			{
				$$ = $2;
			}
		|	NOTnum Factor
			{
				$$ = MakeTree(UnaryNegOp, $2, NullExp());
			}
		;
UnsignedConstant:	ICONSTnum
			{
				$$ = MakeLeaf(INTEGERTNode, $1);
			}
		|	SCONSTnum
			{
				$$ = MakeLeaf(STRINGNode, $1);
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

