%{
#include<string.h>
#include "a.tab.h"
void yyerror(char *);
int v;
%}
%%
"#import" {printf("#include");}
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
						return CHAR;
					}
"ret" {printf("return");}


"number" {return INT;}
"longnumber" {printf("long");}
"numdes" {return FLOAT;}
"doublenumdes" {printf("double");}
"borno" {return CHAR;}

"speak" {return PRINT;}
"obtain" {	
			scanf("%d", &v);
			printf("%d", v);
			//return SCAN;
		}
"loopfor" {printf("for");}
"loop" {printf("while");}
"start" {printf("do");}
"while" {printf("while");}
"$$" {return GT;}
"%%" {return LT;}
"=" {return EQU;}
"@"  {return ASSIGN;}
"["  {return LSBRACKET;}
"]"  {return RSBRACKET;}
"<" {return LAB;}
">" {return RAB;}
"nil"   {printf("void");}

openthis {printf("freopen");}
closethis {printf("fclose");}
"(+)"  {printf("&&");}

go {printf("continue");}
ber_ho {printf("break");}
fixed {printf("static");}
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
"power" {printf("pow");}
"$" {printf("&");}


"|" {return END;}
"~" {printf("!");}
","	{return COMMA;}

"sw" {printf("switch");}
"ca" {printf("case");}
"def" {printf("Default");} 

"udclass" {printf("struct");}

. 	
%%
int yywrap()
{
	return 1;
}

