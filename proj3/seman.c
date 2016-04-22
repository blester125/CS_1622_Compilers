#include <stdio.h>
#include <string.h>
#include "proj2.h"
#include "proj3.h"
#include "table.h"

extern FILE *treelst;
extern tree root;

void traversetree();
void inorder(tree root);
void process(tree root);
void process_node(tree root);
void process_leaf(tree root);
void analyze_ClassOp(tree root);
void analyze_BodyOp(tree root);
void analyze_DeclOp(tree root);
void analyze_MethodOp(tree root);
void explore_left(tree root);
int countDimension(tree root);

int main() {
	treelst = stdout;
	yyparse();
	//print_string_table();
	STInit();
	traversetree();
	STPrint();
	printtree(root, 0);
	return 0;
}

void traversetree() {
	explore_left(root);
}

//rewrite
void explore_left(tree root) {
	if (IsNull(root)) {
		return;
	}
	explore_left(LeftChild(root));
	process(root);
}

//rewrite
void process(tree root) {
	if (NodeKind(root) == EXPRNode) {
		process_node(root);
	}
	else {
		process_leaf(root);
	}
}

// rewrite
void process_node(tree root) {
	switch (NodeOp(root))
	{
		case ClassOp:
			analyze_ClassOp(root);
			break;
		case BodyOp:
			analyze_BodyOp(root);
			break;
		case DeclOp:
			analyze_DeclOp(root);
		default:
			break;
	}
}

void analyze_ClassOp(tree root) {
	int id, nSymInd;
	tree node = RightChild(root);
	if (NodeKind(node) == EXPRNode) {
		if (NodeOp(node) == ClassDefOp) {
			tree classname = RightChild(node);
			if (NodeKind(classname) == EXPRNode) {
				return;
			}
			id = IntVal(classname);
			nSymInd = InsertEntry(id);
			SetAttr(nSymInd, KIND_ATTR, CLASS);
			SetNodeKind(classname, STNode);
			SetIntVal(classname, nSymInd);
			tree body = LeftChild(node);
			OpenBlock();
			explore_left(node);
			CloseBlock();
		}
	}
}

void analyze_BodyOp(tree root) {
	tree node = RightChild(root);
	switch(NodeOp(node))
	{
		case DeclOp:
			explore_left(node);
			break;
		case MethodOp:
			analyze_MethodOp(node);
			break;
		default:
			break;
	}
}

// rewrite
void analyze_MethodOp(tree root) {	
	// Left Head Stuff
	// Add the name
	tree name = LeftChild(LeftChild(root));
	int nSymInd = InsertEntry(IntVal(name));
	SetAttr(nSymInd, KIND_ATTR, FUNC);
	SetNodeKind(name, STNode);
	SetIntVal(name, nSymInd);
	OpenBlock();
	explore_left(RightChild(root));
	CloseBlock();
}	

// rewrite
void analyze_DeclOp(tree root) {
	int id, nSymInd;	
	int dimension = 0;
	// Variable to declare
	tree name = LeftChild(RightChild(root));
	id = IntVal(name);
	nSymInd = InsertEntry(id);
	SetAttr(nSymInd, KIND_ATTR, VAR);
	SetNodeKind(name, STNode);
	SetIntVal(name, nSymInd);
	// Type Stuff
	tree typeTree = LeftChild(RightChild(RightChild(root)));
	SetAttr(nSymInd, TYPE_ATTR, (uintptr_t)typeTree);
	tree type = LeftChild(typeTree);
	if (NodeKind(type) == IDNode) {
		int typeIndex = IntVal(type);
		int typeSymInd = LookUp(typeIndex);
		SetNodeKind(type, STNode);
		SetIntVal(type, typeSymInd);
	}
	// Array Stuff
	dimension = countDimensions(RightChild(typeTree));
	if (dimension != 0) {
		SetAttr(nSymInd, KIND_ATTR, ARR);
		SetAttr(nSymInd, DIMEN_ATTR, dimension);
	}
	 
}

// rewrite with tree checks
int countDimensions(tree root) {
	if (IsNull(root)) {
		return 0;
	}
	return countDimensions(RightChild(root)) + 1;
}

// rewrite
void process_leaf(tree root) {
	// ex
	if (NodeKind(root) == IDNode) {
		int nSymInd = InsertEntry(IntVal(root));
		SetNodeKind(root, STNode);
		SetIntVal(root, nSymInd);
	}
}
