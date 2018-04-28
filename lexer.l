%option nounput yylineno
%{
#include "y.tab.h"
FILE * test;
%}


%%

:						  	                  return COLON;
;						                          return SEMICOLON;
,									  return COMMA;
int						                        {printf("\n TYPE_INT \n")  ; return TYPE_INT;}
float					  	                          return TYPE_FLOAT;
char				   		                          return TYPE_CHAR;
bool						                          return TYPE_BOOL;
const					  	                          return TYPE_CONSTANT;
string 									  return TYPE_STRING;   	

if			  			                          return KEYWORD_IF;
else 					    	                          return KEYWORD_ELSE;
while 						                          return KEYWORD_WHILE;
do 			  			                          return KEYWORD_DO;
switch 					   	                          return KEYWORD_SWITCH;
case 					    	                          return KEYWORD_CASE;
default				   		                          return KEYWORD_DEFAULT;
break 						                          return KEYWORD_BREAK;
continue 		    			                          return KEYWORD_CONTINUE;
for 						                          return KEYWORD_FOR;


\+ 						                          return OPERATOR_PLUS;
\- 						                          return OPERATOR_MINUS;
\* 					   	                          return OPERATOR_MULTIPLY;
\/ 			              			                  return OPERATOR_DIVIDE;
\= 									  return OPERATOR_ASSIGNMENT;

\&\&						                          return LOGIC_AND;
\|\|									  return LOGIC_OR;
\!									  return LOGIC_NOT;

\=\= 		     				                          return RELATION_EQUALS;
\!\=									  return RELATION_NOTEQUAL;
\<									  return RELATION_LESSER;
\>									  return RELATION_GREATER;
\<\=   									  return RELATION_LESSEREQUAL;
\>\=									  return RELATION_GREATEREQUAL;

\{				  					  return SCOPE_BRACEOPEN;
\}   									  return SCOPE_BRACECLOSE;

\(									  return ARGUMENT_OPENBRACKET;
\)								          return ARGUMENT_CLOSEBRACKET;



[0-9]+ 		    	        					{yylval=atoi(yytext); return VALUE_INT;}
(([0-9])*\.([0-9])+)|(([0-9])+\.([0-9])*)                               {yylval=atof(yytext); return VALUE_FLOAT;}
(false|true)                                                            { return VALUE_BOOL;}
'.'		      					        	{ return VALUE_CHAR;}
[ \t\n]+	 						          ;
[a-zA-Z_]([a-zA-Z_]|[0-9])*		     		         	{return IDENTIFIER;}
".*"									{return VALUE_STRING;}

%%



int yywrap(void)
{
	return 1;
}
