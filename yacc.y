%{

	void yyerror(char *s);
	int yylex();

	#include<stdio.h>
	#include<stdlib.h>
	#include<ctype.h>
	FILE * yyin  ;
	 char * symbols[3][100000] ; // 0 ->  NAME , 1 -> TYPE , 2 -> Value
	int symbolVal(char symbol);
	void updateSymbolVal(char symbol , int val);
%}
%union { char* string; char character; int integer_number ; float float_number; }

//Start   ----------------------------------------------->
%start code 


// tokens ---------------------------------------->
%token TYPE_INT 
%token TYPE_BOOL 
%token TYPE_CHAR 
%token TYPE_FLOAT  
%token TYPE_CONSTANT 
%token TYPE_STRING

%token KEYWORD_IF 
%token KEYWORD_ELSE 
%token KEYWORD_WHILE 
%token KEYWORD_DO 
%token KEYWORD_SWITCH 
%token KEYWORD_CASE
%token KEYWORD_DEFAULT
%token KEYWORD_BREAK 
%token KEYWORD_CONTINUE 
%token KEYWORD_FOR 

%token IDENTIFIER 

%token OPERATOR_PLUS 
%token OPERATOR_MINUS 
%token OPERATOR_MULTIPLY 
%token OPERATOR_DIVIDE 
%token OPERATOR_ASSIGNMENT 

%token LOGIC_AND 
%token LOGIC_OR 
%token LOGIC_NOT 

%token RELATION_EQUALS 
%token RELATION_NOTEQUAL 
%token RELATION_LESSER 
%token RELATION_GREATER 
%token RELATION_LESSEREQUAL 
%token RELATION_GREATEREQUAL

%token SCOPE_BRACEOPEN 
%token SCOPE_BRACECLOSE

%token ARGUMENT_OPENBRACKET 
%token ARGUMENT_CLOSEBRACKET 

%token SEMICOLON 
%token COMMA

%token VALUE_INT 
%token VALUE_FLOAT 
%token VALUE_BOOL 
%token VALUE_CHAR
%token VALUE_STRING

%token COLON 



  //end of tokens ---------------------------------------->
%right OPERATOR_ASSIGNMENT
%left LOGIC_NOT
%left LOGIC_AND LOGIC_OR
%left RELATION_EQUALS RELATION_NOTEQUAL RELATION_LESSER RELATION_GREATER RELATION_LESSEREQUAL RELATION_GREATEREQUAL
%left OPERATOR_PLUS OPERATOR_MINUS 
%left OPERATOR_MULTIPLY OPERATOR_DIVIDE 
%nonassoc IFX
%nonassoc KEYWORD_ELSE
//TYPES   ----------------------------------------->
/*
%type <boolean> conditional_statment  VALUE_BOOL
%type <string>  datatype 
%type <character> VALUE_CHAR
%type <integer_number> VALUE_INT
%type <float_number> VALUE_FLOAT
*/


%% 
code :  code line 
	| 
	;



 line   : exp SEMICOLON   {printf (" decleration \n");}
	| IDENTIFIER OPERATOR_ASSIGNMENT exp SEMICOLON	{printf( "initilization \n");}
	| SCOPE_BRACEOPEN code SCOPE_BRACECLOSE {printf("a scope decleration \n");}
	| KEYWORD_WHILE ARGUMENT_OPENBRACKET conditional_statment ARGUMENT_CLOSEBRACKET Inside_loops_statments {printf(" a while loop with braces\n");}  // the while loop
	| KEYWORD_WHILE ARGUMENT_OPENBRACKET conditional_statment ARGUMENT_CLOSEBRACKET line {printf(" a while loop has one line \n");}  // the while loop
	| KEYWORD_WHILE ARGUMENT_OPENBRACKET conditional_statment ARGUMENT_CLOSEBRACKET SEMICOLON {printf(" a while loop has no lines \n");}  // the while loop
	
	| KEYWORD_DO   Inside_loops_statments  KEYWORD_WHILE ARGUMENT_OPENBRACKET conditional_statment ARGUMENT_CLOSEBRACKET  {printf("Do while loop \n");}// the do while loop
	| KEYWORD_DO   line  KEYWORD_WHILE ARGUMENT_OPENBRACKET conditional_statment ARGUMENT_CLOSEBRACKET  {printf("Do while loop \n");}// the do while loop
	
	| KEYWORD_SWITCH ARGUMENT_OPENBRACKET IDENTIFIER ARGUMENT_CLOSEBRACKET SCOPE_BRACEOPEN case_statment  KEYWORD_DEFAULT  COLON code KEYWORD_BREAK SEMICOLON case_statment SCOPE_BRACECLOSE                      {printf("\n a switch case statement \n");} // swithc case statment 
	
	| KEYWORD_FOR ARGUMENT_OPENBRACKET datatype IDENTIFIER OPERATOR_ASSIGNMENT exp SEMICOLON conditional_statment SEMICOLON IDENTIFIER OPERATOR_ASSIGNMENT exp ARGUMENT_CLOSEBRACKET Inside_loops_statments
	| KEYWORD_FOR ARGUMENT_OPENBRACKET datatype IDENTIFIER OPERATOR_ASSIGNMENT exp SEMICOLON conditional_statment SEMICOLON IDENTIFIER OPERATOR_ASSIGNMENT exp ARGUMENT_CLOSEBRACKET line
	
	| datatype IDENTIFIER SEMICOLON  					   {printf("Decleration \n");} // decleartion for variable
	| datatype IDENTIFIER OPERATOR_ASSIGNMENT exp SEMICOLON {printf("ASSignment decleration \n");}
	
	| KEYWORD_IF ARGUMENT_OPENBRACKET conditional_statment ARGUMENT_CLOSEBRACKET line %prec IFX {printf( "if without else \n");}
	|KEYWORD_IF ARGUMENT_OPENBRACKET conditional_statment ARGUMENT_CLOSEBRACKET line KEYWORD_ELSE line {printf("if else statment \n");}
	
	|  datatype IDENTIFIER ARGUMENT_OPENBRACKET argument_variables ARGUMENT_CLOSEBRACKET SCOPE_BRACEOPEN code SCOPE_BRACECLOSE
	;


argument_variables : datatype IDENTIFIER |
		     datatype IDENTIFIER COMMA argument_variables 
		     |

 exp    :                    
	 exp OPERATOR_MULTIPLY exp                  {printf("\n multiplication statement \n");}
	| exp OPERATOR_DIVIDE exp                    {printf("\n division statement \n ");}
	| exp OPERATOR_PLUS exp                        {printf("\n plus statement \n");} // + 
        | exp OPERATOR_MINUS exp			{printf("\n minus statement \n ");}
	| ARGUMENT_OPENBRACKET exp ARGUMENT_CLOSEBRACKET {printf("\n argument experation \n");}
	| value 
        ;



Inside_loops_statments :
		 SCOPE_BRACEOPEN code Inside_loops_statments SCOPE_BRACECLOSE
		 |KEYWORD_CONTINUE SEMICOLON
		 |KEYWORD_BREAK SEMICOLON
		 
		;



case_statment : 
		KEYWORD_CASE value COLON code KEYWORD_BREAK SEMICOLON case_statment   {printf("\n CAse statemnent \n");}
		| 
		;



datatype: TYPE_INT    //{$$= "int"} {prinf("\n TYPE_INT \n");}
	| TYPE_BOOL //{$$= "boolean"}
	| TYPE_CHAR //{$$= "char"}
	| TYPE_FLOAT //{$$= "float"}
	| TYPE_CONSTANT datatype // {$$= "constant"}
	| TYPE_STRING //{$$= "string"}
	
	;

value   : 
	  IDENTIFIER  {printf("\n iDENtufier \n");}
	| VALUE_INT  {printf("\n integer value \n");}
	| VALUE_FLOAT {printf("\n float value \n");}
	| VALUE_BOOL {printf(" \n boolean value \n");}
	| VALUE_CHAR {printf("\n char value \n");}
	| OPERATOR_MINUS value
	| OPERATOR_PLUS value
	
	
	;

conditional_statment :
		       exp
		     | exp RELATION_GREATER exp {printf(" \n greater than statement \n");}
		     | exp RELATION_LESSER exp {printf(" \n lesser than statement \n");}
		     | exp RELATION_EQUALS exp  {printf(" \n equal statement \n");}
		     | exp RELATION_NOTEQUAL exp  {printf("\n not equal statement \n");}
		     | exp RELATION_LESSEREQUAL exp  {printf("\n less equal than statement \n");}
		     | exp RELATION_GREATEREQUAL exp {printf("\n greater equal than statement \n");}
		     |  conditional_statment LOGIC_AND conditional_statment {printf("\n AND statement \n");}
		     |	 conditional_statment LOGIC_OR conditional_statment {printf("\n OR statement \n");}
		     |  LOGIC_NOT conditional_statment  {printf(" \n LOGICAL NOT statement \n");}
		     //| ARGUMENT_OPENBRACKET conditional_statment ARGUMENT_CLOSEBRACKET 
			
		;
%%

void yyerror(char *s) {
    fprintf(stdout, "%s\n", s);
}


int main (void)
{

yyin  = fopen("testfile.txt","r+");
if(yyin ==NULL)
{
	printf("\n error \n");
}
else
{
	
		printf("\n Parsing  \n");
		yyparse();
     
}	
fclose(yyin );
return 0;

}