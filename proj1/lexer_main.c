main() {
	int lexReturn;
	printf("Line\tColumn\tToken\t\tIndex_in_String_Table\n");
	do {
		lexReturn = yylex();
		switch(lexReturn) {
			case EOFnum:
				printf("\t\t%s\t\n", "EOFnum");
				break;
			case IDnum:
				printf("%d\t%d\t%s\t\t%d\n", yyline, yycolumn, tokens[lexReturn - 257], yylval.intg);
				break;
			case SCONSTnum:
			  printf("%d\t%d\t%s\t%d\n", yyline, yycolumn, tokens[lexReturn - 257], yylval.intg);
			  break;
			case ICONSTnum:
				printf("%d\t%d\t%s\t\n", yyline, yycolumn, tokens[lexReturn - 257]);
				break;	
			default:
				printf("%d\t%d\t%s\t\n", yyline, yycolumn, tokens[lexReturn - 257]);
		}
	} while (lexReturn != 0);
	print_symbolTable();
	printf("End of File\n");
}