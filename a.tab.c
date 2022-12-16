
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "a.y"

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
 


/* Line 189 of yacc.c  */
#line 136 "a.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     FLOAT = 258,
     INT = 259,
     COMMA = 260,
     ASSIGN = 261,
     PRINT = 262,
     RAB = 263,
     LAB = 264,
     SCAN = 265,
     INC = 266,
     DEC = 267,
     IF = 268,
     GT = 269,
     LT = 270,
     EQU = 271,
     LSBRACKET = 272,
     RSBRACKET = 273,
     ELIF = 274,
     ELSE = 275,
     WHILE = 276,
     FOR = 277,
     STMNT1 = 278,
     DIV = 279,
     MUL = 280,
     SUB = 281,
     ADD = 282,
     FL = 283,
     ROOT = 284,
     NUM = 285,
     ID = 286,
     CHAR = 287,
     END = 288
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 64 "a.y"

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



/* Line 214 of yacc.c  */
#line 226 "a.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 238 "a.tab.c"

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
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   137

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  50
/* YYNRULES -- Number of states.  */
#define YYNSTATES  138

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

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
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,     7,    11,    15,    19,    24,    29,
      34,    40,    42,    47,    51,    55,    61,    69,    88,    96,
     113,   114,   121,   127,   129,   131,   134,   137,   141,   145,
     149,   150,   157,   163,   165,   167,   171,   173,   177,   179,
     183,   187,   189,   193,   195,   197,   201,   203,   207,   209,
     213
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      35,     0,    -1,    36,    35,    -1,    -1,     4,    45,    33,
      -1,     3,    46,    33,    -1,    32,    47,    33,    -1,    31,
       6,    30,    33,    -1,    31,     6,    28,    33,    -1,    31,
       6,    32,    33,    -1,     7,     9,    31,     8,    33,    -1,
      10,    -1,    31,     6,    42,    33,    -1,    31,    11,    33,
      -1,    31,    12,    33,    -1,    29,     9,    30,     8,    33,
      -1,    13,     9,    39,     8,    17,    40,    18,    -1,    13,
       9,    39,     8,    17,    40,    18,    19,     9,    39,     8,
      17,    40,    18,    20,    17,    40,    18,    -1,    21,     9,
      30,     8,    17,    40,    18,    -1,    22,     9,    31,     6,
      30,    33,    31,    14,    30,    33,    31,    38,     8,    17,
      37,    18,    -1,    -1,    37,     7,     9,    31,     8,    33,
      -1,    37,    31,     6,    42,    33,    -1,    11,    -1,    12,
      -1,    27,    30,    -1,    26,    30,    -1,    41,    14,    41,
      -1,    41,    15,    41,    -1,    41,    16,    41,    -1,    -1,
      40,     7,     9,    31,     8,    33,    -1,    40,    31,     6,
      42,    33,    -1,    30,    -1,    31,    -1,    42,    27,    43,
      -1,    43,    -1,    42,    26,    43,    -1,    44,    -1,    43,
      25,    44,    -1,    43,    24,    44,    -1,    30,    -1,     9,
      42,     8,    -1,    31,    -1,    28,    -1,    45,     5,    31,
      -1,    31,    -1,    46,     5,    31,    -1,    31,    -1,    47,
       5,    31,    -1,    31,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    97,    97,    98,   100,   101,   102,   103,   124,   135,
     147,   167,   171,   202,   221,   240,   243,   287,   390,   400,
     449,   450,   474,   477,   482,   486,   491,   498,   499,   500,
     502,   503,   521,   563,   568,   575,   601,   613,   640,   652,
     678,   705,   709,   721,   733,   739,   758,   776,   810,   846,
     884
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FLOAT", "INT", "COMMA", "ASSIGN",
  "PRINT", "RAB", "LAB", "SCAN", "INC", "DEC", "IF", "GT", "LT", "EQU",
  "LSBRACKET", "RSBRACKET", "ELIF", "ELSE", "WHILE", "FOR", "STMNT1",
  "DIV", "MUL", "SUB", "ADD", "FL", "ROOT", "NUM", "ID", "CHAR", "END",
  "$accept", "PROGRAM", "STATEMENT", "F", "OP1", "LOGICAL_OP", "STMNT",
  "EXPR_1", "EXPR_i", "TERM_i", "FACTOR_i", "ID1", "ID2", "ID3", 0
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
     285,   286,   287,   288
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    34,    35,    35,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      37,    37,    37,    38,    38,    38,    38,    39,    39,    39,
      40,    40,    40,    41,    41,    42,    42,    42,    43,    43,
      43,    44,    44,    44,    44,    45,    45,    46,    46,    47,
      47
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     3,     3,     3,     4,     4,     4,
       5,     1,     4,     3,     3,     5,     7,    18,     7,    16,
       0,     6,     5,     1,     1,     2,     2,     3,     3,     3,
       0,     6,     5,     1,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     1,     1,     3,     1,     3,     1,     3,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     0,    11,     0,     0,     0,     0,     0,
       0,     0,     3,    48,     0,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     1,     2,     0,
       5,     0,     4,     0,    33,    34,     0,     0,     0,     0,
       0,     0,    44,    41,    43,     0,     0,    36,    38,    13,
      14,     0,     6,    47,    45,     0,     0,     0,     0,     0,
       0,     0,     0,    44,    41,     0,     8,     7,     9,     0,
       0,    12,     0,     0,    49,    10,    30,    27,    28,    29,
      30,     0,    15,    42,    37,    35,    40,    39,     0,     0,
       0,     0,    16,     0,    18,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,     0,    31,     0,
       0,    30,    23,    24,     0,     0,     0,     0,    26,    25,
       0,     0,    20,     0,     0,    30,     0,    19,     0,     0,
       0,     0,    17,     0,     0,     0,    22,    21
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    11,    12,   124,   116,    36,    88,    37,    46,    47,
      48,    16,    14,    26
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -80
static const yytype_int8 yypact[] =
{
      -1,   -27,   -12,    45,   -80,    53,    61,    71,    74,    65,
      -8,    84,    -1,   -80,     0,   -80,     2,    57,    28,    55,
      58,    62,    13,    60,    63,   -80,     3,   -80,   -80,    64,
     -80,    66,   -80,    83,   -80,   -80,    86,    36,    90,    93,
      92,    25,    68,    69,   -80,    70,   -16,    54,   -80,   -80,
     -80,    73,   -80,   -80,   -80,    72,    89,    28,    28,    28,
      91,    77,    76,   -80,   -80,    39,   -80,   -80,   -80,    25,
      25,   -80,    25,    25,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,    78,   -80,   -80,    54,    54,   -80,   -80,     6,     7,
      79,   103,    94,   108,   -80,   101,    85,   109,    25,    87,
     111,    28,    34,    88,    95,   112,   -80,    96,   -80,   105,
      37,   -80,   -80,   -80,    99,   100,   115,     8,   -80,   -80,
     107,   106,   -80,   114,     9,   -80,   116,   -80,   126,    11,
     102,    25,   -80,   127,    42,   104,   -80,   -80
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -80,   122,   -80,   -80,   -80,    35,   -79,    15,   -41,    12,
      14,   -80,   -80,   -80
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      65,    89,     1,     2,    13,    29,     3,    31,    51,     4,
      69,    70,     5,    91,    91,    91,   126,    71,    91,    15,
       6,     7,    41,    25,    92,    94,   121,   127,     8,   132,
       9,    10,   117,    30,    41,    32,    52,    93,    93,    93,
     128,    42,    93,    43,    44,    45,   129,    83,   112,   113,
      57,    58,    59,    63,    17,    64,    44,   102,    34,    35,
      69,    70,    18,   114,   115,    69,    70,   106,    69,    70,
      19,    22,    77,    78,    79,   136,    23,    24,    72,    73,
      20,    84,    85,    21,    27,    38,    86,    87,    33,    39,
     134,    55,    40,    49,    56,    53,    50,    54,    60,    61,
      62,    66,    67,    68,    74,    75,    76,    81,    80,    82,
      95,    90,    96,    97,    98,    99,   100,   103,   101,   104,
     109,   107,   111,   120,   122,   130,   123,   110,   108,   118,
     119,   125,   131,   133,    28,   135,   105,   137
};

static const yytype_uint8 yycheck[] =
{
      41,    80,     3,     4,    31,     5,     7,     5,     5,    10,
      26,    27,    13,     7,     7,     7,     7,    33,     7,    31,
      21,    22,     9,    31,    18,    18,    18,    18,    29,    18,
      31,    32,   111,    33,     9,    33,    33,    31,    31,    31,
      31,    28,    31,    30,    31,    32,   125,     8,    11,    12,
      14,    15,    16,    28,     9,    30,    31,    98,    30,    31,
      26,    27,     9,    26,    27,    26,    27,    33,    26,    27,
       9,     6,    57,    58,    59,    33,    11,    12,    24,    25,
       9,    69,    70,     9,     0,    30,    72,    73,    31,    31,
     131,     8,    30,    33,     8,    31,    33,    31,     8,     6,
       8,    33,    33,    33,    31,    33,    17,    30,    17,    33,
      31,    33,     9,    19,     6,    14,    31,    30,     9,     8,
       8,    33,    17,     8,    17,     9,    20,    31,    33,    30,
      30,    17,     6,    31,    12,     8,   101,    33
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     7,    10,    13,    21,    22,    29,    31,
      32,    35,    36,    31,    46,    31,    45,     9,     9,     9,
       9,     9,     6,    11,    12,    31,    47,     0,    35,     5,
      33,     5,    33,    31,    30,    31,    39,    41,    30,    31,
      30,     9,    28,    30,    31,    32,    42,    43,    44,    33,
      33,     5,    33,    31,    31,     8,     8,    14,    15,    16,
       8,     6,     8,    28,    30,    42,    33,    33,    33,    26,
      27,    33,    24,    25,    31,    33,    17,    41,    41,    41,
      17,    30,    33,     8,    43,    43,    44,    44,    40,    40,
      33,     7,    18,    31,    18,    31,     9,    19,     6,    14,
      31,     9,    42,    30,     8,    39,    33,    33,    33,     8,
      31,    17,    11,    12,    26,    27,    38,    40,    30,    30,
       8,    18,    17,    20,    37,    17,     7,    18,    31,    40,
       9,     6,    18,    31,    42,     8,    33,    33
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
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

/* Prevent warnings from -Wmissing-prototypes.  */
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
        case 7:

/* Line 1455 of yacc.c  */
#line 103 "a.y"
    {
								f_index = -1;
								
								int t;
								
								if (find_i(store_int,(yyvsp[(1) - (4)].string),in_int) == 1){
									store_int[f_index].value = (yyvsp[(3) - (4)].number);
									store_int[f_index].valid = 1;
								}
								
								
								else if(find_c(store_char,(yyvsp[(1) - (4)].string),c) == 1)
								{
									store_char[f_index].value = (yyvsp[(3) - (4)].number);
								}
								else
								{
									printf("Variable Not Declared");
								}							

							;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 124 "a.y"
    {
								f_index = -1;
								int t;
								if(find_f(store_float,(yyvsp[(1) - (4)].string),f) == 1)
								{
									store_float[f_index].value = (yyvsp[(3) - (4)].f_number);
									store_float[f_index].valid = 1;
									
								}

							;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 135 "a.y"
    {
								f_index = -1;
								int t;
								if(find_c(store_char,(yyvsp[(1) - (4)].string),c) == 1)
								{
									store_char[f_index].value = (yyvsp[(3) - (4)].string);
									store_char[f_index].valid = 1;
									
								}


							;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 147 "a.y"
    {
								if (find_c(store_char,(yyvsp[(3) - (5)].string),c) == 1){
									int i=0;
									while(store_char[f_index].value[i]!= '\0') 
									{
										printf("%c",store_char[f_index].value[i]);
										i++;
									}
								}
								else if (find_i(store_int,(yyvsp[(3) - (5)].string),in_int) == 1){
									printf("\nValue of var %d",store_int[f_index].value);
								}
								else if (find_f(store_float,(yyvsp[(3) - (5)].string),f) == 1){
									printf("\nValue of var %f",store_float[f_index].value);
								}
								else{
									printf("Variable Is not Declared");
								}

							;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 167 "a.y"
    {
								

							;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 171 "a.y"
    {
									
									if(find_i(store_int,(yyvsp[(1) - (4)].string),in_int)==1)
									{
										if((yyvsp[(3) - (4)].sup).datatype == 1)
										{
											store_int[f_index].value=(yyvsp[(3) - (4)].sup).num;
											store_int[f_index].valid=1;
										}
										else
										{
											store_int[f_index].value=(int)(yyvsp[(3) - (4)].sup).f_num;
											store_int[f_index].valid=1;
										}
										
									}
									else if(find_f(store_float,(yyvsp[(1) - (4)].string),f)==1)
									{
										if((yyvsp[(3) - (4)].sup).datatype == 1)
										{
											store_float[f_index].value=(float)(yyvsp[(3) - (4)].sup).num;
											store_float[f_index].valid=1;
										}
										else
										{
											store_float[f_index].value=(yyvsp[(3) - (4)].sup).f_num;
											store_float[f_index].valid=1;
										}
										
									}
								;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 202 "a.y"
    {
									if(find_i(store_int,(yyvsp[(1) - (3)].string),in_int)==1)

									{
										store_int[f_index].value+=1;
										store_int[f_index].valid=1;
									}
									else if(find_f(store_float,(yyvsp[(1) - (3)].string),f)==1)

									{
										store_float[f_index].value+=1;
										store_float[f_index].valid=1;
									}
									else
									{
										printf("Variable is not Declared");
									}

								;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 221 "a.y"
    {
									if(find_i(store_int,(yyvsp[(1) - (3)].string),in_int)==1)

									{
										store_int[f_index].value-=1;
										store_int[f_index].valid=1;
									}
									else if(find_f(store_float,(yyvsp[(1) - (3)].string),f)==1)

									{
										store_float[f_index].value-=1;
										store_float[f_index].valid=1;
									}
									else
									{
										printf("Variable is not Declared");
									}

								;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 240 "a.y"
    {
											printf("%f",sqrt((yyvsp[(3) - (5)].number)));
								;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 243 "a.y"
    {
									if((yyvsp[(3) - (7)].next).num == 1)
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


								;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 287 "a.y"
    {
									if((yyvsp[(3) - (18)].next).num == 1)
									{
										int i;

										if((yyvsp[(6) - (18)].sup).operation == 1 )
											{
												if((yyvsp[(6) - (18)].sup).datatype = 1)
													printf("%d",(yyvsp[(6) - (18)].sup).num);
												else if((yyvsp[(6) - (18)].sup).datatype == 2)
												{
													printf("%f",(yyvsp[(6) - (18)].sup).f_num);
												}
											}
										else if ((yyvsp[(6) - (18)].sup).operation == 2)
										{
											if((yyvsp[(6) - (18)].sup).indx	!= -1)
											{
												if((yyvsp[(6) - (18)].sup).datatype == 1)
												{
													store_int[(yyvsp[(6) - (18)].sup).indx].value=(int)(yyvsp[(6) - (18)].sup).num;
													store_int[(yyvsp[(6) - (18)].sup).indx].valid=1;
												}
												else if((yyvsp[(6) - (18)].sup).datatype==2)
												{
													store_float[(yyvsp[(6) - (18)].sup).indx].value=(yyvsp[(6) - (18)].sup).f_num;
													store_float[(yyvsp[(6) - (18)].sup).indx].valid=1;
												}											
											}
											else
											{
												printf("Variable is not Declared");
											}

										}

									}
									else if((yyvsp[(10) - (18)].next).num == 1)
									{
										if((yyvsp[(13) - (18)].sup).operation == 1 )
											{
												if((yyvsp[(13) - (18)].sup).datatype = 1)
													printf("%d",(yyvsp[(13) - (18)].sup).num);
												else if((yyvsp[(13) - (18)].sup).datatype = 2)
													printf("%f",(yyvsp[(13) - (18)].sup).f_num);
											}
										else if ((yyvsp[(13) - (18)].sup).operation == 2)
										{
											if((yyvsp[(13) - (18)].sup).indx	!= -1)
											{
												if((yyvsp[(13) - (18)].sup).datatype == 1)
												{
													store_int[(yyvsp[(13) - (18)].sup).indx].value=(int)(yyvsp[(13) - (18)].sup).num;
													store_int[(yyvsp[(13) - (18)].sup).indx].valid=1;
												}
												else if((yyvsp[(13) - (18)].sup).datatype==2)
												{
													store_float[(yyvsp[(13) - (18)].sup).indx].value=(yyvsp[(13) - (18)].sup).f_num;
													store_float[(yyvsp[(13) - (18)].sup).indx].valid=1;
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
										if((yyvsp[(17) - (18)].sup).operation == 1 )
											{
												if((yyvsp[(17) - (18)].sup).datatype = 1)
													printf("%d",(yyvsp[(17) - (18)].sup).num);
												else if((yyvsp[(17) - (18)].sup).datatype = 2)
													printf("%f",(yyvsp[(17) - (18)].sup).f_num);
											}
										else if ((yyvsp[(17) - (18)].sup).operation == 2)
										{
											if((yyvsp[(17) - (18)].sup).indx	!= -1)
											{
												if((yyvsp[(13) - (18)].sup).datatype == 1)
												{
													store_int[(yyvsp[(17) - (18)].sup).indx].value=(int)(yyvsp[(17) - (18)].sup).num;
													store_int[(yyvsp[(17) - (18)].sup).indx].valid=1;
												}
												else if((yyvsp[(17) - (18)].sup).datatype==2)
												{
													store_float[(yyvsp[(17) - (18)].sup).indx].value=(yyvsp[(17) - (18)].sup).f_num;
													store_float[(yyvsp[(17) - (18)].sup).indx].valid=1;
												}
											
											}
											else
											{
												printf("Variable is not Declared");
											}

										}

									}
								;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 390 "a.y"
    {	int i=0;
																if((yyvsp[(6) - (7)].sup).operation = 1)
																{
																	while(i<(yyvsp[(3) - (7)].number))
																	{	
																		//printf("HI\n");
																		i++;
																	}
																}
															;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 400 "a.y"
    {
							
						
							if(strcmp((yyvsp[(3) - (16)].string),(yyvsp[(7) - (16)].string))==0 )
							{
								
								if(strcmp((yyvsp[(3) - (16)].string),(yyvsp[(11) - (16)].string))==0)
								{
									
									find_i(store_int,(yyvsp[(3) - (16)].string),in_int);
									int index1= f_index;
									for(store_int[index1].value=(yyvsp[(5) - (16)].number);store_int[index1].value<(yyvsp[(9) - (16)].number);store_int[index1].value=store_int[index1].value+(yyvsp[(12) - (16)].sup).num)
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
				;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 450 "a.y"
    {
								F_indx[for_id_index].operation=1;

							
								if (find_i(store_int,(yyvsp[(4) - (6)].string),in_int) == 1)
								{
									
									F_indx[for_id_index].datatype=1;
									F_indx[for_id_index].index = f_index;
								}
								else if (find_c(store_char,(yyvsp[(4) - (6)].string),c) == 1){
									
										
										F_indx[for_id_index].datatype=3;
										F_indx[for_id_index].index = f_index;
										
									
								}
								else if (find_f(store_float,(yyvsp[(4) - (6)].string),f) == 1){
									F_indx[for_id_index].datatype=2;
									F_indx[for_id_index].index = f_index;
								}
								strcpy(F_indx[for_id_index++].name,(yyvsp[(4) - (6)].string));							
							;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 474 "a.y"
    {printf("%d", (yyvsp[(4) - (5)].sup).num);;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 477 "a.y"
    {
						(yyval.sup).num = 1;
						(yyval.sup).operation = 1;
	
					;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 482 "a.y"
    {
						(yyval.sup).num = 1;
						(yyval.sup).operation = 2;
					;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 486 "a.y"
    {
						(yyval.sup).num = (yyvsp[(2) - (2)].number);
						(yyval.sup).operation = 1;
					
					;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 491 "a.y"
    {
						(yyval.sup).num = (yyvsp[(2) - (2)].number);
						(yyval.sup).operation = 2;
					;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 498 "a.y"
    {if((yyvsp[(1) - (3)].number)>(yyvsp[(3) - (3)].number)) (yyval.next).num=1;else (yyval.next).num=0;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 499 "a.y"
    {if((yyvsp[(1) - (3)].number)<(yyvsp[(3) - (3)].number)) (yyval.next).num=1;else (yyval.next).num=0;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 500 "a.y"
    {if((yyvsp[(1) - (3)].number)==(yyvsp[(3) - (3)].number)) (yyval.next).num=1;else (yyval.next).num=0;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 503 "a.y"
    {
									if (find_i(store_int,(yyvsp[(4) - (6)].string),in_int) == 1){
											arr_if[index_if].num = store_int[f_index].value;
											arr_if[index_if].indx = f_index;
											arr_if[index_if].datatype = 1;
											arr_if[index_if++].operation = 1;
											
										}
									else if (find_f(store_float,(yyvsp[(4) - (6)].string),f) == 1){
											arr_if[index_if].f_num = store_float[f_index].value;
											arr_if[index_if].indx = f_index;
											arr_if[index_if].datatype = 2;
											arr_if[index_if++].operation = 1;
											
										}
										//printf("Variable Is not Declared 1");
									
								;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 521 "a.y"
    {
									f_index = -1;
									if((yyvsp[(4) - (5)].sup).datatype==1)
									{
										
										arr_if[index_if].operation = 2;
										if (find_i(store_int,(yyvsp[(2) - (5)].string),in_int) == 1){
											arr_if[index_if].indx = f_index;
											arr_if[index_if].num = (yyvsp[(4) - (5)].sup).num;
											arr_if[index_if].datatype=1;
											index_if++;
										}
										else if(find_f(store_float,(yyvsp[(2) - (5)].string),f) == 1){
											arr_if[index_if].indx = f_index;
											arr_if[index_if].f_num = (float)(yyvsp[(4) - (5)].sup).num;
											arr_if[index_if].datatype=2;
											index_if++;
										}

									}
									else if((yyvsp[(4) - (5)].sup).datatype == 2)
									{

										arr_if[index_if].operation = 2;
										if (find_i(store_int,(yyvsp[(2) - (5)].string),in_int) == 1){
											arr_if[index_if].indx = f_index;
											arr_if[index_if].num =(int)(yyvsp[(4) - (5)].sup).f_num;
											arr_if[index_if].datatype=1;
											index_if++;
										}
										else if(find_f(store_float,(yyvsp[(2) - (5)].string),f) == 1){
											arr_if[index_if].indx = f_index;
											arr_if[index_if].f_num =	(yyvsp[(4) - (5)].sup).f_num;
											arr_if[index_if].datatype=2;
											index_if++;
										}
										
									}
									
								;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 563 "a.y"
    {
									(yyval.number)=(yyvsp[(1) - (1)].number);

								;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 568 "a.y"
    {
									if(find_i(store_int,(yyvsp[(1) - (1)].string),in_int)==1)
									{
										(yyval.number)=store_int[f_index].value;
									}
								;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 575 "a.y"
    {
								if((yyvsp[(1) - (3)].sup).datatype == 1 && (yyvsp[(3) - (3)].sup).datatype == 1)
								{
									(yyval.sup).num= (yyvsp[(1) - (3)].sup).num+(yyvsp[(3) - (3)].sup).num;
									(yyval.sup).datatype = 1;
								}
								else if((yyvsp[(1) - (3)].sup).datatype == 1 && (yyvsp[(3) - (3)].sup).datatype == 2)
								{
									(yyval.sup).f_num= (float)(yyvsp[(1) - (3)].sup).num + (yyvsp[(3) - (3)].sup).f_num;
									(yyval.sup).datatype = 2;

								}
								else if((yyvsp[(1) - (3)].sup).datatype == 2 && (yyvsp[(3) - (3)].sup).datatype == 1)
								{
									(yyval.sup).f_num= (float)(yyvsp[(3) - (3)].sup).num + (yyvsp[(1) - (3)].sup).f_num;
									(yyval.sup).datatype = 2;

								}
								else if((yyvsp[(1) - (3)].sup).datatype == 2 && (yyvsp[(3) - (3)].sup).datatype == 2)
								{
									(yyval.sup).f_num= (yyvsp[(3) - (3)].sup).f_num + (yyvsp[(1) - (3)].sup).f_num;
									(yyval.sup).datatype = 2;

								}
								
							;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 601 "a.y"
    {
								if((yyvsp[(1) - (1)].sup).datatype==1)
								{
									(yyval.sup).num = (yyvsp[(1) - (1)].sup).num;
									(yyval.sup).datatype = 1;
								}
								else
								{
									(yyval.sup).f_num = (yyvsp[(1) - (1)].sup).f_num;
									(yyval.sup).datatype = 2;
								}
							;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 613 "a.y"
    {
								if((yyvsp[(1) - (3)].sup).datatype == 1 && (yyvsp[(3) - (3)].sup).datatype == 1)
								{
									(yyval.sup).num= (yyvsp[(1) - (3)].sup).num - (yyvsp[(3) - (3)].sup).num;
									(yyval.sup).datatype = 1;
								}
								else if((yyvsp[(1) - (3)].sup).datatype == 1 && (yyvsp[(3) - (3)].sup).datatype == 2)
								{
									(yyval.sup).f_num= (float)(yyvsp[(1) - (3)].sup).num - (yyvsp[(3) - (3)].sup).f_num;
									(yyval.sup).datatype = 2;

								}
								else if((yyvsp[(1) - (3)].sup).datatype == 2 && (yyvsp[(3) - (3)].sup).datatype == 1)
								{
									(yyval.sup).f_num=  (yyvsp[(1) - (3)].sup).f_num -(float)(yyvsp[(3) - (3)].sup).num;
									(yyval.sup).datatype = 2;

								}
								else if((yyvsp[(1) - (3)].sup).datatype == 2 && (yyvsp[(3) - (3)].sup).datatype == 2)
								{
									(yyval.sup).f_num= (yyvsp[(3) - (3)].sup).f_num - (yyvsp[(1) - (3)].sup).f_num;
									(yyval.sup).datatype = 2;

								}
								
							;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 640 "a.y"
    {
								if((yyvsp[(1) - (1)].sup).datatype==1)
								{
									(yyval.sup).num = (yyvsp[(1) - (1)].sup).num;
									(yyval.sup).datatype = 1;
								}
								else
								{
									(yyval.sup).f_num = (yyvsp[(1) - (1)].sup).f_num;
									(yyval.sup).datatype = 2;
								}
							;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 652 "a.y"
    {
								if((yyvsp[(1) - (3)].sup).datatype == 1 && (yyvsp[(3) - (3)].sup).datatype == 1)
								{
									(yyval.sup).num= (yyvsp[(1) - (3)].sup).num*(yyvsp[(3) - (3)].sup).num;
									(yyval.sup).datatype = 1;
								}
								else if((yyvsp[(1) - (3)].sup).datatype == 1 && (yyvsp[(3) - (3)].sup).datatype == 2)
								{
									(yyval.sup).f_num= (float)(yyvsp[(1) - (3)].sup).num * (yyvsp[(3) - (3)].sup).f_num;
									(yyval.sup).datatype = 2;

								}
								else if((yyvsp[(1) - (3)].sup).datatype == 2 && (yyvsp[(3) - (3)].sup).datatype == 1)
								{
									(yyval.sup).f_num= (float)(yyvsp[(3) - (3)].sup).num * (yyvsp[(1) - (3)].sup).f_num;
									(yyval.sup).datatype = 2;

								}
								else if((yyvsp[(1) - (3)].sup).datatype == 2 && (yyvsp[(3) - (3)].sup).datatype == 2)
								{
									(yyval.sup).f_num= (yyvsp[(3) - (3)].sup).f_num * (yyvsp[(1) - (3)].sup).f_num;
									(yyval.sup).datatype = 2;

								}
								
							;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 678 "a.y"
    {
								if((yyvsp[(1) - (3)].sup).datatype == 1 && (yyvsp[(3) - (3)].sup).datatype == 1)
								{
									(yyval.sup).num= (yyvsp[(1) - (3)].sup).num/(yyvsp[(3) - (3)].sup).num;
									(yyval.sup).datatype = 1;
								}
								else if((yyvsp[(1) - (3)].sup).datatype == 1 && (yyvsp[(3) - (3)].sup).datatype == 2)
								{
									(yyval.sup).f_num= (float)(yyvsp[(1) - (3)].sup).num / (yyvsp[(3) - (3)].sup).f_num;
									(yyval.sup).datatype = 2;

								}
								else if((yyvsp[(1) - (3)].sup).datatype == 2 && (yyvsp[(3) - (3)].sup).datatype == 1)
								{
									(yyval.sup).f_num= (float)(yyvsp[(3) - (3)].sup).num / (yyvsp[(1) - (3)].sup).f_num;
									(yyval.sup).datatype = 2;

								}
								else if((yyvsp[(1) - (3)].sup).datatype == 2 && (yyvsp[(3) - (3)].sup).datatype == 2)
								{
									(yyval.sup).f_num= (yyvsp[(3) - (3)].sup).f_num / (yyvsp[(1) - (3)].sup).f_num;
									(yyval.sup).datatype = 2;

								}
								
							;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 705 "a.y"
    {	
	  						(yyval.sup).num = (yyvsp[(1) - (1)].number);
	  						(yyval.sup).datatype = 1;
						;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 709 "a.y"
    {
	  							if((yyvsp[(2) - (3)].sup).datatype == 1)
	  							{
	  								(yyval.sup).num = (yyvsp[(2) - (3)].sup).num;
	  								(yyval.sup).datatype = 1;
	  							}
	  							else
	  							{
	  								(yyval.sup).f_num = (yyvsp[(2) - (3)].sup).f_num;
	  								(yyval.sup).datatype = 2;
	  							}
	  						;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 721 "a.y"
    {
	  						if (find_i(store_int,(yyvsp[(1) - (1)].string),in_int) == 1)
	  						{
	  							(yyval.sup).num=store_int[f_index].value;
	  							(yyval.sup).datatype = 1;
	  						}
	  						else if (find_f(store_float,(yyvsp[(1) - (1)].string),f) == 1)
	  						{
	  							(yyval.sup).f_num=store_float[f_index].value;
	  							(yyval.sup).datatype = 2;
	  						}
	  					;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 733 "a.y"
    {
	  						(yyval.sup).f_num = (yyvsp[(1) - (1)].f_number);
	  						(yyval.sup).datatype = 2;

	  					;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 739 "a.y"
    {
						int i=0;
						for(i=0;i<in_int;i++)
						{
							if(strcmp(store_int[i].name,(yyvsp[(3) - (3)].string))==0)
								break;
						}
						if(i==in_int)
						{
							store_int[in_int++].name=(yyvsp[(3) - (3)].string);
						}
						else
						{
							printf("ALREADY DECLARED\n");
						}


											
					;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 758 "a.y"
    {
						int error=0,i=0;
						for(i=0;i<in_int;i++)
						{
							if(strcmp(store_int[i].name,(yyvsp[(1) - (1)].string))==0)
								break;
						}
						if(i==in_int)
						{
							store_int[in_int++].name=(yyvsp[(1) - (1)].string);
						}
						else
						{
							printf("ALREADY DECLARED\n");
						}
												
					;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 776 "a.y"
    {
						int i=0;
						for(i=0;i<f;i++)
						{
							if(strcmp(store_float[i].name,(yyvsp[(3) - (3)].string))==0)
								break;
						}
						if(i==f)
						{
							int error=0;
							for(i=0;i<in_int;i++)
							{
								if(strcmp(store_int[i].name,(yyvsp[(3) - (3)].string))==0)
									{error=1;break;}
							}
							for(i=0;i<c;i++)
							{
								if(strcmp(store_char[i].name,(yyvsp[(3) - (3)].string))==0)
									{error=1;break;}
							}
							if(error==0)
							{
								store_float[f++].name=(yyvsp[(3) - (3)].string);
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
					;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 810 "a.y"
    {	int i=0;
					for(i=0;i<f;i++)
					{
						if(strcmp(store_float[i].name,(yyvsp[(1) - (1)].string))==0)
								break;
					}
					if(i==f)
					{
						int error=0;

						for(i=0;i<in_int;i++)
						{
							if(strcmp(store_int[i].name,(yyvsp[(1) - (1)].string))==0)
								{error=1;break;}
						}
						for(i=0;i<c;i++)
						{
							if(strcmp(store_char[i].name,(yyvsp[(1) - (1)].string))==0)
								{error=1;break;}
						}					

						if(error==0)
						{
							store_float[f++].name=(yyvsp[(1) - (1)].string);
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
				;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 846 "a.y"
    {
						int i=0;
						for(i=0;i<c;i++)
						{
							if(strcmp(store_char[i].name,(yyvsp[(3) - (3)].string))==0)
								break;
						}
						if(i==c)
						{
							int error=0;
							for(i=0;i<in_int;i++)
							{
								if(strcmp(store_int[i].name,(yyvsp[(3) - (3)].string))==0)
									{error=1;break;}
							}
							for(i=0;i<c;i++)
							{
								if(strcmp(store_float[i].name,(yyvsp[(3) - (3)].string))==0)
									{error=1;break;}
							}
							if(error==0)
							{
								store_char[c++].name=(yyvsp[(3) - (3)].string);
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


											
					;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 884 "a.y"
    {	int i=0;
					for(i=0;i<c;i++)
					{
						if(strcmp(store_char[i].name,(yyvsp[(1) - (1)].string))==0)
								break;
					}
					if(i==c)
					{
						int error=0;

						for(i=0;i<in_int;i++)
						{
							if(strcmp(store_int[i].name,(yyvsp[(1) - (1)].string))==0)
								{error=1;break;}
						}
						for(i=0;i<f;i++)
						{
							if(strcmp(store_float[i].name,(yyvsp[(1) - (1)].string))==0)
								{error=1;break;}
						}					

						if(error==0)
						{
							store_char[c++].name=(yyvsp[(1) - (1)].string);
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

					
				;}
    break;



/* Line 1455 of yacc.c  */
#line 2584 "a.tab.c"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
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



/* Line 1675 of yacc.c  */
#line 922 "a.y"


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

