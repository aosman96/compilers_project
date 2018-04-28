/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "yacc.y"


	void yyerror(char *s);
	int yylex();

	#include<stdio.h>
	#include<stdlib.h>
	#include<ctype.h>
	FILE * test ;
	 char * symbols[3][100000] ; // 0 ->  NAME , 1 -> TYPE , 2 -> Value
	int symbolVal(char symbol);
	void updateSymbolVal(char symbol , int val);

/* Line 371 of yacc.c  */
#line 82 "y.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TYPE_INT = 258,
     TYPE_BOOL = 259,
     TYPE_CHAR = 260,
     TYPE_FLOAT = 261,
     TYPE_CONSTANT = 262,
     TYPE_STRING = 263,
     KEYWORD_IF = 264,
     KEYWORD_ELSE = 265,
     KEYWORD_WHILE = 266,
     KEYWORD_DO = 267,
     KEYWORD_SWITCH = 268,
     KEYWORD_CASE = 269,
     KEYWORD_DEFAULT = 270,
     KEYWORD_BREAK = 271,
     KEYWORD_CONTINUE = 272,
     KEYWORD_FOR = 273,
     IDENTIFIER = 274,
     OPERATOR_PLUS = 275,
     OPERATOR_MINUS = 276,
     OPERATOR_MULTIPLY = 277,
     OPERATOR_DIVIDE = 278,
     OPERATOR_ASSIGNMENT = 279,
     LOGIC_AND = 280,
     LOGIC_OR = 281,
     LOGIC_NOT = 282,
     RELATION_EQUALS = 283,
     RELATION_NOTEQUAL = 284,
     RELATION_LESSER = 285,
     RELATION_GREATER = 286,
     RELATION_LESSEREQUAL = 287,
     RELATION_GREATEREQUAL = 288,
     SCOPE_BRACEOPEN = 289,
     SCOPE_BRACECLOSE = 290,
     ARGUMENT_OPENBRACKET = 291,
     ARGUMENT_CLOSEBRACKET = 292,
     SEMICOLON = 293,
     COMMA = 294,
     VALUE_INT = 295,
     VALUE_FLOAT = 296,
     VALUE_BOOL = 297,
     VALUE_CHAR = 298,
     VALUE_STRING = 299,
     COLON = 300,
     IFX = 301
   };
#endif
/* Tokens.  */
#define TYPE_INT 258
#define TYPE_BOOL 259
#define TYPE_CHAR 260
#define TYPE_FLOAT 261
#define TYPE_CONSTANT 262
#define TYPE_STRING 263
#define KEYWORD_IF 264
#define KEYWORD_ELSE 265
#define KEYWORD_WHILE 266
#define KEYWORD_DO 267
#define KEYWORD_SWITCH 268
#define KEYWORD_CASE 269
#define KEYWORD_DEFAULT 270
#define KEYWORD_BREAK 271
#define KEYWORD_CONTINUE 272
#define KEYWORD_FOR 273
#define IDENTIFIER 274
#define OPERATOR_PLUS 275
#define OPERATOR_MINUS 276
#define OPERATOR_MULTIPLY 277
#define OPERATOR_DIVIDE 278
#define OPERATOR_ASSIGNMENT 279
#define LOGIC_AND 280
#define LOGIC_OR 281
#define LOGIC_NOT 282
#define RELATION_EQUALS 283
#define RELATION_NOTEQUAL 284
#define RELATION_LESSER 285
#define RELATION_GREATER 286
#define RELATION_LESSEREQUAL 287
#define RELATION_GREATEREQUAL 288
#define SCOPE_BRACEOPEN 289
#define SCOPE_BRACECLOSE 290
#define ARGUMENT_OPENBRACKET 291
#define ARGUMENT_CLOSEBRACKET 292
#define SEMICOLON 293
#define COMMA 294
#define VALUE_INT 295
#define VALUE_FLOAT 296
#define VALUE_BOOL 297
#define VALUE_CHAR 298
#define VALUE_STRING 299
#define COLON 300
#define IFX 301



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 14 "yacc.y"
 char* string; char character; int integer_number ; float float_number; 

/* Line 387 of yacc.c  */
#line 220 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 248 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   417

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  10
/* YYNRULES -- Number of rules.  */
#define YYNRULES  56
/* YYNRULES -- Number of states.  */
#define YYNSTATES  144

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,     7,    10,    15,    19,    25,    31,
      37,    44,    51,    65,    80,    95,    99,   105,   111,   119,
     128,   131,   136,   137,   141,   145,   149,   153,   157,   159,
     164,   167,   170,   178,   179,   181,   183,   185,   187,   190,
     192,   194,   196,   198,   200,   202,   205,   208,   210,   214,
     218,   222,   226,   230,   234,   238,   242
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    48,    49,    -1,    -1,    51,    38,    -1,
      19,    24,    51,    38,    -1,    34,    48,    35,    -1,    11,
      36,    56,    37,    52,    -1,    11,    36,    56,    37,    49,
      -1,    11,    36,    56,    37,    38,    -1,    12,    52,    11,
      36,    56,    37,    -1,    12,    49,    11,    36,    56,    37,
      -1,    13,    36,    19,    37,    34,    53,    15,    45,    49,
      16,    38,    53,    35,    -1,    18,    36,    54,    19,    24,
      51,    38,    56,    38,    19,    24,    51,    37,    52,    -1,
      18,    36,    54,    19,    24,    51,    38,    56,    38,    19,
      24,    51,    37,    49,    -1,    54,    19,    38,    -1,    54,
      19,    24,    51,    38,    -1,     9,    36,    56,    37,    49,
      -1,     9,    36,    56,    37,    49,    10,    49,    -1,    54,
      19,    36,    50,    37,    34,    48,    35,    -1,    54,    19,
      -1,    54,    19,    39,    50,    -1,    -1,    51,    22,    51,
      -1,    51,    23,    51,    -1,    51,    20,    51,    -1,    51,
      21,    51,    -1,    36,    51,    37,    -1,    55,    -1,    34,
      48,    52,    35,    -1,    17,    38,    -1,    16,    38,    -1,
      14,    55,    45,    49,    16,    38,    53,    -1,    -1,     3,
      -1,     4,    -1,     5,    -1,     6,    -1,     7,    54,    -1,
       8,    -1,    19,    -1,    40,    -1,    41,    -1,    42,    -1,
      43,    -1,    21,    55,    -1,    20,    55,    -1,    51,    -1,
      51,    31,    51,    -1,    51,    30,    51,    -1,    51,    28,
      51,    -1,    51,    29,    51,    -1,    51,    32,    51,    -1,
      51,    33,    51,    -1,    56,    25,    56,    -1,    56,    26,
      56,    -1,    27,    56,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    97,    97,    98,   103,   104,   105,   106,   107,   108,
     110,   111,   113,   115,   116,   118,   119,   121,   122,   124,
     128,   129,   130,   133,   134,   135,   136,   137,   138,   144,
     145,   146,   153,   154,   159,   160,   161,   162,   163,   164,
     169,   170,   171,   172,   173,   174,   175,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TYPE_INT", "TYPE_BOOL", "TYPE_CHAR",
  "TYPE_FLOAT", "TYPE_CONSTANT", "TYPE_STRING", "KEYWORD_IF",
  "KEYWORD_ELSE", "KEYWORD_WHILE", "KEYWORD_DO", "KEYWORD_SWITCH",
  "KEYWORD_CASE", "KEYWORD_DEFAULT", "KEYWORD_BREAK", "KEYWORD_CONTINUE",
  "KEYWORD_FOR", "IDENTIFIER", "OPERATOR_PLUS", "OPERATOR_MINUS",
  "OPERATOR_MULTIPLY", "OPERATOR_DIVIDE", "OPERATOR_ASSIGNMENT",
  "LOGIC_AND", "LOGIC_OR", "LOGIC_NOT", "RELATION_EQUALS",
  "RELATION_NOTEQUAL", "RELATION_LESSER", "RELATION_GREATER",
  "RELATION_LESSEREQUAL", "RELATION_GREATEREQUAL", "SCOPE_BRACEOPEN",
  "SCOPE_BRACECLOSE", "ARGUMENT_OPENBRACKET", "ARGUMENT_CLOSEBRACKET",
  "SEMICOLON", "COMMA", "VALUE_INT", "VALUE_FLOAT", "VALUE_BOOL",
  "VALUE_CHAR", "VALUE_STRING", "COLON", "IFX", "$accept", "code", "line",
  "argument_variables", "exp", "Inside_loops_statments", "case_statment",
  "datatype", "value", "conditional_statment", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    48,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      50,    50,    50,    51,    51,    51,    51,    51,    51,    52,
      52,    52,    53,    53,    54,    54,    54,    54,    54,    54,
      55,    55,    55,    55,    55,    55,    55,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     2,     4,     3,     5,     5,     5,
       6,     6,    13,    14,    14,     3,     5,     5,     7,     8,
       2,     4,     0,     3,     3,     3,     3,     3,     1,     4,
       2,     2,     7,     0,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,    34,    35,    36,    37,     0,    39,     0,
       0,     0,     0,     0,    40,     0,     0,     3,     0,    41,
      42,    43,    44,     2,     0,     0,    28,    38,     0,     0,
       0,     0,     3,     0,     0,     0,     0,     0,    40,    46,
      45,     0,     0,     0,     0,     0,     0,     4,     0,     0,
      47,     0,     0,    31,    30,     0,     0,     0,     0,     0,
       0,     6,    27,    25,    26,    23,    24,     0,    22,    15,
      56,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     0,     0,     0,
      50,    51,    49,    48,    52,    53,    54,    55,    17,     9,
       8,     7,    29,     0,     0,    33,     0,    16,     0,    20,
       0,    11,    10,     0,     0,     0,     3,    22,    18,     0,
       0,     0,     0,    21,     0,     0,     0,    19,     0,     0,
       0,     0,     0,     0,    33,    33,     0,    32,     0,     0,
      12,     0,    14,    13
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    23,    88,    24,    34,   114,    25,    26,    51
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -62
static const yytype_int16 yypact[] =
{
     -62,   120,   -62,   -62,   -62,   -62,   -62,   184,   -62,   -32,
     -29,   243,   -15,     6,     0,    -4,    -4,   -62,   374,   -62,
     -62,   -62,   -62,   -62,    24,    11,   -62,   -62,    65,    65,
     -19,    13,   -62,    42,    53,    48,   184,   374,   -62,   -62,
     -62,   284,   122,   374,   374,   374,   374,   -62,    59,    65,
     319,   -12,    15,   -62,   -62,   161,    34,    39,    45,    68,
      58,   -62,   -62,    12,    12,   -62,   -62,   374,   184,   -62,
      23,   374,   374,   374,   374,   374,   374,    65,    65,   366,
     202,    55,    65,    65,    54,    67,   -62,   114,    56,    79,
     128,   128,   128,   128,   128,   128,   -62,   -62,    90,   -62,
     -62,   -62,   -62,    84,   121,    97,   374,   -62,    82,    78,
     366,   -62,   -62,    -4,   103,   278,   -62,   184,   -62,    77,
     108,    65,   325,   -62,   366,   366,   -16,   -62,   139,   141,
     152,   137,   138,   169,    97,    97,   374,   -62,   159,   163,
     -62,   243,   -62,   -62
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -62,   -14,   -11,    81,   -17,   -47,   -61,    -5,   -10,    -6
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      33,    42,    27,    41,    28,    39,    40,    29,    81,    77,
      78,    50,    50,    77,    78,    38,    15,    16,    55,    53,
      60,    35,   130,    52,    37,    79,    63,    64,    65,    66,
      48,    59,    50,   101,    45,    46,    19,    20,    21,    22,
      77,    78,    36,    70,    43,    44,    45,    46,    77,    78,
      87,    54,    80,    56,    90,    91,    92,    93,    94,    95,
      50,    50,    47,    89,    57,    50,    50,    58,    98,   100,
      82,    96,    97,   137,   138,    83,   103,   104,    43,    44,
      45,    46,    84,    67,    38,    15,    16,    85,   105,   115,
     102,   106,    49,   108,   143,    68,    86,    69,   109,   118,
     110,    18,   122,   119,    50,    19,    20,    21,    22,    77,
      78,   113,    89,   128,   129,   126,   116,   117,   120,   139,
       2,   111,   124,     3,     4,     5,     6,     7,     8,     9,
     142,    10,    11,    12,    43,    44,    45,    46,    13,    14,
      15,    16,    43,    44,    45,    46,    77,    78,    43,    44,
      45,    46,   107,   125,    17,   131,    18,   132,   112,    62,
      19,    20,    21,    22,     3,     4,     5,     6,     7,     8,
       9,   133,    10,    11,    12,   134,   135,    30,    31,    13,
      14,    15,    16,    43,    44,    45,    46,     3,     4,     5,
       6,     7,     8,   136,   140,    32,    61,    18,   123,     0,
     141,    19,    20,    21,    22,     3,     4,     5,     6,     7,
       8,     9,     0,    10,    11,    12,     0,     0,    30,    31,
      13,    14,    15,    16,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,     0,    18,     0,
      99,     0,    19,    20,    21,    22,     3,     4,     5,     6,
       7,     8,     9,     0,    10,    11,    12,     0,     0,    30,
      31,    13,    14,    15,    16,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    32,     0,    18,
       0,     0,     0,    19,    20,    21,    22,     3,     4,     5,
       6,     7,     8,     9,     0,    10,    11,    12,    43,    44,
      45,    46,    13,    14,    15,    16,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   121,     0,    17,    61,
      18,     0,     0,     0,    19,    20,    21,    22,     3,     4,
       5,     6,     7,     8,     9,     0,    10,    11,    12,    43,
      44,    45,    46,    13,    14,    15,    16,    71,    72,    73,
      74,    75,    76,     0,     0,     0,     0,     0,     0,    17,
     127,    18,     0,     0,     0,    19,    20,    21,    22,     3,
       4,     5,     6,     7,     8,     9,     0,    10,    11,    12,
       0,     0,     0,     0,    13,    14,    15,    16,     0,     0,
       0,     0,     0,    38,    15,    16,     0,     0,     0,     0,
      17,     0,    18,     0,     0,     0,    19,    20,    21,    22,
      18,     0,     0,     0,    19,    20,    21,    22
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-62)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      11,    18,     7,    17,    36,    15,    16,    36,    55,    25,
      26,    28,    29,    25,    26,    19,    20,    21,    32,    38,
      37,    36,    38,    29,    24,    37,    43,    44,    45,    46,
      19,    36,    49,    80,    22,    23,    40,    41,    42,    43,
      25,    26,    36,    49,    20,    21,    22,    23,    25,    26,
      67,    38,    37,    11,    71,    72,    73,    74,    75,    76,
      77,    78,    38,    68,    11,    82,    83,    19,    79,    80,
      36,    77,    78,   134,   135,    36,    82,    83,    20,    21,
      22,    23,    37,    24,    19,    20,    21,    19,    34,   106,
      35,    24,    27,    37,   141,    36,    38,    38,    19,   110,
      10,    36,   116,   113,   121,    40,    41,    42,    43,    25,
      26,    14,   117,   124,   125,   121,    34,    39,    15,   136,
       0,    37,    45,     3,     4,     5,     6,     7,     8,     9,
     141,    11,    12,    13,    20,    21,    22,    23,    18,    19,
      20,    21,    20,    21,    22,    23,    25,    26,    20,    21,
      22,    23,    38,    45,    34,    16,    36,    16,    37,    37,
      40,    41,    42,    43,     3,     4,     5,     6,     7,     8,
       9,    19,    11,    12,    13,    38,    38,    16,    17,    18,
      19,    20,    21,    20,    21,    22,    23,     3,     4,     5,
       6,     7,     8,    24,    35,    34,    35,    36,   117,    -1,
      37,    40,    41,    42,    43,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    -1,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,    -1,
      38,    -1,    40,    41,    42,    43,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    13,    -1,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      -1,    -1,    -1,    40,    41,    42,    43,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    13,    20,    21,
      22,    23,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    34,    35,
      36,    -1,    -1,    -1,    40,    41,    42,    43,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    13,    20,
      21,    22,    23,    18,    19,    20,    21,    28,    29,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    -1,    -1,    -1,    40,    41,    42,    43,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    13,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    19,    20,    21,    -1,    -1,    -1,    -1,
      34,    -1,    36,    -1,    -1,    -1,    40,    41,    42,    43,
      36,    -1,    -1,    -1,    40,    41,    42,    43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    48,     0,     3,     4,     5,     6,     7,     8,     9,
      11,    12,    13,    18,    19,    20,    21,    34,    36,    40,
      41,    42,    43,    49,    51,    54,    55,    54,    36,    36,
      16,    17,    34,    49,    52,    36,    36,    24,    19,    55,
      55,    48,    51,    20,    21,    22,    23,    38,    19,    27,
      51,    56,    56,    38,    38,    48,    11,    11,    19,    54,
      51,    35,    37,    51,    51,    51,    51,    24,    36,    38,
      56,    28,    29,    30,    31,    32,    33,    25,    26,    37,
      37,    52,    36,    36,    37,    19,    38,    51,    50,    54,
      51,    51,    51,    51,    51,    51,    56,    56,    49,    38,
      49,    52,    35,    56,    56,    34,    24,    38,    37,    19,
      10,    37,    37,    14,    53,    51,    34,    39,    49,    55,
      15,    38,    48,    50,    45,    45,    56,    35,    49,    49,
      38,    16,    16,    19,    38,    38,    24,    53,    53,    51,
      35,    37,    49,    52
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
/* Line 1792 of yacc.c  */
#line 103 "yacc.y"
    {printf (" decleration \n");}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 104 "yacc.y"
    {printf( "initilization \n");}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 105 "yacc.y"
    {printf("a scope decleration \n");}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 106 "yacc.y"
    {printf(" a while loop with braces\n");}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 107 "yacc.y"
    {printf(" a while loop has one line \n");}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 108 "yacc.y"
    {printf(" a while loop has no lines \n");}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 110 "yacc.y"
    {printf("Do while loop \n");}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 111 "yacc.y"
    {printf("Do while loop \n");}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 113 "yacc.y"
    {printf("a switch case statement");}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 118 "yacc.y"
    {printf("Decleration \n");}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 119 "yacc.y"
    {printf("ASSignment decleration \n");}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 121 "yacc.y"
    {printf( "if without else \n");}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 122 "yacc.y"
    {printf("if else statment \n");}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 133 "yacc.y"
    {printf("multiplication statement \n");}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 134 "yacc.y"
    {printf("division statement");}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 135 "yacc.y"
    {printf("plus statement");}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 136 "yacc.y"
    {printf("minus statement");}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 137 "yacc.y"
    {printf(" argument experation \n");}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 153 "yacc.y"
    {printf("CAse statemnent");}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 169 "yacc.y"
    {printf("iDENtufier \n");}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 170 "yacc.y"
    {printf("integer value \n");}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 171 "yacc.y"
    {printf("float value \n");}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 172 "yacc.y"
    {printf("boolean value \n");}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 173 "yacc.y"
    {printf("char value \n");}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 182 "yacc.y"
    {printf(" greater than statement \n");}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 183 "yacc.y"
    {printf(" lesser than statement \n");}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 184 "yacc.y"
    {printf(" equal statement \n");}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 185 "yacc.y"
    {printf(" not equal statement \n");}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 186 "yacc.y"
    {printf(" less equal than statement \n");}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 187 "yacc.y"
    {printf(" greater equal than statement \n");}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 188 "yacc.y"
    {printf(" AND statement \n");}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 189 "yacc.y"
    {printf(" OR statement \n");}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 190 "yacc.y"
    {printf(" LOGICAL NOT statement \n");}
    break;


/* Line 1792 of yacc.c  */
#line 1810 "y.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 194 "yacc.y"


void yyerror(char *s) {
    fprintf(stdout, "%s\n", s);
}


int main (void)
{

test = fopen("testfile.txt","r");
if(!yyparse())

{
printf("\n Parsing complete \n");
}
else
{
printf("\n Parsing faild \n");
}
fclose(test);
return 0;

}