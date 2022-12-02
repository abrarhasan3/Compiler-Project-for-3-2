%{
void yyerror(char *s);
#include <stdlib.h>
#include <stdio.h>
#include<string.h>
FILE* yyin;
FILE* yyout;
int in_int=0;

struct var_i{
	char* name;
	int value;
	int valid;
}store_int[1000];

int f=0;
struct var_f{
	char* name;
	float value;
	int valid;
}store_float[1000];

int c=0;
struct var_c{
	char* name;
	char* value;
	int valid;
}store_char[1000];

%}

%union 
{
        int number;
        char *string;
        
}

%token FLOAT INT CHAR COMMA ASSIGN NUM
%token<string>	ID 
%token END

%%

PROGRAM : STATEMENT PROGRAM 
		|;
STATEMENT: INT ID1 END {printf("in_int: %d\n",in_int);
						int z=0,i=0;
						for(i=0;i<in_int;i++)
						{
							 z=0;
							while(store_int[i].name[z]) {printf("%c",store_int[i].name[z]);z++;}printf("\n");

						}						
							
						}

						
		|FLOAT ID2 END	{printf("f: %d\n",f);
						int z=0,i=0;
						for(i=0;i<f;i++)
						{
							z=0;
							printf("Valid: %d\n",store_float[i].valid);
							while(store_float[i].name[z]) {printf("%c",store_float[i].name[z]);z++;}printf("\n");
						}
							
							
						}
		|CHAR ID3 END	{
							printf("C: %d\n",c);
							int z=0,i=0;
							for(i=0;i<c;i++)
							{
								z=0;
								printf("Valid: %d\n",store_char[i].valid);
								while(store_char[i].name[z]) {printf("%c",store_char[i].name[z]);z++;}printf("\n");
							}
						}
		|ID ASSIGN NUM END  {
								if(find_i(store_int,$1,in_int)==0)
								{
									printf("Variable is Not Declared");
								}
								else{
									
								}

							}	
		;			

ID1	: ID1 COMMA ID 	{
						int i=0;
						for(i=0;i<in_int;i++)
						{
							if(strcmp(store_int[i].name,$3)==0)
								break;
						}
						if(i==in_int)
						{
							store_int[in_int++].name=$3;
						}
						else
						{
							printf("ALREADY DECLARED\n");
						}


											
					}
	| ID 			{
						int error=0,i=0;
						for(i=0;i<in_int;i++)
						{
							if(strcmp(store_int[i].name,$1)==0)
								break;
						}
						if(i==in_int)
						{
							store_int[in_int++].name=$1;
						}
						else
						{
							printf("ALREADY DECLARED\n");
						}
												
					}
	;
ID2 :ID2 COMMA ID {
						int i=0;
						for(i=0;i<f;i++)
						{
							if(strcmp(store_float[i].name,$3)==0)
								break;
						}
						if(i==f)
						{
							int error=0;
							for(i=0;i<in_int;i++)
							{
								if(strcmp(store_int[i].name,$3)==0)
									{error=1;break;}
							}
							for(i=0;i<c;i++)
							{
								if(strcmp(store_char[i].name,$3)==0)
									{error=1;break;}
							}
							if(error==0)
							{
								store_float[f++].name=$3;
							}
							else
							{
								printf("Conflicting Type Declaration\n");
							}
						}
						else
						{
							printf("ALREADY DECLARED\n");
						}


											
					}
	|ID 		{	int i=0;
					for(i=0;i<f;i++)
					{
						if(strcmp(store_float[i].name,$1)==0)
								break;
					}
					if(i==f)
					{
						int error=0;

						for(i=0;i<in_int;i++)
						{
							if(strcmp(store_int[i].name,$1)==0)
								{error=1;break;}
						}
						for(i=0;i<c;i++)
						{
							if(strcmp(store_char[i].name,$1)==0)
								{error=1;break;}
						}					

						if(error==0)
						{
							store_float[f++].name=$1;
						}
						else
						{
							printf("Conflicting Type Declaration\n");
						}
					}
					else
					{
						printf("ALREADY DECLARED\n");
					}
				}
	;	
ID3 :ID3 COMMA ID {
						int i=0;
						for(i=0;i<c;i++)
						{
							if(strcmp(store_char[i].name,$3)==0)
								break;
						}
						if(i==c)
						{
							int error=0;
							for(i=0;i<in_int;i++)
							{
								if(strcmp(store_int[i].name,$3)==0)
									{error=1;break;}
							}
							for(i=0;i<c;i++)
							{
								if(strcmp(store_float[i].name,$3)==0)
									{error=1;break;}
							}
							if(error==0)
							{
								store_char[c++].name=$3;
							}
							else
							{
								printf("Conflicting Type Declaration\n");
							}
						}
						else
						{
							printf("ALREADY DECLARED\n");
						}


											
					}										
				 
	|ID 		{	int i=0;
					for(i=0;i<c;i++)
					{
						if(strcmp(store_char[i].name,$1)==0)
								break;
					}
					if(i==c)
					{
						int error=0;

						for(i=0;i<in_int;i++)
						{
							if(strcmp(store_int[i].name,$1)==0)
								{error=1;break;}
						}
						for(i=0;i<f;i++)
						{
							if(strcmp(store_float[i].name,$1)==0)
								{error=1;break;}
						}					

						if(error==0)
						{
							store_char[c++].name=$1;
						}
						else
						{
							printf("Conflicting Type Declaration\n");
						}
					}
					else
					{
						printf("ALREADY DECLARED\n");
					}

					
				}
	;	 
	

%%

int find_i(struct var_i *s, char *ch, int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		if(strcmp(s[i].name,ch)==0)break;
	}
	if(i==n)
		return 0;
	else
		return 1;

}






void yyerror(char *s) {

    fprintf(stderr, "%s\n", s);

}

int main()
{
	yyin = freopen("input1.txt", "r",stdin);
	yyout = freopen("output.txt","w",stdout);
	yyparse();
	return 0;
}
