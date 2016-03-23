CS 1622 Compilers Project 2
Brian Lester bdl20@pitt.edu 3-21-16

This is my project 2 for CS 1622 syntax analysis
Yacc specification is in grammar.y
The project can be compiled as follows:
	make
This will run a make file that runs the commands
	flex lex.l (generates lex.yy.c)
	yacc -v grammar.y (generates y.tab.c)
	gcc -g -o parser y.tab.c proj2.c -lfl
The parser can then be run on files with the command
	./parser < file
This was compiled and tested on my computer running gcc version 4.8.4

This project is based on me project 1 and therefore uses my string table
created for that project. As such some of the index for strings and 
variables into the string table my be different from that of the example 
parser.

This parser generates trees that are slightly different from
the example parser (downloaded from the course website) because 
the example parser generates trees that are different from the 
trees that are presented in the assignment pdf. 

This in seen in the file ex8 where the program input looks like so

program xyz;
class test{
	declarations
	enddeclarations
}

The example parser generates the following tree:
************* SYNTAX TREE PRINTOUT ***********

  +-[IDNode,0,"xyz"]
R-[ProgramOp]
  |   +-[IDNode,4,"test"]
  | +-[ClassDefOp]
  | | | +-[DUMMYnode]
  | | +-[BodyOp]
  | |   +-[DUMMYnode]
  +-[ClassOp]
    +-[DUMMYnode]

However the Tree by the assignment should look like so:
************* SYNTAX TREE PRINTOUT ***********

  +-[IDNode,0,"xyz"]
R-[ProgramOp]
  |   +-[IDNode,4,"test"]
  | +-[ClassDefOp]
  | | +-[DUMMYnode]
  +-[ClassOp]
    +-[DUMMYnode]

This is by the definitions of the ClassDecl tree. The left 
child of the ClassDecl is the subtree for the ClassBody. If 
there is no method declares then the ClassBody subtree is 
just the Decls subtree. There are also no FieldDecls which means
that the Decls subtree is just a DUMMYnode. This means that the
ClassBody subtree is also just a DUMMYnode. Therefore the left 
child of the ClassDefOp should just be a DUMMYnode rather than a 
BodyOp node with DUMMYnodes as the left and right children. 


The is also seen for the Type declarations:
With the following example Type declaration
	int[].field[] 
The example parser creates the wrong tree. 
The example parser generates the following tree section:
  | | | | |           +-[DUMMYnode]
  | | | | |         +-[IndexOp]
  | | | | |         | +-[DUMMYnode]
  | | | | |       +-[TypeIdOp]
  | | | | |       | +-[IDNode,10,"field"]
  | | | | |     +-[IndexOp]
  | | | | |     | +-[DUMMYnode]
  | | | | |   +-[TypeIdOp]
  | | | | |   | +-[INTEGERTNode]
My parser generates the following tree section:
  | | | | |         +-[DUMMYnode]
  | | | | |       +-[FieldOp]
  | | | | |       | |   +-[DUMMYnode]
  | | | | |       | | +-[IndexOp]
  | | | | |       | | | +-[DUMMYnode]
  | | | | |       | +-[TypeIdOp]
  | | | | |       |   +-[IDNode,10,"field"]
  | | | | |     +-[IndexOp]
  | | | | |     | +-[DUMMYnode]
  | | | | |   +-[TypeIdOp]
  | | | | |   | +-[INTEGERTNode]
This is the correct tree as you can see from the Type tree from
the assignment pdf. You can see that when there is a field there
should be a FieldOp with a DUMMYNode as the right child and another
Type tree should be the left child. The example parser is not correct 
as when it encounters a field it adds it as a right child of the last 
IndexOp node rather than creating a new FieldOp node.

Dr. Zhang told me to include these cases where my parse did different 
things than the example parser (When my version is correct and the 
example is wrong) so that the grader knows about these cases. 
