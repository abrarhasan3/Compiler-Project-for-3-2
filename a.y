%{
void yyerror(char *s);
#include <stdlib.h>
#include <stdio.h>
#include<string.h>
#include<math.h>
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

int f_index;
int yylex();
int find_i(struct var_i *s, char *ch, int n);
int find_c(struct var_c *s, char *ch, int n);
int find_f(struct var_f *s, char *ch, int n);

int index_for_if;
%}

%union 
{
        int number;
        char *string;
        float f_number;
        union{
        	int num;
        	char *str;
        	float f_num;        
		}next;
		struct {
			int num;
			float f_num;
			char *str;
			int datatype;
			int operation;
		}sup;        
}

%token FLOAT INT COMMA ASSIGN PRINT RAB LAB SCAN INC DEC IF GT LT EQU LSBRACKET RSBRACKET ELIF ELSE
%left ADD SUB MUL DIV
%token <f_number> FL ROOT
%token<number> NUM 
%token<string>	ID 
%token<string>	CHAR 
%token END
%type<number>EXPR_i	EXPR_1  
%type<f_number>EXPR_f 
%type<next> LOGICAL_OP	

%%

PROGRAM : STATEMENT PROGRAM 
		|;
STATEMENT: 
		INT ID1 END 				
		|FLOAT ID2 END	
		|CHAR ID3 END
		|ID ASSIGN NUM END  {
								f_index = -1;
								
								int t;
								
								if (find_i(store_int,$1,in_int) == 1){
									store_int[f_index].value = $3;
									store_int[f_index].valid = 1;
								}
								
								
								else if(find_c(store_char,$1,c) == 1)
								{
									store_char[f_index].value = $3;
								}
								else
								{
									printf("Variable Not Declared");
								}							

							}
		|ID ASSIGN FL END 	{
								f_index = -1;
								
								int t;
								if(find_f(store_float,$1,f) == 1)
								{
									store_float[f_index].value = $3;
									store_float[f_index].valid = 1;
									
								}

							}
		|ID ASSIGN CHAR END	{
								f_index = -1;
								int t;
								if(find_c(store_char,$1,c) == 1)
								{
									store_char[f_index].value = $3;
									store_char[f_index].valid = 1;
									
								}


							}
		|PRINT LAB ID RAB END	{
								if (find_c(store_char,$3,c) == 1){
									int i=0;
									while(store_char[f_index].value[i]!= '\0') 
									{
										printf("%c",store_char[f_index].value[i]);
										i++;
									}
								}
								else if (find_i(store_int,$3,in_int) == 1){
									printf("\nValue of var %d",store_int[f_index].value);
								}
								else if (find_f(store_float,$3,f) == 1){
									printf("\nValue of var %f",store_float[f_index].value);
								}
								else{
									printf("Variable Is not Declared");
								}

							}
		|SCAN				{
								

							}
		|ID ASSIGN EXPR_i END	{
									if(find_i(store_int,$1,in_int)==1)

									{
										store_int[f_index].value=(int)$3;
										store_int[f_index].valid=1;
									}
									else
									{
										printf("Variable is not Declared");
									}
								}
		|ID ASSIGN EXPR_f END	{
									if(find_f(store_float,$1,f)==1)

									{
										store_float[f_index].value=(float)$3;
										store_float[f_index].valid=1;
									}
									else
									{
										printf("Variable is not Declared");
									}
								}
		|ID INC END				{
									if(find_i(store_int,$1,in_int)==1)

									{
										store_int[f_index].value+=1;
										store_int[f_index].valid=1;
									}
									else if(find_f(store_float,$1,f)==1)

									{
										store_float[f_index].value+=1;
										store_float[f_index].valid=1;
									}
									else
									{
										printf("Variable is not Declared");
									}

								}
		|ID DEC END				{
									if(find_i(store_int,$1,in_int)==1)

									{
										store_int[f_index].value-=1;
										store_int[f_index].valid=1;
									}
									else if(find_f(store_float,$1,f)==1)

									{
										store_float[f_index].value-=1;
										store_float[f_index].valid=1;
									}
									else
									{
										printf("Variable is not Declared");
									}

								}
		|ROOT LAB NUM RAB END 	{
											printf("%f",sqrt($3));
								}
		|IF LAB LOGICAL_OP RAB LSBRACKET STMNT RSBRACKET{
									if($3.num == 1)
									{
										if(index_for_if == 1 )
											printf("%d",$6);
										else if (index_for_if == 2)
										{
											if(f_index	!= -1)
											{
												store_int[f_index].value=(int)$6;
												store_int[f_index].valid=1;
											}
											else
											{
												printf("Variable is not Declared");
											}

										}
									}


								}
		|IF LAB LOGICAL_OP RAB LSBRACKET STMNT RSBRACKET ELIF LAB LOGICAL_OP RAB LSBRACKET STMNT RSBRACKET ELSE LSBRACKET STMNT RSBRACKET {
									if($3.num == 1)
									{
										if(index_for_if == 1 )
											printf("%d",$6);
										else if (index_for_if == 2)
										{
											if(f_index	!= -1)
											{
												store_int[f_index].value=(int)$6;
												store_int[f_index].valid=1;
											}
											else
											{
												printf("Variable is not Declared");
											}

										}

									}
									else if($10.num == 1)
									{
										if(index_for_if == 1 )
											printf("%d",$13);
										else if (index_for_if == 2)
										{
											if(f_index	!= -1)
											{
												store_int[f_index].value=(int)$13;
												store_int[f_index].valid=1;
											}
											else
											{
												printf("Variable is not Declared");
											}

										}
									}
									else
									{
										if(index_for_if == 1 )
											printf("%d",$17);
										else if (index_for_if == 2)
										{
											if(f_index	!= -1)
											{
												store_int[f_index].value=(int)$17;
												store_int[f_index].valid=1;
											}
											else
											{
												printf("Variable is not Declared");
											}

										}

									}
								}
		;


LOGICAL_OP : 
			EXPR_1 GT EXPR_1 	{if($1>$3) $$.num=1;else $$.num=0}
			|EXPR_1 LT EXPR_1	{if($1<$3) $$.num=1;else $$.num=0}
			|EXPR_1 EQU EXPR_1	{if($1==$3) $$.num=1;else $$.num=0}
			;
STMNT:	PRINT LAB ID RAB END	{
									if (find_i(store_int,$3,in_int) == 1){
											$$ = store_int[f_index].value;
											index_for_if = 1;
										}
									else{
										//printf("Variable Is not Declared 1");
									}
								}
		|ID ASSIGN EXPR_i END	{
									$$ = $3;
									index_for_if = 2;
									if (find_i(store_int,$1,in_int) != 1){
											f_index = -1;
										}

								}
		;
EXPR_1		: 
			NUM 				{
									$$=$1;

								}

			|ID					{
									if(find_i(store_int,$1,in_int)==1)

									{
										$$=store_int[f_index].value;
									}
								}
		;
EXPR_i : EXPR_i ADD EXPR_i {$$= $1+$3;}
		|EXPR_i SUB EXPR_i {$$= $1-$3;}
		|EXPR_i MUL EXPR_i {$$= $1*$3;}
		|EXPR_i DIV EXPR_i {$$= $1/$3;}
	  	|NUM				{$$ = $1;}
	  	;
EXPR_f : EXPR_f ADD EXPR_f {$$= $1+$3;}
		|EXPR_f SUB EXPR_f {$$= $1-$3;}
		|EXPR_f MUL EXPR_f {$$= (float)$1*(float)$3;}
		|EXPR_f DIV EXPR_f {$$= (float)$1/(float)$3;}
	  	|FL					{$$ = (float)$1;}
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
	| ID	{
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
	{
		return 0;
	}
	else
	{
		f_index = i;
		return 1;
	}

}

int find_f(struct var_f *s, char *ch, int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		if(strcmp(s[i].name,ch)==0)break;
	}
	if(i==n)
	{
		return 0;
	}
	else
	{
		f_index = i;
		return 1;
	}

}
int find_c(struct var_c *s, char *ch, int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		if(strcmp(s[i].name,ch)==0)break;
	}
	if(i==n)
	{
		return 0;
	}
	else
	{
		f_index = i;
		return 1;
	}

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
