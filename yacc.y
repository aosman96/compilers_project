%{
	void yyerror(char *s);
	int yylex();

	#include<stdio.h>
	#include<stdlib.h>
	#include<ctype.h>
	#include<tokens.h>
	 char * symbols[3][100000] ; // 0 ->  NAME , 1 -> TYPE , 2 -> Value
	int symbolVal(char symbol);
	void updateSymbolVal(char symbol , int val);
%}
%union { char* string; char character; int integer_number ; float float_number; bool boolean;}

//Start   ----------------------------------------------->
%start line 


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

%token VALUE_INT 
%token VALUE_FLOAT 
%token VALUE_BOOL 
%token VALUE_CHAR 

%token COLON 

%token KEYWORD_DEFAULT
  //end of tokens ---------------------------------------->

//TYPES   ----------------------------------------->
%type <boolean> conditional_statment  VALUE_BOOL
%type <string>  datatype 
%type <character> VALUE_CHAR
%type <integer_number> VALUE_INT
%type <float_number> VALUE_FLOAT



%% 
 line   : exp ';' '\n'   line                                          {printf ("result is %d\n", $1);}
	| SCOPE_BRACEOPEN line SCOPE_BRACECLOSE  line
	| 
        ;

 exp    : datatype IDENTIFIER					   {$$ = $2;}
	| datatype IDENTIFIER OPERATOR_ASSIGNMENT value				   {$2 = $4;$$=$4}
	| IDENTIFIER OPERATOR_PLUS IDENTIFIER                      {$$ = $1 + $3;}
        | IDENTIFIER OPERATOR_MINUS IDENTIFIER                     {$$ = $1 - $3;}
	| IDENTIFIER OPERATOR_MULTIPLY IDENTIFIER                  {$$ = $1 * $3;}
	| IDENTIFIER OPERATOR_DIVIDE IDENTIFIER                    {$$ = $1 / $3;}
	| KEYWORD_IF ARGUMENT_OPENBRACKET conditional_statment ARGUMENT_CLOSEBRACKET line {$$ = $3 ;}
	| KEYWORD_ELSE line  { $$ = "true"}
	| KEYWORD_WHILE ARGUMENT_OPENBRACKET conditional_statment ARGUMENT_CLOSEBRACKET line {$$ = $3 ;}
	| KEYWORD_DO  line { $$=true}
	|  KEYWORD_SWITCH ARGUMENT_OPENBRACKET IDENTIFIER ARGUMENT_CLOSEBRACKET SCOPE_BRACEOPEN case_statment SCOPE_BRACECLOSE {$$= $3}

        ;

case_statment : KEYWORD_CASE IDENTIFIER COLON line KEYWORD_BREAK |KEYWORD_CASE IDENTIFIER COLON line  ;

datatype: TYPE_INT {$$= "int"}
	| TYPE_BOOL {$$= "boolean"}
	| TYPE_CHAR {$$= "char"}
	| TYPE_FLOAT {$$= "float"}
	| TYPE_CONSTANT datatype {$$= "constant"}
	| TYPE_STRING {$$= "string"}
	
	;

value   : IDENTIFIER  
	|  VALUE_INT 
	|  VALUE_FLOAT 
	|  VALUE_BOOL
	| VALUE_CHAR
	;

conditional_statment :
		       VALUE_INT RELATION_GREATER VALUE_INT {if($1 > $3) $$=true; else $$=false;}
		     | VALUE_INT RELATION_LESSER VALUE_INT {if($1 < $3) $$=true; else $$=false;}
		     | VALUE_INT RELATION_EQUALS VALUE_INT {if($1 == $3) $$=true; else $$=false;}
		     | VALUE_INT RELATION_NOTEQUAL VALUE_INT {if($1 != $3) $$=true; else $$=false;}
		     | VALUE_INT RELATION_LESSEREQUAL VALUE_INT {if($1 <= $3) $$=true; else $$=false;}
		     | VALUE_INT RELATION_GREATEREQUAL VALUE_INT {if($1 <= $3) $$=true; else $$=false;}
		     | VALUE_FLOAT RELATION_GREATER VALUE_FLOAT {if($1 > $3) $$=true; else $$=false;}
		     | VALUE_FLOAT RELATION_LESSER VALUE_FLOAT {if($1 < $3) $$=true; else $$=false;}
		     | VALUE_FLOAT RELATION_EQUALS VALUE_FLOAT {if($1 == $3) $$=true; else $$=false;}
		     | VALUE_FLOAT RELATION_NOTEQUAL VALUE_FLOAT {if($1 != $3) $$=true; else $$=false;}
		     | VALUE_FLOAT RELATION_LESSEREQUAL VALUE_FLOAT {if($1 <= $3) $$=true; else $$=false;}
		     | VALUE_FLOAT RELATION_GREATEREQUAL VALUE_FLOAT {if($1 <= $3) $$=true; else $$=false;}
		     | VALUE_BOOL RELATION_EQUALS VALUE_BOOL {if($1 == $3) $$=true; else $$=false;}
		     | VALUE_BOOL RELATION_NOTEQUAL VALUE_BOOL {if($1 != $3) $$=true; else $$=false;}
		     | VALUE_CHAR RELATION_GREATER VALUE_CHAR {if($1 > $3) $$=true; else $$=false;}
		     | VALUE_CHAR RELATION_LESSER VALUE_CHAR {if($1 < $3) $$=true; else $$=false;}
		     | VALUE_CHAR RELATION_EQUALS VALUE_CHAR {if($1 == $3) $$=true; else $$=false;}
		     | VALUE_CHAR RELATION_NOTEQUAL VALUE_CHAR {if($1 != $3) $$=true; else $$=false;}
		     | VALUE_CHAR RELATION_LESSEREQUAL VALUE_CHAR {if($1 <= $3) $$=true; else $$=false;}
		     | VALUE_CHAR RELATION_GREATEREQUAL VALUE_CHAR {if($1 <= $3) $$=true; else $$=false;}
		     | IDENTIFIER RELATION_GREATER IDENTIFIER {if($1 > $3) $$=true; else $$=false;}
		     | IDENTIFIER RELATION_LESSER IDENTIFIER {if($1 < $3) $$=true; else $$=false;}
		     | IDENTIFIER RELATION_EQUALS IDENTIFIER {if($1 == $3) $$=true; else $$=false;}
		     | IDENTIFIER RELATION_NOTEQUAL IDENTIFIER {if($1 != $3) $$=true; else $$=false;}
		     | IDENTIFIER RELATION_LESSEREQUAL IDENTIFIER {if($1 <= $3) $$=true; else $$=false;}
		     | IDENTIFIER RELATION_GREATEREQUAL IDENTIFIER {if($1 <= $3) $$=true; else $$=false;}
		     | conditional_statment LOGIC_AND conditional_statment {if ($1 && $3) $$=true ; else $$=false;}
		     | conditional_statment LOGIC_OR conditional_statment {if ($1 || $3) $$=true ; else $$=false;}
		     |  LOGIC_NOT conditional_statment {if (!$2) $$=true ; else $$=false;}
		     | ARGUMENT_OPENBRACKET conditional_statment ARGUMENT_CLOSEBRACKET {$$= $2;}

 
%%

int computeSymbolIndex(char token)
46
{
47
	int idx = -1;
48
	if(islower(token)) {
49
		idx = token - 'a' + 26;
50
	} else if(isupper(token)) {
51
		idx = token - 'A';
52
	}
53
	return idx;
54
} 
55

56
/* returns the value of a given symbol */
57
int symbolVal(char symbol)
58
{
59
	int bucket = computeSymbolIndex(symbol);
60
	return symbols[bucket];
61
}
62

63
/* updates the value of a given symbol */
64
void updateSymbolVal(char symbol, int val)
65
{
66
	int bucket = computeSymbolIndex(symbol);
67
	symbols[bucket] = val;
68
}
69

70
int main (void) {
71
	/* init symbol table */
72
	int i;
73
	for(i=0; i<52; i++) {
74
		symbols[i] = 0;
75
	}
76

77
	return yyparse ( );
78
}
79

80
void yyerror (char *s) {fprintf (stderr, "%s\n", s);} 