%{
#include <stdlib.h>
#include <string.h>
#include "token.h"

#define LIMIT1 500

extern int yycolumn, yylength, yyline, yylval;
int st_index;
int pos();
char * tolowercase(char a[]);
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
newline					[\n(\r\n)]
declarations				((D|d)(E|e)(C|c)(L|l)(A|a)(R|r)(A|a)(T|t)(I|i)(O|o)(N|n)(S|s))
enddeclarations				((E|e)(N|n)(D|d)(D|d)(E|e)(C|c)(L|l)(A|a)(R|r)(A|a)(T|t)(I|i)(O|o)(N|n)(S|s))
int					((I|i)(N|n)(T|t))
method					((M|m)(E|e)(T|t)(H|h)(O|o)(D|d))
program					((P|p)(R|r)(O|o)(G|g)(R|r)(A|a)(M|m))
val					((V|v)(A|a)(L|l))
while_def				((W|w)(H|h)(I|i)(L|l)(E|e))
class					((C|c)(L|l)(A|a)(S|s)(S|s))
else_def				((E|e)(L|l)(S|s)(E|e))
if_def					((I|i)(F|f))
return_def				((R|r)(E|e)(T|t)(U|u)(R|r)(N|n))
void					((V|v)(O|o)(I|i)(D|d))
ICONSTnum				([1-9]{digit}*|0)
IDnum					{letter}({letter}|{digit})*
BADIDnum				{digit}({letter}|{digit})*

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
{declarations} 			{pos(); return(DECLARATIONSnum);}
"." 					{pos(); return(DOTnum);}
{enddeclarations}		{pos(); return(ENDDECLARATIONSnum);}
"="						{pos(); return(EQUALnum);}
">"						{pos(); return(GTnum);}
{int} 					{pos(); return(INTnum);}
"[" 					{pos(); return(LBRACnum);}
"(" 					{pos(); return(LPARENnum);}
{method} 				{pos(); return(METHODnum);}
"!="					{pos(); return(NEnum);}
"||"					{pos(); return(ORnum);}
{program}				{pos(); return(PROGRAMnum);}
"]"						{pos(); return(RBRACnum);}
")"						{pos(); return(RPARENnum);}
";"						{pos(); return(SEMInum);}
{val}					{pos(); return(VALnum);}
{while_def}					{pos(); return(WHILEnum);}
{class}					{pos(); return(CLASSnum);}
","						{pos(); return(COMMAnum);}
"/"						{pos();	return(DIVIDEnum);}
{else_def}					{pos(); return(ELSEnum);}
"=="					{pos(); return(EQnum);}
">="					{pos(); return(GEnum);}
{if_def}					{pos(); return(IFnum);}
"{"						{pos(); return(LBRACEnum);}
"<="					{pos(); return(LEnum);}
"<"						{pos(); return(LTnum);}
"-"						{pos(); return(MINUSnum);}
"!"						{pos(); return(NOTnum);}
"+" 					{pos(); return(PLUSnum);}
"}"						{pos(); return(RBRACEnum);}
{return_def}				{pos(); return(RETURNnum);}
"*"						{pos(); return(TIMESnum);}
{void}					{pos(); return(VOIDnum);}

{ICONSTnum}				{pos();
						 yylval = atoi(yytext); 
						 return(ICONSTnum);}

\'						{string_buf_ptr = string_buf;
						 pos();
						 *string_buf_ptr++ = '\'';						
						 BEGIN(str);}
<str>{
	\'					{ /* Closing Quote, all done  */
                            *string_buf_ptr++ = '\'';
							pos();
							BEGIN(INITIAL);
							*string_buf_ptr = '\0';
							string_table(string_buf);
							return(SCONSTnum);
						}
	\n					pos();
	\\n					pos(); *string_buf_ptr++ = '\n';
	\\t					pos(); *string_buf_ptr++ = '\t';
	\\\'				pos(); *string_buf_ptr++ = '\'';
	<<EOF>>				{report_error("EOF Unterminated String"); BEGIN(INITIAL);}
	.					{pos();
						 *string_buf_ptr++ = *yytext;
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
char symbolTable[LIMIT1 + 1];
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
		a = tolowercase(a);
		yylval = insert(a);
	/* if found return index it was found at */
	} else {
		yylval = search_index;
	}
}

char * tolowercase(char a[]) {
/* transform an identifier to lower case representation */
  int i;
  for( i=0; i<yyleng; i++ )
  {
     if ( 'A'<=a[i] && a[i]<='Z' )
        a[i] = a[i] - 'A' + 'a';
  }
  return a;
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


int search(char a[]) {
	int i = 0;
	char word[LIMIT1];
	symbolTable[LIMIT1] = '\0';
	while (i < LIMIT1) {
		strcpy(&word[0], &(symbolTable[i]));
		if (!strcasecmp(word, a)) {
			return i;
		} else {
			i = i + strlen(word);
		}
		i++;
	}
	return -1;
}

/* Search for the string in the table 
This is rewritten in phase to because if you had the string 
xyz in the table at position 0 and then the string z at position 
14 seaching for the string z would return the one at 2 rather
than the one at 14 which is the one we want
int search(char a[]) {
	int i;
	char word[LIMIT1];
	symbolTable[LIMIT1] = '\0';
	for (i = 0; i < LIMIT1; i++) {
		strcpy(word, &(symbolTable[i]));
		printf("%s\n", word);
		if (!strcasecmp(&(symbolTable[i]), a)) {
			return i;
	    }
	}
	return -1;
}*/

/* report an error */
void report_error(char a[]) {
	printf("ERROR: %s at Line: %d, Column: %d\n", a, yyline, yycolumn);
}
