%%
"#import" {printf("#include ");}
"#porichoy_dao" {printf("#define ");}
"var_"[A-Z|a-z]+[0-9]* {printf("variable ");}

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
"nil"   {printf("nil ");}

openthis {printf("freopen ");}
closethis {printf("fclose ");}
"(+)"  {printf("&& ");}
"!>"  {printf("&& ");}
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

"ptr("[A-Z|a-z]+[0-9]*")" {printf("Pointer");}
("!>*").*"*<!" {printf("Comment");}

jodi {printf("If");}
nahole {printf("elseif");}
lastly {printf("else");}
. 
%%
int yywrap()
{
	return 1;
}

int main()
{
	yylex();
	return 0;
}