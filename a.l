%{
#include<string.h>
#include "a.tab.h"
void yyerror(char *);
int v;
%}
%%
"#import<stdio.h>" {return INCLUDE;}
"#porichoy_dao" {printf("#define");}
"var_"[A-Z|a-z]+[0-9]* {
						yylval.string=strdup(yytext);
						return ID;}
[0-9]+(".")[0-9]+	{
					yylval.f_number= strtod(yytext, NULL);
					//printf("%s\n ", yytext);
					return FL;
				}
[0-9]+			{
					yylval.number = atoi(yytext);
					return NUM;

				}
":"[A-Z]*[a-z]*":" {
						char temp[2000],temp2[2000];
						int i=1,j;
						sscanf( yytext, ":%s", temp );
						for(i=0;temp[i]!= '\0';i++)
							;
						temp[i-1]='\0';
						yylval.string = temp;
						return CHAR1;
					}
"ret" {printf("return");}


"main" 	{return MAIN;}
"number" {return INT;}
"numdes" {return FLOAT;}
"borno" {return CHAR;}
"speak" {return PRINT;}
"obtain" {	
			scanf("%d", &v);
			printf("%d", v);
			//return SCAN;
		}
"loopfor" {return FOR;}
"loop" {return WHILE;}
"$$" {return GT;}
"%%" {return LT;}
"=" {return EQU;}
"@"  {return ASSIGN;}
"["  {return LSBRACKET;}
"]"  {return RSBRACKET;}
"<" {return LAB;}
">" {return RAB;}
"nil"   {printf("void");}

"func"	{return FUNC;}
"call"	{return CALL;}


add {return ADD;}
sub {return SUB;}
mul {return MUL;}
div {return DIV;}
inc {return INC;}
dec {return DEC;}
or  {printf("||");}
struct {printf("udclass");}
fullsize {printf("sizeof");}

"ptr " {printf("*");}
"!>" {
	printf("%s", "/*");
	char z = input();
	while(z!='<'){
		printf("%c", z);
		z=input();
	}
	printf("%c", '*');
	z=input();
	if(z=='!'){
		printf("%c",'/');
		}
	}
"!".  {printf("//");}

jodi {return IF;}
nahole {return ELIF ;}
lastly {return ELSE;}


"root" {return ROOT;}
"|" {return END;}
","	{return COMMA;}
"sw" {return SWITCH;}
"ca" {return CASE;}
"def" {return DEFAULT;} 

. 	
%%
int yywrap()
{
	return 1;
}

