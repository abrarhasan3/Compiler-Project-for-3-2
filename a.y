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

struct f_if{
			int num;
			float f_num;
			char *str;
			int datatype;
			int operation;
			int indx;
		}arr_if[100];
int index_if;
struct var_for{
	char name[100];
	int index;
	union{
        	int num;
        	char *str;
        	float f_num;        
		}value;
	int datatype;
	int operation;	
}F_indx[100];


int f_index;
int yylex();
int find_i(struct var_i *s, char *ch, int n);
int find_c(struct var_c *s, char *ch, int n);
int find_f(struct var_f *s, char *ch, int n);

int for_id_index;
 
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
			int indx;
		}sup;        
}

%token FLOAT INT COMMA ASSIGN PRINT RAB LAB SCAN INC DEC IF GT LT EQU LSBRACKET RSBRACKET ELIF ELSE WHILE FOR STMNT1
%left MUL DIV 
%left ADD SUB 
%token <f_number> FL ROOT
%token<number> NUM 
%token<string>	ID 
%token<string>	CHAR 
%token END
%type<number>EXPR_1 
%type<next> LOGICAL_OP
%type<sup>STMNT	OP1	EXPR_i	TERM_i FACTOR_i 

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
										if($3.datatype == 1)
										{
											store_int[f_index].value=$3.num;
											store_int[f_index].valid=1;
										}
										else
										{
											store_int[f_index].value=(int)$3.f_num;
											store_int[f_index].valid=1;
										}
										
									}
									else if(find_f(store_float,$1,f)==1)
									{
										if($3.datatype == 1)
										{
											store_float[f_index].value=(float)$3.num;
											store_float[f_index].valid=1;
										}
										else
										{
											store_float[f_index].value=$3.f_num;
											store_float[f_index].valid=1;
										}
										
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
										int i;
										for(i=0;i<index_if;i++)
										{
												if(arr_if[i].operation == 1 )
												{
													if(arr_if[i].datatype == 1)
														printf("%d",store_int[arr_if[i].indx].value);
													else if(arr_if[i].datatype == 2)
													{
														printf("%f",store_float[arr_if[i].indx].value);
													}
												}
												else if (arr_if[i].operation == 2)
												{

													if(arr_if[i].indx != -1)
													{
														if(arr_if[i].datatype == 1)
														{
															store_int[arr_if[i].indx].value=(int)arr_if[i].num;
															store_int[arr_if[i].indx].valid=1;
														}
														else if(arr_if[i].datatype==2)
														{
															store_float[arr_if[i].indx].value=arr_if[i].f_num;
															store_float[arr_if[i].indx].valid=1;
														}
													}
													else
													{
														printf("Variable is not Declared");
													}

											}
										}
										index_if=0;
										
									}


								}
		|IF LAB LOGICAL_OP RAB LSBRACKET STMNT RSBRACKET ELIF LAB LOGICAL_OP RAB LSBRACKET STMNT RSBRACKET ELSE LSBRACKET STMNT RSBRACKET {
									if($3.num == 1)
									{
										int i;

										if($6.operation == 1 )
											{
												if($6.datatype = 1)
													printf("%d",$6.num);
												else if($6.datatype == 2)
												{
													printf("%f",$6.f_num);
												}
											}
										else if ($6.operation == 2)
										{
											if($6.indx	!= -1)
											{
												if($6.datatype == 1)
												{
													store_int[$6.indx].value=(int)$6.num;
													store_int[$6.indx].valid=1;
												}
												else if($6.datatype==2)
												{
													store_float[$6.indx].value=$6.f_num;
													store_float[$6.indx].valid=1;
												}											
											}
											else
											{
												printf("Variable is not Declared");
											}

										}

									}
									else if($10.num == 1)
									{
										if($13.operation == 1 )
											{
												if($13.datatype = 1)
													printf("%d",$13.num);
												else if($13.datatype = 2)
													printf("%f",$13.f_num);
											}
										else if ($13.operation == 2)
										{
											if($13.indx	!= -1)
											{
												if($13.datatype == 1)
												{
													store_int[$13.indx].value=(int)$13.num;
													store_int[$13.indx].valid=1;
												}
												else if($13.datatype==2)
												{
													store_float[$13.indx].value=$13.f_num;
													store_float[$13.indx].valid=1;
												}
											
											}
											else
											{
												printf("Variable is not Declared");
											}

										}
									}
									else
									{
										if($17.operation == 1 )
											{
												if($17.datatype = 1)
													printf("%d",$17.num);
												else if($17.datatype = 2)
													printf("%f",$17.f_num);
											}
										else if ($17.operation == 2)
										{
											if($17.indx	!= -1)
											{
												if($13.datatype == 1)
												{
													store_int[$17.indx].value=(int)$17.num;
													store_int[$17.indx].valid=1;
												}
												else if($17.datatype==2)
												{
													store_float[$17.indx].value=$17.f_num;
													store_float[$17.indx].valid=1;
												}
											
											}
											else
											{
												printf("Variable is not Declared");
											}

										}

									}
								}
		|WHILE LAB NUM RAB LSBRACKET STMNT RSBRACKET	{	int i=0;
																if($6.operation = 1)
																{
																	while(i<$3)
																	{	
																		//printf("HI\n");
																		i++;
																	}
																}
															}
		|FOR LAB ID ASSIGN NUM END ID GT NUM END ID OP1 RAB LSBRACKET F RSBRACKET{
							
						
							if(strcmp($3,$7)==0 )
							{
								
								if(strcmp($3,$11)==0)
								{
									
									find_i(store_int,$3,in_int);
									int index1= f_index;
									for(store_int[index1].value=$5;store_int[index1].value<$9;store_int[index1].value=store_int[index1].value+$12.num)
									{
										int i;
										for(i=0;i<for_id_index;i++)
										{
											int ind=F_indx[i].index;
											if(F_indx[i].operation==1)
											{
												
												if(F_indx[i].datatype==1)
												{
													printf("%d\n",store_int[ind].value);
												}
												else if(F_indx[i].datatype==2)
												{
													printf("%f\n",store_float[ind].value);
												}
												else if(F_indx[i].datatype==3)
												{
																										
													int i11=0;											
													printf("%s\n",store_char[ind].value);
												}
											}
											else
											{

											}
											F_indx[i].operation=0;
											F_indx[i].datatype=0;
											F_indx[i].index=-1;
										}
									}
									for_id_index=0;
								}
							}
				}
		;
F: 		|
		F PRINT LAB ID RAB END {
								F_indx[for_id_index].operation=1;

							
								if (find_i(store_int,$4,in_int) == 1)
								{
									
									F_indx[for_id_index].datatype=1;
									F_indx[for_id_index].index = f_index;
								}
								else if (find_c(store_char,$4,c) == 1){
									
										
										F_indx[for_id_index].datatype=3;
										F_indx[for_id_index].index = f_index;
										
									
								}
								else if (find_f(store_float,$4,f) == 1){
									F_indx[for_id_index].datatype=2;
									F_indx[for_id_index].index = f_index;
								}
								strcpy(F_indx[for_id_index++].name,$4);							
							}
		|F ID ASSIGN EXPR_i END {printf("%d", $4.num);}
		
		;
OP1 	: INC 		{
						$$.num = 1;
						$$.operation = 1;
	
					}
		| DEC 		{
						$$.num = 1;
						$$.operation = 2;
					}
		| ADD NUM 	{
						$$.num = $2;
						$$.operation = 1;
					
					}
		|SUB NUM 	{
						$$.num = $2;
						$$.operation = 2;
					}
		;

LOGICAL_OP : 
			EXPR_1 GT EXPR_1 	{if($1>$3) $$.num=1;else $$.num=0}
			|EXPR_1 LT EXPR_1	{if($1<$3) $$.num=1;else $$.num=0}
			|EXPR_1 EQU EXPR_1	{if($1==$3) $$.num=1;else $$.num=0}
			;
STMNT:	
		|STMNT PRINT LAB ID RAB END	{
									if (find_i(store_int,$4,in_int) == 1){
											arr_if[index_if].num = store_int[f_index].value;
											arr_if[index_if].indx = f_index;
											arr_if[index_if].datatype = 1;
											arr_if[index_if++].operation = 1;
											
										}
									else if (find_f(store_float,$4,f) == 1){
											arr_if[index_if].f_num = store_float[f_index].value;
											arr_if[index_if].indx = f_index;
											arr_if[index_if].datatype = 2;
											arr_if[index_if++].operation = 1;
											
										}
										//printf("Variable Is not Declared 1");
									
								}
		|STMNT ID ASSIGN EXPR_i END	{
									f_index = -1;
									if($4.datatype==1)
									{
										
										arr_if[index_if].operation = 2;
										if (find_i(store_int,$2,in_int) == 1){
											arr_if[index_if].indx = f_index;
											arr_if[index_if].num = $4.num;
											arr_if[index_if].datatype=1;
											index_if++;
										}
										else if(find_f(store_float,$2,f) == 1){
											arr_if[index_if].indx = f_index;
											arr_if[index_if].f_num = (float)$4.num;
											arr_if[index_if].datatype=2;
											index_if++;
										}

									}
									else if($4.datatype == 2)
									{

										arr_if[index_if].operation = 2;
										if (find_i(store_int,$2,in_int) == 1){
											arr_if[index_if].indx = f_index;
											arr_if[index_if].num =(int)$4.f_num;
											arr_if[index_if].datatype=1;
											index_if++;
										}
										else if(find_f(store_float,$2,f) == 1){
											arr_if[index_if].indx = f_index;
											arr_if[index_if].f_num =	$4.f_num;
											arr_if[index_if].datatype=2;
											index_if++;
										}
										
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
EXPR_i : EXPR_i ADD TERM_i {
								if($1.datatype == 1 && $3.datatype == 1)
								{
									$$.num= $1.num+$3.num;
									$$.datatype = 1;
								}
								else if($1.datatype == 1 && $3.datatype == 2)
								{
									$$.f_num= (float)$1.num + $3.f_num;
									$$.datatype = 2;

								}
								else if($1.datatype == 2 && $3.datatype == 1)
								{
									$$.f_num= (float)$3.num + $1.f_num;
									$$.datatype = 2;

								}
								else if($1.datatype == 2 && $3.datatype == 2)
								{
									$$.f_num= $3.f_num + $1.f_num;
									$$.datatype = 2;

								}
								
							}
		|TERM_i			   {
								if($1.datatype==1)
								{
									$$.num = $1.num;
									$$.datatype = 1;
								}
								else
								{
									$$.f_num = $1.f_num;
									$$.datatype = 2;
								}
							}
		|EXPR_i SUB TERM_i {
								if($1.datatype == 1 && $3.datatype == 1)
								{
									$$.num= $1.num - $3.num;
									$$.datatype = 1;
								}
								else if($1.datatype == 1 && $3.datatype == 2)
								{
									$$.f_num= (float)$1.num - $3.f_num;
									$$.datatype = 2;

								}
								else if($1.datatype == 2 && $3.datatype == 1)
								{
									$$.f_num=  $1.f_num -(float)$3.num;
									$$.datatype = 2;

								}
								else if($1.datatype == 2 && $3.datatype == 2)
								{
									$$.f_num= $3.f_num - $1.f_num;
									$$.datatype = 2;

								}
								
							}
		;
TERM_i:	FACTOR_i 			{
								if($1.datatype==1)
								{
									$$.num = $1.num;
									$$.datatype = 1;
								}
								else
								{
									$$.f_num = $1.f_num;
									$$.datatype = 2;
								}
							}
		|TERM_i MUL FACTOR_i {
								if($1.datatype == 1 && $3.datatype == 1)
								{
									$$.num= $1.num*$3.num;
									$$.datatype = 1;
								}
								else if($1.datatype == 1 && $3.datatype == 2)
								{
									$$.f_num= (float)$1.num * $3.f_num;
									$$.datatype = 2;

								}
								else if($1.datatype == 2 && $3.datatype == 1)
								{
									$$.f_num= (float)$3.num * $1.f_num;
									$$.datatype = 2;

								}
								else if($1.datatype == 2 && $3.datatype == 2)
								{
									$$.f_num= $3.f_num * $1.f_num;
									$$.datatype = 2;

								}
								
							}
		|TERM_i DIV FACTOR_i {
								if($1.datatype == 1 && $3.datatype == 1)
								{
									$$.num= $1.num/$3.num;
									$$.datatype = 1;
								}
								else if($1.datatype == 1 && $3.datatype == 2)
								{
									$$.f_num= (float)$1.num / $3.f_num;
									$$.datatype = 2;

								}
								else if($1.datatype == 2 && $3.datatype == 1)
								{
									$$.f_num= (float)$3.num / $1.f_num;
									$$.datatype = 2;

								}
								else if($1.datatype == 2 && $3.datatype == 2)
								{
									$$.f_num= $3.f_num / $1.f_num;
									$$.datatype = 2;

								}
								
							}
FACTOR_i:
	  	NUM				{	
	  						$$.num = $1;
	  						$$.datatype = 1;
						}
	  	|LAB EXPR_i RAB 	{
	  							if($2.datatype == 1)
	  							{
	  								$$.num = $2.num;
	  								$$.datatype = 1;
	  							}
	  							else
	  							{
	  								$$.f_num = $2.f_num;
	  								$$.datatype = 2;
	  							}
	  						}
	  	|ID 			{
	  						if (find_i(store_int,$1,in_int) == 1)
	  						{
	  							$$.num=store_int[f_index].value;
	  							$$.datatype = 1;
	  						}
	  						else if (find_f(store_float,$1,f) == 1)
	  						{
	  							$$.f_num=store_float[f_index].value;
	  							$$.datatype = 2;
	  						}
	  					}
	  	|FL 			{
	  						$$.f_num = $1;
	  						$$.datatype = 2;

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
