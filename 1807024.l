%{
#include<string.h>
#include "1807024.tab.h"
void yyerror(char *);
%}
%%
"#import" {printf("#include");}
"#porichoy_dao" {printf("#define");}
"var_"[A-Z|a-z]+[0-9]* {
						yylval.string=strdup(yytext);
						return ID;}
[0-9]+			{
					yylval.number= atoi(yytext);
					return NUM;
				}
"ret" {printf("return");}


"number" {return INT;}
"longnumber" {printf("long");}
"numdes" {return FLOAT;}
"doublenumdes" {printf("double");}
"borno" {return CHAR;}

"speak" {printf("printf");}
"obtain" {printf("scanf");}
"loopfor" {printf("for");}
"loop" {printf("while");}
"start" {printf("do");}
"while" {printf("while");}
"$$" {printf(">");}
"%%" {printf("<");}
"@"  {return ASSIGN;}
"["  {printf("{");}
"]"  {printf("}");}
"<" {printf("(");}
">" {printf(")");}
"nil"   {printf("void");}

openthis {printf("freopen");}
closethis {printf("fclose");}
"(+)"  {printf("&&");}

go {printf("continue");}
ber_ho {printf("break");}
fixed {printf("static");}
add {;}
sub {printf("-");}
mul {printf("*");}
div {printf("/");}
inc {printf("++");}
dec {printf("--");}
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

jodi {printf("If");}
nahole {printf("elseif");}
lastly {printf("else");}


"root" {printf("sqrt");}
"power" {printf("pow");}
"$" {printf("&");}
"=" {printf("==");}
"(" {printf("<");}
")" {printf(">");}
"|" {return END;}
"~" {printf("!");}
"{" {printf("[");}
"}" {printf("]");}
","	{return COMMA;}

"sw" {printf("switch");}
"ca" {printf("case");}
"def" {printf("Default");} 

"udclass" {printf("struct");}

. 	{printf("%s",yytext);}
%%
int yywrap()
{
	return 1;
}

