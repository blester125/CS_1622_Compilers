%{
#include <stdlib.h>
#include <string.h>
#include "token.h"

#define LIMIT1 500

extern int yycolumn, yylength, yyline, yylval;
extern char symbolTable[LIMIT1];
int st_index;
int pos();
void report_error(char str[]);
void print_symbolTable();
void string_table(char str[]);
int search(char str[]);
int insert(char str[]);

char string_buf[LIMIT1];
char *string_buf_ptr;
int str_error = 0;
%}
%x comment
%x str
/* regular definitions */
letter					[A-Za-z]
digit					[0-9]
delim					[ \t]
ws						{delim}+
newline					[\n]
ICONSTnum				([1-9]{digit}*|0)
IDnum					{letter}({letter}|{digit})*
BADIDnum				{digit}({letter}|{digit})*
SCONSTnum				\'(\\.|[^\\'])*\'

%%

"/*"					{BEGIN(comment);}
<comment>{
	[^*\n]*				/* Discard any non '*' */
	"*"+[^*/\n]			/* Discard any '*' not followed by '/' */
	\n					{yyline++; yycolumn = 0;}
	<<EOF>>				{report_error("Unterminated Comment"); 
						 BEGIN(INITIAL);}
	"*"+"/"				BEGIN(INITIAL);
}
"&&"					{pos(); return(ANDnum);}
":="					{pos(); return(ASSGNnum);}
"declarations" 			{pos(); return(DECLARATIONSnum);}
"." 					{pos(); return(DOTnum);}
"enddeclarations"		{pos(); return(ENDDECLARATIONSnum);}
">"						{pos(); return(GTnum);}
"int" 					{pos(); return(INTnum);}
"[" 					{pos(); return(LBRACnum);}
"(" 					{pos(); return(LPARENnum);}
"method" 				{pos(); return(METHODnum);}
"!="					{pos(); return(NEnum);}
"||"					{pos(); return(ORnum);}
"program"				{pos(); return(PROGRAMnum);}
"]"						{pos(); return(RBRACnum);}
")"						{pos(); return(RPARENnum);}
";"						{pos(); return(SEMInum);}
"val"					{pos(); return(VALnum);}
"while"					{pos(); return(WHILEnum);}
"class"					{pos(); return(CLASSnum);}
","						{pos(); return(COMMAnum);}
"/"						{pos();	return(DIVIDEnum);}
"else"					{pos(); return(ELSEnum);}
"=="					{pos(); return(EQnum);}
">="					{pos(); return(GEnum);}
"if"					{pos(); return(IFnum);}
"{"						{pos(); return(LBRACEnum);}
"<="					{pos(); return(LEnum);}
"<"						{pos(); return(LTnum);}
"-"						{pos(); return(MINUSnum);}
"!"						{pos(); return(NOTnum);}
"+" 					{pos(); return(PLUSnum);}
"}"						{pos(); return(RBRACEnum);}
"return"				{pos(); return(RETURNnum);}
"*"						{pos(); return(TIMESnum);}
"void"					{pos(); return(VOIDnum);}

{ICONSTnum}				{pos();
						 yylval = atoi(yytext); 
						 return(ICONSTnum);}

\'						{string_buf_ptr = string_buf;
						 *string_buf_ptr++ = '\'';						
						 BEGIN(str);}
<str>{
	\'					{ /* Closing Quote, all done  */
                            *string_buf_ptr++ = '\'';
							BEGIN(INITIAL);
							*string_buf_ptr = '\0';
							if (str_error == 0) {
								yycolumn += strlen(string_buf);
								string_table(string_buf);
								return(SCONSTnum);
							} else {
								yycolumn += str_error;
								str_error = 0;
							}
						}
	\n					{yyline++; yycolumn = 0; report_error("Unterminated String"); str_error = 1; }
	\\n					*string_buf_ptr++ = '\n';
	\\t					*string_buf_ptr++ = '\t';
	\\\'				*string_buf_ptr++ = '\'';
	<<EOF>>				{report_error("EOF Unterminated String"); BEGIN(INITIAL);}
	.					{*string_buf_ptr++ = *yytext;
						 if (str_error != 0) {
						 	str_error += 1;
						 }
						}
}

{IDnum}					{pos();
						 string_table(yytext);
						 return(IDnum);}

{ws}					{pos();}
{newline} 				{pos();}
{BADIDnum}				{pos();
						 report_error("Bad Identifier");}
.						{pos();
   						 report_error("Bad Lexeme");}

%%
char symbolTable[LIMIT1];
int yyline = 1;
int yycolumn = 1;
int yylval = 0;
int st_index = 0;

/* Array of Token Names for final output */
const char * tokens[] = {
	"ANDnum",
	"ASSGNnum",
	"DECLARATIONSnum",
	"DOTnum",
	"ENDDECLARATIONSnum",
	"EQUALnum",
	"GTnum",
	"IDnum",
	"INTnum",
	"LBRACnum",
	"LPARENnum",
	"METHODnum",
	"NEnum",
	"ORnum",
	"PROGRAMnum",
	"RBRACnum",
	"RPARENnum",
	"SEMInum",
	"VALnum",
	"WHILEnum",
	"CLASSnum",
	"COMMAnum",
	"DIVIDEnum",
	"ELSEnum",
	"EQnum",
	"GEnum",
	"ICONSTnum",
	"IFnum",
	"LBRACEnum",
	"LEnum",
	"LTnum",
	"MINUSnum",
	"NOTnum",
	"PLUSnum",
	"RBRACEnum",
	"RETURNnum",
	"SCONSTnum",
	"TIMESnum",
	"VOIDnum"
};

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
				printf("%d\t%d\t%s\t\t%d\n", yyline, yycolumn, tokens[lexReturn - 257], yylval);
				break;
			case SCONSTnum:
			  printf("%d\t%d\t%s\t%d\n", yyline, yycolumn, tokens[lexReturn - 257], yylval);
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

/* method to track the line and column */
int pos() {
	/* if this is a new line reset the line and column */
	if (yytext[0] == '\n') {
		yyline++;
		yycolumn = 0;
	} else {
    	int i;
    	for (i = 0; yytext[i] != '\0'; i++) {
			/* if it is a tab move the column line 4 spaces */
    		if (yytext[i] == '\t') {
    			yycolumn += 4 - (yycolumn % 4);
    		}
			/* move column one space */
    		else {
    			yycolumn++;
    		}
    	}
  	}
}

/* Print the symbol table for final output */
void print_symbolTable() {
	int i;
	printf("Symbol Table: ");
	for (i = 0; i < st_index; i++) {
		while (symbolTable[i] != '\0') {
			printf("%c", symbolTable[i]);
			i++;
		}
		printf("%c", ' ');
	}
	printf("\n");
}

/* Method to handle addition to the symbolTable */
void string_table(char a[]) {
	/* Search for the string in the table */
	int search_index = search(a);
	/* if it was not found insert into table and return index where
	   it was inserted */
	if (search_index == -1) {
		yylval = insert(a);
	/* if found return index it was found at */
	} else {
		yylval = search_index;
	}
}

/* insert into the symboltable */
int insert(char a[]) {
	/* Check if there is room for the string */
	if (strlen(a) + st_index >= LIMIT1) {
		printf("Lexeme too long.\n");
		return -1;
	}
	/* Copy the string into the table */
	strcpy(&(symbolTable[st_index]), a);
	/* Set new end index and return there the string was inserted */
	int temp = st_index;
	st_index += strlen(a) + 1;
	return temp;
}

/* Search for the string in the table */
int search(char a[]) {
	int i;
	for (i = 0; i < LIMIT1; i++) {
		if (!strcasecmp(&(symbolTable[i]), a)) {
			return i;
	    }
	}
	return -1;
}

/* report an error */
void report_error(char a[]) {
	printf("ERROR: %s at Line: %d, Column: %d\n", a, yyline, yycolumn);
}
