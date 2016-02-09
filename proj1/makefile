LEX = lex

CC = gcc

all: lex.yy.c
	$(CC) lex.yy.c -o lexer -ll

lex.yy.c: lexer.l
	$(LEX) lexer.l
