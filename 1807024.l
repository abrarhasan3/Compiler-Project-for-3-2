%{
#include<string.h>
%}
%%
"#import" {printf("#include");}
"#porichoy_dao" {printf("#define");}
"var_"[A-Z|a-z]+[0-9]* {for(int i=4;i<strlen(yytext);i++)
				{ 
					printf("%c", yytext[i]);
				}
				}

"ret" {printf("return");}


"number" {printf("int");}
"longnumber" {printf("long");}
"numdes" {printf("float");}
"doublenumdes" {printf("double");}
"borno" {printf("char");}

"speak" {printf("printf");}
"obtain" {printf("scanf");}
";" {printf("|");}
"loopfor" {printf("for");}
"loop" {printf("while");}
"start" {printf("do");}
"while" {printf("while");}
"$$" {printf(">");}
"%%" {printf("<");}
"@"  {printf("=");}
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
add {printf("+");}
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
"|" {printf(";");}
"~" {printf("!");}
"{" {printf("[");}
"}" {printf("]");}

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

int main()
{
	yyin = freopen("input.txt", "r",stdin);
	yyout = freopen("output.txt","w",stdout);
	yylex();
	return 0;
}