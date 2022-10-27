%%
"#import" {printf("#include ");}
"#porichoy_dao" {printf("#define ");}
"var_"[A-Z|a-z]+[0-9]* {printf("(variable) %s",yytext);}

"ret" {printf("return ");}

"number" {printf("int ");}
"longnumber" {printf("long ");}
"numdes" {printf("float ");}
"doublenumdes" {printf("double ");}

"speak<""var_"[A-Z|a-z|0-9]+">" {printf("printf ");}
"obtain<""var_"[A-Z|a-z]+[0-9]*">" {printf("scanf ");}
";" {printf("|");}
"loopfor<""var_"[A-Z|a-z]+[0-9]*"="[0-9]+"|""var_"[A-Z|a-z]+[0-9]*(@|$$|%%)[0-9]+"|""var_"[A-Z|a-z]+[0-9]*(" inc"|" dec")">" {printf("for");}
"loop<""var_"[A-Z|a-z]+[0-9]*(@|$$|%%)[0-9]+">" {printf("while");}
"start[""]""while<""var_"[A-Z|a-z]+[0-9]*(@|$$|%%)[0-9]+">" {printf("do...while ");}
"$$" {printf("> ");}
"%%" {printf("< ");}
"@"  {printf("= ");}
"["  {printf("{ ");}
"]"  {printf("} ");}
"<" {printf("( ");}
">" {printf(") ");}
"nil"   {printf("void ");}

openthis {printf("freopen ");}
closethis {printf("fclose ");}
"(+)"  {printf("&& ");}

go {printf("continue ");}
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

"ptr(var_"[A-Z|a-z]+[0-9]*")" {printf("Pointer Variable");}
("!>*")(.*|\n)"*<!" {printf("Comment");}
"!>".  {printf("// ");}

jodi {printf("If");}
nahole {printf("elseif");}
lastly {printf("else");}

"$" {printf("&");}
"=" {printf("==");}
"(" {printf("<");}
")" {printf(">");}
"|" {printf(";");}

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