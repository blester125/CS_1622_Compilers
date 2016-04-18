#include <stdio.h>
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
	inorder(root);
}

void inorder(tree root) {
	if (IsNull(root)) {
		return;
	}
	inorder(LeftChild(root));
	process(root);
	inorder(RightChild(root));
}

void process(tree root) {
	if (NodeKind(root) == EXPRNode) {
		process_node(root);
	}
	else {
		process_leaf(root);
	}
}

void process_node(tree root) {

}

void process_leaf(tree root) {
	// ex
	if (NodeKind(root) == IDNode) {
		int nSymInd = InsertEntry(IntVal(root));
		SetNodeKind(root, STNode);
		SetIntVal(root, nSymInd);
	}
}