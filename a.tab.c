
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
		}arr_if[100],var_switch,func[100];
int index_if;
int is_executed;
int index_func;

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
#line 139 "a.tab.c"

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
     SWITCH = 279,
     CASE = 280,
     DEFAULT = 281,
     MAIN = 282,
     FUNC = 283,
     INCLUDE = 284,
     CALL = 285,
     DIV = 286,
     MUL = 287,
     SUB = 288,
     ADD = 289,
     FL = 290,
     ROOT = 291,
     NUM = 292,
     ID = 293,
     CHAR = 294,
     CHAR1 = 295,
     END = 296
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 67 "a.y"

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
#line 237 "a.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 249 "a.tab.c"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   195

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNRULES -- Number of states.  */
#define YYNSTATES  195

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    10,    13,    14,    18,    22,    26,    31,
      36,    41,    47,    49,    54,    58,    62,    68,    70,    72,
      74,    76,    78,    86,   105,   113,   130,   132,   134,   136,
     137,   144,   150,   152,   154,   157,   160,   164,   168,   172,
     173,   180,   186,   188,   190,   194,   196,   200,   202,   206,
     210,   212,   216,   218,   220,   224,   226,   230,   232,   236,
     238,   244,   250,   251,   260,   266,   271,   273,   275,   277,
     279,   288
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,    29,     4,    27,    17,    44,    18,    -1,
      45,    44,    -1,    -1,     4,    57,    41,    -1,     3,    58,
      41,    -1,    39,    59,    41,    -1,    38,     6,    37,    41,
      -1,    38,     6,    35,    41,    -1,    38,     6,    40,    41,
      -1,     7,     9,    38,     8,    41,    -1,    10,    -1,    38,
       6,    54,    41,    -1,    38,    11,    41,    -1,    38,    12,
      41,    -1,    36,     9,    37,     8,    41,    -1,    46,    -1,
      47,    -1,    60,    -1,    66,    -1,    67,    -1,    13,     9,
      51,     8,    17,    52,    18,    -1,    13,     9,    51,     8,
      17,    52,    18,    19,     9,    51,     8,    17,    52,    18,
      20,    17,    52,    18,    -1,    21,     9,    37,     8,    17,
      63,    18,    -1,    22,     9,    38,     6,    37,    41,    38,
      48,    37,    41,    38,    50,     8,    17,    49,    18,    -1,
      14,    -1,    15,    -1,    16,    -1,    -1,    49,     7,     9,
      38,     8,    41,    -1,    49,    38,     6,    54,    41,    -1,
      11,    -1,    12,    -1,    34,    37,    -1,    33,    37,    -1,
      53,    14,    53,    -1,    53,    15,    53,    -1,    53,    16,
      53,    -1,    -1,    52,     7,     9,    38,     8,    41,    -1,
      52,    38,     6,    54,    41,    -1,    37,    -1,    38,    -1,
      54,    34,    55,    -1,    55,    -1,    54,    33,    55,    -1,
      56,    -1,    55,    32,    56,    -1,    55,    31,    56,    -1,
      37,    -1,     9,    54,     8,    -1,    38,    -1,    35,    -1,
      57,     5,    38,    -1,    38,    -1,    58,     5,    38,    -1,
      38,    -1,    59,     5,    38,    -1,    38,    -1,    24,     9,
      65,     8,    61,    -1,    62,    26,    17,    63,    18,    -1,
      -1,    25,     9,    64,     8,    17,    63,    18,    62,    -1,
       7,     9,    38,     8,    41,    -1,    38,     6,    54,    41,
      -1,    37,    -1,    38,    -1,    37,    -1,    38,    -1,     4,
      28,    38,     9,     8,    17,    63,    18,    -1,    30,     9,
      38,     8,    41,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   100,   100,   101,   102,   104,   105,   106,   107,   128,
     139,   151,   171,   176,   207,   226,   245,   248,   249,   250,
     251,   252,   257,   306,   450,   484,   673,   674,   675,   677,
     678,   702,   746,   751,   755,   760,   767,   768,   769,   771,
     772,   792,   838,   843,   850,   876,   888,   915,   927,   953,
     980,   984,   996,  1008,  1014,  1033,  1051,  1085,  1121,  1159,
    1197,  1199,  1230,  1231,  1267,  1280,  1313,  1317,  1324,  1328,
    1337,  1375
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
  "SWITCH", "CASE", "DEFAULT", "MAIN", "FUNC", "INCLUDE", "CALL", "DIV",
  "MUL", "SUB", "ADD", "FL", "ROOT", "NUM", "ID", "CHAR", "CHAR1", "END",
  "$accept", "PR", "PROGRAM", "STATEMENT", "IFSTMNT", "LOOPSTMNT",
  "OP_FOR", "F", "OP1", "LOGICAL_OP", "STMNT", "EXPR_1", "EXPR_i",
  "TERM_i", "FACTOR_i", "ID1", "ID2", "ID3", "SWITCH_STMNT", "CASE_STMNT",
  "LEVEL1", "CASE_INTERN", "CASE_CONTD", "BASE_CONTD", "FUNCTION",
  "CALL_FUNC", 0
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
     295,   296
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    46,    46,    47,    47,    48,    48,    48,    49,
      49,    49,    50,    50,    50,    50,    51,    51,    51,    52,
      52,    52,    53,    53,    54,    54,    54,    55,    55,    55,
      56,    56,    56,    56,    57,    57,    58,    58,    59,    59,
      60,    61,    62,    62,    63,    63,    64,    64,    65,    65,
      66,    67
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     2,     0,     3,     3,     3,     4,     4,
       4,     5,     1,     4,     3,     3,     5,     1,     1,     1,
       1,     1,     7,    18,     7,    16,     1,     1,     1,     0,
       6,     5,     1,     1,     2,     2,     3,     3,     3,     0,
       6,     5,     1,     1,     3,     1,     3,     1,     3,     3,
       1,     3,     1,     1,     3,     1,     3,     1,     3,     1,
       5,     5,     0,     8,     5,     4,     1,     1,     1,     1,
       8,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     4,     0,     0,     0,
      12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,    17,    18,    19,    20,    21,    57,     0,     0,    55,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    59,     0,     2,     3,     0,     6,     0,     0,     5,
       0,    42,    43,     0,     0,     0,     0,    68,    69,     0,
       0,     0,     0,    53,    50,    52,     0,     0,    45,    47,
      14,    15,     0,     7,    56,     0,    54,     0,     0,     0,
       0,     0,     0,     0,    62,     0,     0,    53,    50,     0,
       9,     8,    10,     0,     0,    13,     0,     0,    58,     0,
      11,    39,    36,    37,    38,     0,     0,     0,    60,     0,
      71,    16,    51,    46,    44,    49,    48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    22,     0,     0,
       0,    24,     0,    66,    67,     0,     0,    70,     0,     0,
       0,     0,     0,    26,    27,    28,     0,     0,     0,     0,
       0,     0,     0,    65,     0,     0,    61,     0,     0,    41,
      64,     0,     0,    40,     0,     0,    62,    39,    32,    33,
       0,     0,     0,    63,     0,    35,    34,     0,     0,    29,
       0,     0,    39,     0,    25,     0,     0,     0,     0,    23,
       0,     0,     0,    31,    30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    19,    20,    21,    22,   146,   181,   172,    53,
     118,    54,    67,    68,    69,    30,    27,    42,    23,   108,
     109,   121,   135,    59,    24,    25
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -125
static const yytype_int16 yypact[] =
{
     -16,    15,    16,    -6,  -125,    10,     2,     7,   -21,    48,
    -125,    52,    72,    81,    97,    98,    99,    77,    14,    91,
       2,  -125,  -125,  -125,  -125,  -125,  -125,     3,    28,  -125,
       5,    73,    57,    75,    76,    59,    78,    80,    -7,    69,
      74,  -125,     6,  -125,  -125,    82,  -125,   104,    83,  -125,
     110,  -125,  -125,   111,    55,   114,   117,  -125,  -125,   116,
     119,   120,    13,    84,    88,  -125,    89,    26,    67,  -125,
    -125,  -125,    93,  -125,  -125,   124,  -125,    92,   118,    57,
      57,    57,   121,   100,   109,    95,   101,  -125,  -125,    29,
    -125,  -125,  -125,    13,    13,  -125,    13,    13,  -125,   122,
    -125,  -125,  -125,  -125,  -125,    -3,   102,   131,  -125,   115,
    -125,  -125,  -125,    67,    67,  -125,  -125,    -3,    -4,   135,
     139,   128,   112,    63,   130,   133,   140,   129,   146,   123,
      13,  -125,    70,  -125,  -125,   145,    -3,  -125,   125,   147,
      13,   149,    31,  -125,  -125,  -125,   127,   137,   141,   150,
      57,    41,   126,  -125,   132,    -3,  -125,   134,   152,  -125,
    -125,   136,   144,  -125,   138,    43,   109,  -125,  -125,  -125,
     142,   143,   157,  -125,    11,  -125,  -125,   151,   156,  -125,
     153,    18,  -125,   160,  -125,   165,    35,   148,    13,  -125,
     158,    46,   154,  -125,  -125
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -125,  -125,   161,  -125,  -125,  -125,  -125,  -125,  -125,    22,
    -124,    12,   -62,     9,     8,  -125,  -125,  -125,  -125,  -125,
      17,  -116,  -125,  -125,  -125,  -125
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      89,   125,    62,   126,   119,     7,     8,    28,    45,     9,
      48,    72,    10,     1,   127,    11,     4,    29,   126,     3,
     148,     5,    62,    12,    13,   183,    14,     6,    63,   178,
      64,    65,    15,    66,   128,   120,   184,   112,    16,   162,
      17,    18,   126,   174,    46,    26,    49,    73,    87,   128,
      88,    65,    41,   189,   168,   169,   185,    31,   186,    93,
      94,    32,    93,    94,    93,    94,    47,    95,   142,    79,
      80,    81,   153,   128,    93,    94,   170,   171,   151,    93,
      94,    33,   159,    38,   143,   144,   145,   193,    39,    40,
      34,   102,   103,   104,    51,    52,    57,    58,    96,    97,
     133,   134,   113,   114,   115,   116,    35,    36,    37,    43,
      70,    50,    55,    75,    56,    71,    60,    61,    77,    78,
      74,    76,    82,    83,    84,    90,   191,    85,    86,    91,
      92,    98,    99,   100,   107,   101,   110,   106,   105,   117,
     123,   124,   111,   122,   129,   130,   131,   136,   139,   138,
     132,   137,   140,   147,   155,   167,   150,   152,   157,   156,
     164,   141,   166,   149,   154,   177,   192,   160,   179,   187,
     182,   188,   158,   161,   165,   163,   180,     0,     0,   175,
     176,    44,     0,   173,     0,     0,   190,     0,     0,     0,
       0,     0,     0,     0,     0,   194
};

static const yytype_int16 yycheck[] =
{
      62,   117,     9,     7,     7,     3,     4,    28,     5,     7,
       5,     5,    10,    29,    18,    13,     0,    38,     7,     4,
     136,    27,     9,    21,    22,     7,    24,    17,    35,    18,
      37,    38,    30,    40,    38,    38,    18,     8,    36,   155,
      38,    39,     7,   167,    41,    38,    41,    41,    35,    38,
      37,    38,    38,    18,    11,    12,    38,     9,   182,    33,
      34,     9,    33,    34,    33,    34,    38,    41,   130,    14,
      15,    16,    41,    38,    33,    34,    33,    34,   140,    33,
      34,     9,    41,     6,    14,    15,    16,    41,    11,    12,
       9,    79,    80,    81,    37,    38,    37,    38,    31,    32,
      37,    38,    93,    94,    96,    97,     9,     9,     9,    18,
      41,    38,    37,     9,    38,    41,    38,    37,     8,     8,
      38,    38,     8,     6,     8,    41,   188,     8,     8,    41,
      41,    38,     8,    41,    25,    17,    41,    37,    17,    17,
       9,    26,    41,    41,     9,     6,    18,    17,    19,     9,
      38,    18,     6,     8,    17,    17,     9,     8,     8,    18,
       8,    38,    18,    38,    37,     8,     8,    41,    17,     9,
      17,     6,   150,    41,    38,    41,    20,    -1,    -1,    37,
      37,    20,    -1,   166,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    29,    43,     4,     0,    27,    17,     3,     4,     7,
      10,    13,    21,    22,    24,    30,    36,    38,    39,    44,
      45,    46,    47,    60,    66,    67,    38,    58,    28,    38,
      57,     9,     9,     9,     9,     9,     9,     9,     6,    11,
      12,    38,    59,    18,    44,     5,    41,    38,     5,    41,
      38,    37,    38,    51,    53,    37,    38,    37,    38,    65,
      38,    37,     9,    35,    37,    38,    40,    54,    55,    56,
      41,    41,     5,    41,    38,     9,    38,     8,     8,    14,
      15,    16,     8,     6,     8,     8,     8,    35,    37,    54,
      41,    41,    41,    33,    34,    41,    31,    32,    38,     8,
      41,    17,    53,    53,    53,    17,    37,    25,    61,    62,
      41,    41,     8,    55,    55,    56,    56,    17,    52,     7,
      38,    63,    41,     9,    26,    63,     7,    18,    38,     9,
       6,    18,    38,    37,    38,    64,    17,    18,     9,    19,
       6,    38,    54,    14,    15,    16,    48,     8,    63,    38,
       9,    54,     8,    41,    37,    17,    18,     8,    51,    41,
      41,    41,    63,    41,     8,    38,    18,    17,    11,    12,
      33,    34,    50,    62,    52,    37,    37,     8,    18,    17,
      20,    49,    17,     7,    18,    38,    52,     9,     6,    18,
      38,    54,     8,    41,    41
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
        case 8:

/* Line 1455 of yacc.c  */
#line 107 "a.y"
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

  case 9:

/* Line 1455 of yacc.c  */
#line 128 "a.y"
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

  case 10:

/* Line 1455 of yacc.c  */
#line 139 "a.y"
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

  case 11:

/* Line 1455 of yacc.c  */
#line 151 "a.y"
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

  case 12:

/* Line 1455 of yacc.c  */
#line 171 "a.y"
    {
								

							;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 176 "a.y"
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

  case 14:

/* Line 1455 of yacc.c  */
#line 207 "a.y"
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

  case 15:

/* Line 1455 of yacc.c  */
#line 226 "a.y"
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

  case 16:

/* Line 1455 of yacc.c  */
#line 245 "a.y"
    {
											printf("%f",sqrt((yyvsp[(3) - (5)].number)));
								;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 257 "a.y"
    {
								if((yyvsp[(3) - (7)].next).num == 1)
									{
										int i;
										for(i=0;i<index_if;i++)
										{
												if(arr_if[i].operation == 1 )
												{
													if(arr_if[i].datatype == 1)
														printf("%d\n",store_int[arr_if[i].indx].value);
													else if(arr_if[i].datatype == 2)
													{
														printf("%f\n",store_float[arr_if[i].indx].value);
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
											arr_if[i].operation=0;
											arr_if[i].datatype=0;
											arr_if[i].indx=-1;
											arr_if[i].num = 0;
											arr_if[i].f_num = 0;
										}
										index_if=0;
										
									}


								;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 306 "a.y"
    {
									if((yyvsp[(3) - (18)].next).num == 1)
									{
										int i;
										for(i=0;i<index_if;i++)
										{
											if(arr_if[i].operation == 1 )
											{
												if(arr_if[i].datatype == 1)
													printf("%d\n",store_int[arr_if[i].indx].value);
												else if(arr_if[i].datatype == 2)
												{
													printf("%f\n",store_float[arr_if[i].indx].value);
												}
											}
											else if (arr_if[i].operation == 2)
											{
												if(arr_if[i].indx	!= -1)
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
											arr_if[i].operation=0;
											arr_if[i].datatype=0;
											arr_if[i].indx=-1;
											arr_if[i].num = 0;
											arr_if[i].f_num = 0;

										}
										index_if=0;
									}
									else if((yyvsp[(10) - (18)].next).num == 1)
									{

										int i;
										for(i=(yyvsp[(6) - (18)].sup).num;i<(yyvsp[(13) - (18)].sup).num;i++)
										{
											if(arr_if[i].operation == 1 )
											{
												if(arr_if[i].datatype == 1)
												{
													printf("%d\n",store_int[arr_if[i].indx].value);
												}
												else if(arr_if[i].datatype == 2)
												{
														printf("%f\n",store_float[arr_if[i].indx].value);
												}
											}
											else if (arr_if[i].operation == 2)
											{
												if(arr_if[i].indx	!= -1)
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
											arr_if[i].operation=0;
											arr_if[i].datatype=0;
											arr_if[i].indx=-1;
											arr_if[i].num = 0;
											arr_if[i].f_num = 0;
										}
										index_if=0;
									}
									else
									{
										int i;

										for(i=(yyvsp[(13) - (18)].sup).num;i<(yyvsp[(17) - (18)].sup).num;i++)
										{
											if(arr_if[i].operation == 1 )
												{
													if(arr_if[i].datatype == 1)
													{
														printf("%d\n",store_int[arr_if[i].indx].value);
													}
													else if(arr_if[i].datatype == 2)
													{
														printf("%f\n",store_float[arr_if[i].indx].value);
													}
												}
											else if (arr_if[i].operation == 2)
											{
												if(arr_if[i].indx	!= -1)
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
											arr_if[i].operation=0;
											arr_if[i].datatype=0;
											arr_if[i].indx=-1;
											arr_if[i].num = 0;
											arr_if[i].f_num = 0;
										}
										index_if=0;

									}
								;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 450 "a.y"
    {
									int i=0;
									
									while(i<(yyvsp[(3) - (7)].number))
									{
										if((yyvsp[(6) - (7)].sup).operation == 1)
										{
											if((yyvsp[(6) - (7)].sup).datatype==1)
											{
												printf("\n%d\n", store_int[(yyvsp[(6) - (7)].sup).indx].value);
											}
											else if((yyvsp[(6) - (7)].sup).datatype==2)
											{
												printf("\n%f\n", store_float[(yyvsp[(6) - (7)].sup).indx].value);
											}


										}
										else if((yyvsp[(6) - (7)].sup).operation == 2)
										{
											if((yyvsp[(6) - (7)].sup).datatype == 1)
											{
												store_int[(yyvsp[(6) - (7)].sup).indx].value = (yyvsp[(6) - (7)].sup).num;
											}
											else
											{
												store_float[(yyvsp[(6) - (7)].sup).indx].value = (yyvsp[(6) - (7)].sup).f_num;
											}
										}
										i++;

									}

								;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 484 "a.y"
    {
							if(strcmp((yyvsp[(3) - (16)].string),(yyvsp[(7) - (16)].string))==0 )
							{
								if(strcmp((yyvsp[(3) - (16)].string),(yyvsp[(11) - (16)].string))==0)
								{
									find_i(store_int,(yyvsp[(3) - (16)].string),in_int);
									int index1= f_index;

									if((yyvsp[(8) - (16)].number)==1){

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
											else if(F_indx[i].operation==2)
											{
												if(F_indx[i].index!= -1)
												{
													if(F_indx[i].datatype == 1)
													{
														store_int[F_indx[i].index].value=(int)F_indx[i].value.num;
														store_int[F_indx[i].index].valid=1;
													}
													else if(F_indx[i].datatype==2)
													{
														store_float[F_indx[i].index].value=F_indx[i].value.f_num;
														store_float[F_indx[i].index].valid=1;
													}
												
												}
												else
												{
													printf("Variable is not Declared");
												}
											}
											
										}
										F_indx[i].operation=0;
										F_indx[i].datatype=0;
										F_indx[i].index=-1;
									}
								    }
								    else if((yyvsp[(8) - (16)].number) == 2)
								    {
								    	for(store_int[index1].value=(yyvsp[(5) - (16)].number);store_int[index1].value>(yyvsp[(9) - (16)].number);store_int[index1].value=store_int[index1].value+(yyvsp[(12) - (16)].sup).num)
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
											else if(F_indx[i].operation==2)
											{
												if(F_indx[i].index!= -1)
												{
													if(F_indx[i].datatype == 1)
													{
														store_int[F_indx[i].index].value=(int)F_indx[i].value.num;
														store_int[F_indx[i].index].valid=1;
													}
													else if(F_indx[i].datatype==2)
													{
														store_float[F_indx[i].index].value=F_indx[i].value.f_num;
														store_float[F_indx[i].index].valid=1;
													}
												
												}
												else
												{
													printf("Variable is not Declared");
												}
											}
											
										}
										F_indx[i].operation=0;
										F_indx[i].datatype=0;
										F_indx[i].index=-1;
									}

								    }


								    else if((yyvsp[(8) - (16)].number) == 3)
								    {
								    	for(store_int[index1].value=(yyvsp[(5) - (16)].number);store_int[index1].value!=(yyvsp[(9) - (16)].number);store_int[index1].value=store_int[index1].value+(yyvsp[(12) - (16)].sup).num)
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
											else if(F_indx[i].operation==2)
											{
												if(F_indx[i].index!= -1)
												{
													if(F_indx[i].datatype == 1)
													{
														store_int[F_indx[i].index].value=(int)F_indx[i].value.num;
														store_int[F_indx[i].index].valid=1;
													}
													else if(F_indx[i].datatype==2)
													{
														store_float[F_indx[i].index].value=F_indx[i].value.f_num;
														store_float[F_indx[i].index].valid=1;
													}
												
												}
												else
												{
													printf("Variable is not Declared");
												}
											}
											
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

  case 26:

/* Line 1455 of yacc.c  */
#line 673 "a.y"
    {(yyval.number)=1;;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 674 "a.y"
    {(yyval.number)=2;;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 675 "a.y"
    {(yyval.number)=3;;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 678 "a.y"
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

  case 31:

/* Line 1455 of yacc.c  */
#line 702 "a.y"
    {
									F_indx[for_id_index].operation=2;
									if (find_i(store_int,(yyvsp[(2) - (5)].string),in_int) == 1)
									{
										
										F_indx[for_id_index].datatype=1;
										F_indx[for_id_index].index = f_index;
										if((yyvsp[(4) - (5)].sup).datatype == 1)
										{
											F_indx[for_id_index].value.num = (int)(yyvsp[(4) - (5)].sup).num;
										}
										else
										{
											F_indx[for_id_index].value.num = (int)(yyvsp[(4) - (5)].sup).f_num;
										}
									}
									else if (find_c(store_char,(yyvsp[(2) - (5)].string),c) == 1){
										
											
											F_indx[for_id_index].datatype=3;
											F_indx[for_id_index].index = f_index;

											
										
									}
									else if (find_f(store_float,(yyvsp[(2) - (5)].string),f) == 1){
										F_indx[for_id_index].datatype=2;
										F_indx[for_id_index].index = f_index;
										
										if((yyvsp[(4) - (5)].sup).datatype == 1)
										{
											F_indx[for_id_index].value.f_num = (float)(yyvsp[(4) - (5)].sup).num;
										}
										else
										{
											F_indx[for_id_index].value.f_num = (float)(yyvsp[(4) - (5)].sup).f_num;
										}
										
									}
									strcpy(F_indx[for_id_index++].name,(yyvsp[(2) - (5)].string));

								;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 746 "a.y"
    {
						(yyval.sup).num = 1;
						(yyval.sup).operation = 1;
	
					;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 751 "a.y"
    {
						(yyval.sup).num = -1;
						(yyval.sup).operation = 2;
					;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 755 "a.y"
    {
						(yyval.sup).num = (yyvsp[(2) - (2)].number);
						(yyval.sup).operation = 1;
					
					;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 760 "a.y"
    {
						(yyval.sup).num = -((yyvsp[(2) - (2)].number));
						(yyval.sup).operation = 2;
					;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 767 "a.y"
    {if((yyvsp[(1) - (3)].number)>(yyvsp[(3) - (3)].number)) (yyval.next).num=1;else (yyval.next).num=0;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 768 "a.y"
    {if((yyvsp[(1) - (3)].number)<(yyvsp[(3) - (3)].number)) (yyval.next).num=1;else (yyval.next).num=0;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 769 "a.y"
    {if((yyvsp[(1) - (3)].number)==(yyvsp[(3) - (3)].number)) (yyval.next).num=1;else (yyval.next).num=0;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 772 "a.y"
    {
							if (find_i(store_int,(yyvsp[(4) - (6)].string),in_int) == 1){
								arr_if[index_if].num = store_int[f_index].value;
								arr_if[index_if].indx = f_index;
								arr_if[index_if].datatype = 1;
								arr_if[index_if++].operation = 1;
								(yyval.sup).num=index_if;
											
							}
							else if (find_f(store_float,(yyvsp[(4) - (6)].string),f) == 1){
								arr_if[index_if].f_num = store_float[f_index].value;
								arr_if[index_if].indx = f_index;
								arr_if[index_if].datatype = 2;
								arr_if[index_if++].operation = 1;
								(yyval.sup).num=index_if;
											
							}
										//printf("Variable Is not Declared 1");
									
						;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 792 "a.y"
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
											(yyval.sup).num=index_if;
										}
										else if(find_f(store_float,(yyvsp[(2) - (5)].string),f) == 1){
											arr_if[index_if].indx = f_index;
											arr_if[index_if].f_num = (float)(yyvsp[(4) - (5)].sup).num;
											arr_if[index_if].datatype=2;
											index_if++;
											(yyval.sup).num=index_if;
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
											(yyval.sup).num=index_if;
										}
										else if(find_f(store_float,(yyvsp[(2) - (5)].string),f) == 1){
											arr_if[index_if].indx = f_index;
											arr_if[index_if].f_num =	(yyvsp[(4) - (5)].sup).f_num;
											arr_if[index_if].datatype=2;
											index_if++;
											(yyval.sup).num=index_if;
										}
										
									}
									
								;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 838 "a.y"
    {
									(yyval.number)=(yyvsp[(1) - (1)].number);

								;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 843 "a.y"
    {
									if(find_i(store_int,(yyvsp[(1) - (1)].string),in_int)==1)
									{
										(yyval.number)=store_int[f_index].value;
									}
								;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 850 "a.y"
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

  case 45:

/* Line 1455 of yacc.c  */
#line 876 "a.y"
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

  case 46:

/* Line 1455 of yacc.c  */
#line 888 "a.y"
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

  case 47:

/* Line 1455 of yacc.c  */
#line 915 "a.y"
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

  case 48:

/* Line 1455 of yacc.c  */
#line 927 "a.y"
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

  case 49:

/* Line 1455 of yacc.c  */
#line 953 "a.y"
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

  case 50:

/* Line 1455 of yacc.c  */
#line 980 "a.y"
    {	
	  						(yyval.sup).num = (yyvsp[(1) - (1)].number);
	  						(yyval.sup).datatype = 1;
						;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 984 "a.y"
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

  case 52:

/* Line 1455 of yacc.c  */
#line 996 "a.y"
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

  case 53:

/* Line 1455 of yacc.c  */
#line 1008 "a.y"
    {
	  						(yyval.sup).f_num = (yyvsp[(1) - (1)].f_number);
	  						(yyval.sup).datatype = 2;

	  					;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 1014 "a.y"
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

  case 55:

/* Line 1455 of yacc.c  */
#line 1033 "a.y"
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

  case 56:

/* Line 1455 of yacc.c  */
#line 1051 "a.y"
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

  case 57:

/* Line 1455 of yacc.c  */
#line 1085 "a.y"
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

  case 58:

/* Line 1455 of yacc.c  */
#line 1121 "a.y"
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

  case 59:

/* Line 1455 of yacc.c  */
#line 1159 "a.y"
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

  case 61:

/* Line 1455 of yacc.c  */
#line 1199 "a.y"
    {
			if(is_executed == 0)
			{
				if((yyvsp[(4) - (5)].sup).operation == 1)
					{
						if((yyvsp[(4) - (5)].sup).datatype==1)
						{
							printf("\n%d\n", store_int[(yyvsp[(4) - (5)].sup).indx].value);
						}
						else if((yyvsp[(4) - (5)].sup).datatype==2)
						{
							printf("\n%f\n", store_float[(yyvsp[(4) - (5)].sup).indx].value);
						}

					}
					else if((yyvsp[(4) - (5)].sup).operation == 2)
					{
						if((yyvsp[(4) - (5)].sup).datatype == 1)
						{
							store_int[(yyvsp[(4) - (5)].sup).indx].value = (yyvsp[(4) - (5)].sup).num;
						}
						else
						{
							store_float[(yyvsp[(4) - (5)].sup).indx].value = (yyvsp[(4) - (5)].sup).f_num;
						}
					}

				is_executed = 1;
				
			}
		;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 1231 "a.y"
    {
			if(is_executed == 0)
			{
				if(var_switch.num == (yyvsp[(3) - (8)].number))
				{
					if((yyvsp[(6) - (8)].sup).operation == 1)
					{
						if((yyvsp[(6) - (8)].sup).datatype==1)
						{
							printf("\n%d\n", store_int[(yyvsp[(6) - (8)].sup).indx].value);
						}
						else if((yyvsp[(6) - (8)].sup).datatype==2)
						{
							printf("\n%f\n", store_float[(yyvsp[(6) - (8)].sup).indx].value);
						}

					}
					else if((yyvsp[(6) - (8)].sup).operation == 2)
					{
						if((yyvsp[(6) - (8)].sup).datatype == 1)
						{
							store_int[(yyvsp[(6) - (8)].sup).indx].value = (yyvsp[(6) - (8)].sup).num;
						}
						else
						{
							store_float[(yyvsp[(6) - (8)].sup).indx].value = (yyvsp[(6) - (8)].sup).f_num;
						}
					}

					is_executed=1;


				}
			}
		;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 1267 "a.y"
    {
						(yyval.sup).operation = 1;
						if (find_i(store_int,(yyvsp[(3) - (5)].string),in_int) == 1)
						{	
							(yyval.sup).datatype = 1;
							(yyval.sup).indx = f_index;

						}
						else if (find_f(store_float,(yyvsp[(3) - (5)].string),f) == 1){
							(yyval.sup).datatype = 2;
							(yyval.sup).indx = f_index;
						}
					;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 1280 "a.y"
    {
						(yyval.sup).operation = 2;
						if (find_i(store_int,(yyvsp[(1) - (4)].string),in_int) == 1)
						{	
							(yyval.sup).datatype = 1;
							(yyval.sup).indx = f_index;
							if((yyvsp[(3) - (4)].sup).datatype==1)
							{
								(yyval.sup).num = (yyvsp[(3) - (4)].sup).num;
							}
							else if ((yyvsp[(3) - (4)].sup).datatype==2)
							{
								(yyval.sup).num = (int)(yyvsp[(3) - (4)].sup).f_num;
							}
						}
						else if (find_f(store_float,(yyvsp[(1) - (4)].string),f) == 1){
							(yyval.sup).datatype = 2;
							(yyval.sup).indx = f_index;
							if((yyvsp[(3) - (4)].sup).datatype==1)
							{
								(yyval.sup).f_num =(float) (yyvsp[(3) - (4)].sup).num;
							}
							else if ((yyvsp[(3) - (4)].sup).datatype==2)
							{
								(yyval.sup).f_num = (float)(yyvsp[(3) - (4)].sup).f_num;
							}

						}
							

					;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 1313 "a.y"
    {
				(yyval.number)=(yyvsp[(1) - (1)].number);
				
			;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 1317 "a.y"
    {
				if(find_i(store_int,(yyvsp[(1) - (1)].string),in_int) == 1)
				{
					(yyval.number)= store_int[f_index].value;
				}
			;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 1324 "a.y"
    {
				(yyval.number)=(yyvsp[(1) - (1)].number);
				var_switch.num=(yyvsp[(1) - (1)].number);
			;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 1328 "a.y"
    {
				if(find_i(store_int,(yyvsp[(1) - (1)].string),in_int) == 1)
				{
					(yyval.number)= store_int[f_index].value;
					var_switch.num = store_int[f_index].value;
				}
			;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 1337 "a.y"
    {
					func[index_func].str=(yyvsp[(3) - (8)].string);
					if((yyvsp[(7) - (8)].sup).operation == 1)
					{
						if((yyvsp[(7) - (8)].sup).datatype == 1)
						{
							func[index_func].num = store_int[(yyvsp[(7) - (8)].sup).indx].value;
							func[index_func].datatype = 1;
							func[index_func++].operation = 1;
						}
						else if((yyvsp[(7) - (8)].sup).datatype == 2)
						{
							func[index_func].f_num = store_float[(yyvsp[(7) - (8)].sup).indx].value;
							func[index_func].datatype = 2;
							func[index_func++].operation = 1;
						}							
					}
					else if((yyvsp[(7) - (8)].sup).operation == 2)
					{

						if((yyvsp[(7) - (8)].sup).datatype == 1)
						{
							func[index_func].num = (yyvsp[(7) - (8)].sup).num;
							func[index_func].datatype = 1;
							func[index_func].indx = (yyvsp[(7) - (8)].sup).indx;
							func[index_func++].operation = 2;
						}
						else if((yyvsp[(7) - (8)].sup).datatype == 2)
						{
							func[index_func].f_num = store_float[(yyvsp[(7) - (8)].sup).indx].value;
							func[index_func].datatype = 2;
							func[index_func].indx = (yyvsp[(7) - (8)].sup).indx;
							func[index_func++].operation = 2;
						}
					}
	
				;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 1375 "a.y"
    {
			for(int i=0;i<index_func;i++)
			{
				if(strcmp((yyvsp[(3) - (5)].string),func[i].str)==0)
				{
					if(func[i].operation == 1)
					{
						if(func[i].datatype==1)
						{
							printf("%d",func[i].num);
						}
						else
						{
							printf("%f",func[i].f_num);
						}
					}
					else if(func[i].operation == 2)
					{
						if(func[i].datatype==1)
						{
							store_int[func[i].indx].value = func[i].num;
						}
						else
						{
							store_float[func[i].indx].value = func[i].f_num;
						}

					}
				}
			}
	
		;}
    break;



/* Line 1455 of yacc.c  */
#line 3184 "a.tab.c"
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
#line 1407 "a.y"


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

