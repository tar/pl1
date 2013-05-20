/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

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

/* Line 268 of yacc.c  */
#line 1 "PL_I.y"

#include <stdio.h>
#include <string.h>

#define YYERROR_VERBOSE 1
#define YYSTYPE char*

int yylineno;

YYSTYPE yylval;

#define MAX_LENGTH_ASS_PROG 50

#define MAX_LENGTH_DCL_PART 20

#define MAX_LENGTH_IMP_PART 20

char s1[80];

char Prolog[3][80];
char Epilog[80];

char AssProg[MAX_LENGTH_ASS_PROG][80];
int pAssProg;

char DclPart[MAX_LENGTH_DCL_PART][80];
int pDclPart;

char ImpPart[MAX_LENGTH_IMP_PART][80];
int pImpPart;

char AssProgName[9];
char ErrorMessage[100];

int IsDclName( char* pName, int length) {
int i, j;
char etalon[9];

 for (i=0; i<pDclPart; i++) {

  j=0;
  while (DclPart[i][j] != ' ')  etalon[j++]=DclPart[i][j];
  etalon[j]=0;

  if (length != j) continue;

  if (memcmp(&DclPart[i][0], pName, length)) {
   continue;
  }
  else {
   return 0;
  }
 }
 return 1;
}

void yyerror(const char *str) {
 fprintf(stderr, "\n error: string N  %u, %s\n", yylineno, str);
}

void pro();
void odi(char *tpe, char *rzr, char *lit);
void odr(char *tpe, char *rzr);
void opr(char *pr_name);
int  oen(char *pr_name);
int  opa(char *ipe);
int  opl(char *ipe);
void avi_lit(char *lit);
int  avi_ipe(char *ipe);
void avi_avi_znk_lit(char *znk, char *lit);
int  avi_avi_znk_ipe(char *znk, char *ipe);
int my_substr (char *ipe1, char *ipe2, char *shift, char *mask);



/* Line 268 of yacc.c  */
#line 147 "PL_I.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
     IDENT = 258,
     PROC = 259,
     OPTIONS = 260,
     MAIN = 261,
     END = 262,
     DCL = 263,
     BIN = 264,
     FIXED = 265,
     BIT = 266,
     NUM = 267,
     INIT = 268,
     VAL = 269,
     SUBSTR = 270,
     CONCAT = 271,
     ZNK = 272
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 206 "PL_I.tab.c"

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   63

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  23
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  27
/* YYNRULES -- Number of states.  */
#define YYNSTATES  73

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   272

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      18,    19,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    21,    20,
       2,    22,     2,     2,     2,     2,     2,     2,     2,     2,
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
      15,    16,    17
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     7,    10,    12,    15,    17,    19,    32,
      44,    53,    61,    63,    65,    67,    69,    71,    73,    82,
      86,    88,    91,    96,    98,   100,   104,   108
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      24,     0,    -1,    36,    25,    37,    -1,    26,    38,    -1,
      27,    -1,    26,    27,    -1,    28,    -1,    29,    -1,     8,
      30,     9,    10,    18,    31,    19,    13,    18,    32,    19,
      20,    -1,     8,    30,    11,    18,    31,    19,    13,    18,
      35,    19,    20,    -1,     8,    30,     9,    10,    18,    31,
      19,    20,    -1,     8,    30,    11,    18,    31,    19,    20,
      -1,     3,    -1,    12,    -1,    12,    -1,    12,    -1,    12,
      -1,    14,    -1,     3,    21,     4,     5,    18,     6,    19,
      20,    -1,     7,     3,    20,    -1,    39,    -1,    38,    39,
      -1,    30,    22,    40,    20,    -1,    32,    -1,    30,    -1,
      40,    17,    32,    -1,    40,    17,    30,    -1,    15,    18,
      18,    30,    16,    30,    19,    33,    34,    19,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    81,    81,    83,    85,    86,    88,    89,    91,    92,
      94,    95,    97,    99,   101,   103,   105,   107,   109,   111,
     114,   115,   117,   119,   120,   121,   122,   123
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENT", "PROC", "OPTIONS", "MAIN",
  "END", "DCL", "BIN", "FIXED", "BIT", "NUM", "INIT", "VAL", "SUBSTR",
  "CONCAT", "ZNK", "'('", "')'", "';'", "':'", "'='", "$accept", "pro",
  "tel", "dec", "odc", "odi", "odr", "ipe", "rzr", "lit", "shift", "mask",
  "lib", "opr", "oen", "imp", "opa", "avi", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    40,    41,
      59,    58,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    23,    24,    25,    26,    26,    27,    27,    28,    28,
      29,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    38,    39,    40,    40,    40,    40,    40
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     1,     2,     1,     1,    12,    11,
       8,     7,     1,     1,     1,     1,     1,     1,     8,     3,
       1,     2,     4,     1,     1,     3,     3,    10
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     1,     0,     0,     0,     4,
       6,     7,     0,    12,     0,     0,     2,     5,     0,     3,
      20,     0,     0,     0,     0,     0,    21,     0,     0,     0,
      19,    14,     0,    24,    23,     0,     0,     0,    13,     0,
       0,     0,    22,     0,     0,     0,     0,    26,    25,    18,
       0,     0,    11,     0,     0,    10,     0,     0,     0,    17,
       0,     0,     0,     0,     0,     0,     9,    15,     0,     8,
      16,     0,    27
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     7,     8,     9,    10,    11,    18,    39,    34,
      68,    71,    60,     3,    16,    19,    20,    35
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -41
static const yytype_int8 yypact[] =
{
       2,    -4,    16,    13,    19,   -41,    21,    18,     1,   -41,
     -41,   -41,    22,   -41,    11,    23,   -41,   -41,     6,    21,
     -41,    12,    24,    14,     9,    -1,   -41,    25,    15,    26,
     -41,   -41,    27,   -41,   -41,   -10,    17,    26,   -41,    20,
      28,     0,   -41,    29,    31,    -7,    21,   -41,   -41,   -41,
      -5,    30,   -41,    36,    35,   -41,    33,    21,    32,   -41,
      37,    38,    39,    34,    43,    40,   -41,   -41,    47,   -41,
     -41,    42,   -41
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -41,   -41,   -41,   -41,    54,   -41,   -41,    -6,     4,   -40,
     -41,   -41,   -41,   -41,   -41,   -41,    44,   -41
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      14,    48,    13,    13,    13,     1,    51,    41,    54,     6,
      42,    31,    31,    52,    32,    55,     5,     4,    62,    33,
      22,     6,    23,    12,    13,    15,    24,    21,    25,    30,
      27,    36,    29,    37,    28,    47,    43,     0,    38,    45,
      53,    44,     0,     0,    31,    40,    46,    59,    56,    49,
      50,    61,    57,    58,    66,    67,    63,    64,    65,    70,
      69,    72,    17,    26
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-41))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
       6,    41,     3,     3,     3,     3,    13,    17,    13,     8,
      20,    12,    12,    20,    15,    20,     0,    21,    58,    25,
       9,     8,    11,     4,     3,     7,     3,     5,    22,    20,
      18,     6,    18,    18,    10,    41,    19,    -1,    12,    19,
      46,    37,    -1,    -1,    12,    18,    18,    14,    18,    20,
      19,    57,    16,    18,    20,    12,    19,    19,    19,    12,
      20,    19,     8,    19
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    24,    36,    21,     0,     8,    25,    26,    27,
      28,    29,     4,     3,    30,     7,    37,    27,    30,    38,
      39,     5,     9,    11,     3,    22,    39,    18,    10,    18,
      20,    12,    15,    30,    32,    40,     6,    18,    12,    31,
      18,    17,    20,    19,    31,    19,    18,    30,    32,    20,
      19,    13,    20,    30,    13,    20,    18,    16,    18,    14,
      35,    30,    32,    19,    19,    19,    20,    12,    33,    20,
      12,    34,    19
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

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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
        case 2:

/* Line 1806 of yacc.c  */
#line 81 "PL_I.y"
    { pro(); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 91 "PL_I.y"
    { odi((yyvsp[(2) - (12)]), (yyvsp[(6) - (12)]), (yyvsp[(10) - (12)])); }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 92 "PL_I.y"
    { odi((yyvsp[(2) - (11)]), (yyvsp[(5) - (11)]), (yyvsp[(9) - (11)])); }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 94 "PL_I.y"
    { odr((yyvsp[(2) - (8)]), (yyvsp[(6) - (8)])); }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 95 "PL_I.y"
    { odr ((yyvsp[(2) - (7)]), (yyvsp[(5) - (7)])); }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 97 "PL_I.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 99 "PL_I.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 101 "PL_I.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 103 "PL_I.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 105 "PL_I.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 107 "PL_I.y"
    {(yyval)=(yyvsp[(1) - (1)]);}
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 109 "PL_I.y"
    { opr((yyvsp[(1) - (8)])); }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 111 "PL_I.y"
    { if ( oen((yyvsp[(2) - (3)])) ) YYABORT; }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 117 "PL_I.y"
    { if ( opl((yyvsp[(1) - (4)])) ) YYABORT; }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 119 "PL_I.y"
    { avi_lit((yyvsp[(1) - (1)])); }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 120 "PL_I.y"
    { if ( avi_ipe((yyvsp[(1) - (1)])) ) YYABORT;}
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 121 "PL_I.y"
    { avi_avi_znk_lit((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)])); }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 122 "PL_I.y"
    { if ( avi_avi_znk_ipe((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)])) ) YYABORT; }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 123 "PL_I.y"
    { if ( my_substr ((yyvsp[(4) - (10)]), (yyvsp[(6) - (10)]), (yyvsp[(8) - (10)]), (yyvsp[(9) - (10)])) ) YYABORT; }
    break;



/* Line 1806 of yacc.c  */
#line 1609 "PL_I.tab.c"
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



/* Line 2067 of yacc.c  */
#line 125 "PL_I.y"

/*
***************************************************************************************************************
*                   Начало библиотеки семантических программ                                                  *
***************************************************************************************************************
*/

/*
...............................................................................................................
. Программа void pro()                                                                                        .
. Соединяет в массиве AssProg вместе следующие части ассемблеровского эквивалента:                            .
.  - пролог (из массива Prolog),                                                                              ,
.  - императивную часть (из массива ImpPart),                                                                 .
.  - декларативную часть (из массива DeclPart),                                                               .
.  - эпилог (из массива epilog).                                                                              .
. Распечатывает результат                                                                                     .
,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
*/

void pro()
{int i,j;

                    memcpy(&AssProg[pAssProg++][0], &Prolog[0][0], 80);
                    memcpy(&AssProg[pAssProg++][0], &Prolog[1][0], 80);
                    memcpy(&AssProg[pAssProg++][0], &Prolog[2][0], 80);


                    for (i=0; i<pImpPart; i++) {
                     memcpy(&AssProg[pAssProg++][0], &ImpPart[i][0], 80);
                    }
                    
                    for (i=3; i<pDclPart; i++) {
                     memcpy(&AssProg[pAssProg++][0], &DclPart[i][0], 80);
                    }
                    for (i=0; i<3; i++) {
                     memcpy(&AssProg[pAssProg++][0], &DclPart[i][0], 80);
                    }
                    
                    

                    memcpy(&AssProg[pAssProg++], &Epilog[0], 80);

                    printf("\nR e s u l t   of   G e n e r a t i o n\n");
                    for (i=0; i<pAssProg; i++) {
                      printf("\n");
                      for (j=0; j<79; j++) {
                       printf("%c", AssProg[i][j]);
                      }
                    }

                    printf("\n");

                    if(yydebug) {

                     printf("\nDclPart");
                     for (i=0; i<pDclPart; i++) {
                      printf("\n");
                      for (j=0; j<79; j++) {
                       printf("%c", DclPart[i][j]);
                      }
                     }

                     printf("\n");

                     printf("\nImpPart");
                     for (i=0; i<pImpPart; i++) {
                      printf("\n");
                      for (j=0; j<79; j++) {
                       printf("%c", ImpPart[i][j]);
                      }
                     }

                     printf("\n");
                    }
}

/*
...............................................................................................................
. Программа void odi(char *ipe, char *rzr, char *lit)                                                         .
.                                                                                                             .
. Формирует и дописывает в свободную строку массива DclPart ассемблеровский эквивалент оператора ЯВУ,         .
. который  объявляет и инициализирует именованный объект (dcl с инициализацией).                              .
.                                                                                                             .
. Параметры: ipe (имя переменной), rzr (разрядность), lit (инициализирующее значение).                        .
,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
*/

void odi(char *ipe, char *rzr, char *lit) {
               memset(&s1[0], ' ', 80);
               memcpy(&s1[0], ipe, strlen(ipe));
               memcpy(&s1[9], "DC", 2);
               char last_ind = 0;
               if(!memcmp(rzr, "31", 2)) {
                s1[15]='F';
                s1[16]='\'';
                last_ind = 17;
               } else if (!memcmp (rzr, "16", 2) || !memcmp (rzr, "3", 1)) {
                s1[15]='B';
                s1[16]='L';
                s1[17]='2';
                s1[18]='\'';
                last_ind = 19;
               } else {
                s1[15]='H';
                s1[16]='\'';
                last_ind = 17;
               }
               memcpy(&s1[last_ind], lit, strlen(lit));
               s1[last_ind+strlen(lit)]='\'';
               memcpy(&s1[30], "Variable declaration with initialization", 40);

               memcpy(&DclPart[pDclPart][0], &s1[0], 80);
               pDclPart++;
              }

/*
...............................................................................................................
. Программа void odr(char *ipe, char *rzr)                                                                    .
.                                                                                                             .
. Формирует и дописывает в свободную строку массива DclPart ассемблеровский эквивалент оператора ЯВУ,         .
. который  объявляет именованный объект (dcl без инициализации).                                              .
.                                                                                                             .
. Параметры: ipe (имя переменной), rzr (разрядность).                                                         .
.                                                                                                             .
,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
*/

void odr(char *ipe, char *rzr) {
               memset(&s1[0], ' ', 80);
               memcpy(&s1[0], ipe, strlen(ipe));
               memcpy(&s1[9], "DS", 2);
               if(!memcmp(rzr, "31", 2)) {
                s1[15]='F';
               } else if (!memcmp (rzr, "16", 2)) {
                s1[15]='B';
                s1[16]='L';
                s1[17]='2';
               } else {
                s1[15]='H';
               }
               memcpy(&s1[30], "Variable declaration without initialization", 43);

               memcpy(&DclPart[pDclPart][0], &s1[0], 80);
               pDclPart++;
}

/*
...............................................................................................................
. Программа void opr(char *pr_name)                                                                           .
.                                                                                                             .
. Формирует и дописывает в свободную строку массива Prolog  ассемблеровский эквивалент оператора ЯВУ,         .
. который  объявляет пролог программы на ЯВУ (proc options ...).                                              .
.                                                                                                             .
. Параметры: pr_name (имя программы).                                                                         .
.                                                                                                             .
,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
*/


void opr(char *pr_name) {
               memset(&s1[0], ' ', 80);
               memcpy(&s1[0], pr_name, strlen(pr_name));
               memcpy(&s1[9], "START 0", 7);
               memcpy(&s1[30], "Programm start", 14);
               memcpy(&Prolog[0][0], &s1[0], 80);

               memset(&s1[0], ' ', 80);
               memcpy(&s1[9], "BALR  RBASE,0", 13);
               memcpy(&s1[30], "Base initialization", 19);
               memcpy(&Prolog[1][0], &s1[0], 80);


               memset(&s1[0], ' ', 80);
               memcpy(&s1[9], "USING *,RBASE", 13);
               memcpy(&s1[30], "Base declaration", 16);
               memcpy(&Prolog[2][0], &s1[0], 80);

               memcpy(&AssProgName[0], pr_name, strlen(pr_name));
}

/*
...............................................................................................................
. Программа int oen(char *pr_name)                                                                            .
.                                                                                                             .
. Формирует и дописывает в массив Epilog ассемблеровский эквивалент оператора ЯВУ,                            .
. который  объявляет эпилог программы на ЯВУ (end ...).                                                       .
.                                                                                                             .
. Параметры: pr_name (имя программы).                                                                         .
.                                                                                                             .
. Возвращаемый результат 0 (если pr_name совпадает с pr_name пролога) и 1 (в противном случае)                .
,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
*/

int oen(char *pr_name) {

               if (!memcmp(&Prolog[0][0], pr_name, strlen(pr_name))){

                memset(&s1[0], ' ', 80);
                memcpy(&s1[9], "END", 3);
                memcpy(&s1[15], pr_name, strlen(pr_name));
                memcpy(&s1[30], "Programm end", 12);
                memcpy(&Epilog[0], &s1[0], 80);

                memset(&s1[0], ' ', 80);
                memcpy(&s1[9], "BCR   15,  RVIX", 15);
                memcpy(&s1[30], "Return from programm", 20);

                memcpy(&ImpPart[pImpPart][0], &s1[0], 80);
                pImpPart++;
                
                return 0; 
               }
               else {
                strcpy(&ErrorMessage[0], " invalid identificator ");
                strcat(&ErrorMessage[0], pr_name);
                strcat(&ErrorMessage[0], " ");
                strcat(&ErrorMessage[0], "in oen\n");
                yyerror(&ErrorMessage[0]);
                return 1;
               }
}

/*
...............................................................................................................
. Программа int opa(char *ipe)                                                                                .
.                                                                                                             .
. Формирует и дописывает в в свободную строку массива ImpPart ассемблеровский эквивалент оператора ЯВУ,       .
. который  присваивает переменной ipe значение вычисленного арифметического выражения, находящегося в регистре.
. RRAB  (имя перемеменной =  ...).                                                                            .
.                                                                                                             .
. Параметры: pr_name (имя программы).                                                                         .
.                                                                                                             .
. Возвращаемый результат 0 (если ipe объявлена ранее в операторе dcl) и 1 (в противном случае)                .
,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
*/

int opa(char *ipe) {
                if (IsDclName(ipe, strlen(ipe))){
                strcpy(&ErrorMessage[0], " invalid identificator ");
                strcat(&ErrorMessage[0], ipe);
                strcat(&ErrorMessage[0], " ");
                strcat(&ErrorMessage[0], "in left part of opa\n");
                yyerror(&ErrorMessage[0]);
                return 1;
                }
                memset(&s1[0], ' ', 80);
                memcpy(&s1[9], "ST", 2);
                memcpy(&s1[15], "R1,", 3);
                memcpy(&s1[20], ipe, strlen(ipe));
                memcpy(&s1[30], "Result storage", 14);
                
                memcpy(&ImpPart[pImpPart][0], &s1[0], 80);
                 pImpPart++;

                return 0;
}

int opl(char *ipe) {
                if (IsDclName(ipe, strlen(ipe))){
                strcpy(&ErrorMessage[0], " invalid identificator ");
                strcat(&ErrorMessage[0], ipe);
                strcat(&ErrorMessage[0], " ");
                strcat(&ErrorMessage[0], "in left part of opa\n");
                yyerror(&ErrorMessage[0]);
                return 1;
                }

                memset(&s1[0], ' ', 80);
                memcpy(&s1[9], "STH", 3);
                memcpy(&s1[15], "3,", 2);
                memcpy(&s1[20], ipe, strlen(ipe));
                memcpy(&s1[30], "Result storage", 14);
                
                memcpy(&ImpPart[pImpPart][0], &s1[0], 80);
                 pImpPart++;

                return 0;
}

/*
...............................................................................................................
. Программа void avi_lit(char *lit)                                                                           .
.                                                                                                             .
. Формирует и дописывает в в свободную строку массива ImpPart ассемблеровский эквивалент арифметического      .
. выражения - правой части оператора присваивания ЯВУ (имя переменной = аифм.выражение), когда арифметическое .
. выражение представлено литералом.                                                                           .
.                                                                                                             .
. Параметры: lit (литерал).                                                                                   .
.                                                                                                             .
.....,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
*/

void avi_lit(char *lit) {
                memset(&s1[0], ' ', 80);
                memcpy(&s1[9], "L", 1);
                memcpy(&s1[15], "R1,=F\'", 6);
                memcpy(&s1[23], lit, strlen(lit));
                memcpy(&s1[23+strlen(lit)], "\'", 1);
                memcpy(&s1[30], "Literal loading", 15);

                memcpy(&ImpPart[pImpPart][0], &s1[0], 80);
                pImpPart++;
}

/*
...............................................................................................................
. Программа int avi_ipe(char *ipe)                                                                            .
.                                                                                                             .
. Формирует и дописывает в в свободную строку массива ImpPart ассемблеровский эквивалент арифметического      .
. выражения - правой части оператора присваивания ЯВУ (имя переменной = аифм.выражение), когда арифметическое .
. выражение представлено именем переменной ipe.                                                               .
.                                                                                                             .
. Параметры: ipe (имя переменной).                                                                            .
.                                                                                                             .
. Возвращаемый результат 0 (если ipe объявлена ранее в операторе dcl) и 1 (в противном случае)                .
.                                                                                                             .
.....,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
*/

int  avi_ipe(char *ipe) {
                if (IsDclName(ipe, strlen(ipe))){
                strcpy(&ErrorMessage[0], " invalid identificator ");
                strcat(&ErrorMessage[0], ipe);
                strcat(&ErrorMessage[0], " ");
                strcat(&ErrorMessage[0], "in avi of opa\n");
                yyerror(&ErrorMessage[0]);
                return 1;
                }
                memset(&s1[0], ' ', 80);
                memcpy(&s1[9], "L", 1);
                memcpy(&s1[15], "R1,", 3);
                memcpy(&s1[20], ipe, strlen(ipe));
                memcpy(&s1[30], "Variable value loading", 22);

                memcpy(&ImpPart[pImpPart][0], &s1[0], 80);
                pImpPart++;

                return 0;
}

/*
...............................................................................................................
. Программа void avi_avi_znk_lit(char *lit)                                                                   .
.                                                                                                             .
. Формирует и дописывает в в свободную строку массива ImpPart ассемблеровский эквивалент арифметического      .
. выражения - правой части оператора присваивания ЯВУ (имя переменной = аифм.выражение), когда арифметическое .
. выражение представлено как леворекурсивное с литералом справа.                                              .
.                                                                                                             .
. Параметры: znk (знак + или -) lit (литерал).                                                                .
.                                                                                                             .
.                                                                                                             .
.....,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
*/

void avi_avi_znk_lit(char *znk, char *lit) {
                memset(&s1[0], ' ', 80);
                if(!memcmp(znk, "+", 1)) {
                 memcpy(&s1[9], "A", 1);
                 memcpy(&s1[30], "Literal\'s value adding", 22);
                }
                if(!memcmp(znk, "-", 1)) {
                 memcpy(&s1[9], "S", 1);
                 memcpy(&s1[30], "Literal\'s value substracting", 28);
                }
                memcpy(&s1[15], "RRAB,=F\'", 8);
                memcpy(&s1[23], lit, strlen(lit));
                memcpy(&s1[23+strlen(lit)], "\'", 1);

                memcpy(&ImpPart[pImpPart][0], &s1[0], 80);
                pImpPart++;
}

/*
...............................................................................................................
. Программа int avi_avi_znk_ipe(char *znk, char *ipe)                                                         .
.                                                                                                             .
. Формирует и дописывает в в свободную строку массива ImpPart ассемблеровский эквивалент арифметического      .
. выражения - правой части оператора присваивания ЯВУ (имя переменной = аифм.выражение), когда арифметическое .
. выражение представлено как леворекурсивное с именем переменной справа.                                      .
.                                                                                                             .
. Параетры: lit (литерал).                                                                                    .
.                                                                                                             .
. Возвращаемый результат 0 (если ipe объявлена ранее в операторе dcl) и 1 (в противном случае)                .
.                                                                                                             .
.....,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
*/

int  avi_avi_znk_ipe(char *znk, char *ipe) {
                if (IsDclName(ipe, strlen(ipe))){
                strcpy(&ErrorMessage[0], " invalid identificator ");
                strcat(&ErrorMessage[0], ipe);
                strcat(&ErrorMessage[0], " ");
                strcat(&ErrorMessage[0], "in avi of opa\n");
                yyerror(&ErrorMessage[0]);
                return 1;
                }
                memset(&s1[0], ' ', 80);
                if(!memcmp(znk, "+", 1)) {
                 memcpy(&s1[9], "A", 1);
                 memcpy(&s1[30], "Variable\'s value adding", 23);
                }
                if(!memcmp(znk, "-", 1)) {
                 memcpy(&s1[9], "S", 1);
                 memcpy(&s1[30], "Variable\'s value substracting", 29);
                }
                memcpy(&s1[15], "RRAB,", 5);
                memcpy(&s1[20], ipe, strlen(ipe));

                memcpy(&ImpPart[pImpPart][0], &s1[0], 80);
                pImpPart++;

                return 0;
}

int my_substr (char *ipe1, char *ipe2, char *shift, char *mask) {
    if (IsDclName(ipe1, strlen(ipe1)) || IsDclName(ipe2, strlen(ipe2))){
        strcpy(&ErrorMessage[0], " invalid identificator ");
        strcat(&ErrorMessage[0], "in my_substr\n");
        yyerror(&ErrorMessage[0]);
        return 1;
    }
    memset(&s1[0], ' ', 80);
    memcpy(&s1[9], "LH", 2);
    memcpy(&s1[15], "3,", 2);
    memcpy(&s1[20], ipe1, strlen(ipe1));
    memcpy(&s1[30], "Zagruzka peremennoy v registr", 29);
    memcpy(&ImpPart[pImpPart][0], &s1[0], 80);
     pImpPart++;
    
    memset(&s1[0], ' ', 80);
    memcpy(&s1[9], "LH", 2);
    memcpy(&s1[15], "4,", 2);
    memcpy(&s1[20], ipe2, strlen(ipe2));
    memcpy(&s1[30], "Zagruzka peremennoy v registr", 29);
    memcpy(&ImpPart[pImpPart][0], &s1[0], 80);
     pImpPart++;
     
    memset(&s1[0], ' ', 80);
    memcpy(&s1[9], "SRL", 3);
    memcpy(&s1[15], "4,", 2);
    memcpy(&s1[20], "3", 1);
    memcpy(&s1[30], "Sdvig operanda vpravo", 21);
    memcpy(&ImpPart[pImpPart][0], &s1[0], 80);
     pImpPart++;
     
    memset(&s1[0], ' ', 80);
    memcpy(&s1[9], "OR", 2);
    memcpy(&s1[15], "3,", 2);
    memcpy(&s1[20], "4", 1);
    memcpy(&s1[30], "Logicheskoye ILI registrov", 26);
    memcpy(&ImpPart[pImpPart][0], &s1[0], 80);
     pImpPart++;
     
    memset(&s1[0], ' ', 80);
    memcpy(&s1[9], "SLL", 3);
    memcpy(&s1[15], "3,", 2);
    char realShift[15];
    snprintf(realShift, 15, "%d", atoi(shift)-1);
    memcpy(&s1[20], realShift, strlen(realShift));
    memcpy(&s1[30], "Sdvig operanda vlevo", 20);
    memcpy(&ImpPart[pImpPart][0], &s1[0], 80);
     pImpPart++;
    
    memset(&s1[0], ' ', 80);
    memcpy(&s1[9], "LH", 2);
    memcpy(&s1[15], "4,", 2);
    memcpy(&s1[20], "TMP", 3);
    memcpy(&s1[30], "Zagruzka maski v reg", 20);
    memcpy(&ImpPart[pImpPart][0], &s1[0], 80);
     pImpPart++;
    
    memset(&s1[0], ' ', 80);
    memcpy(&s1[9], "NR", 2);
    memcpy(&s1[15], "3,", 2);
    memcpy(&s1[20], "4", 1);
    memcpy(&s1[30], "Logicheskoye I registrov", 24);
    memcpy(&ImpPart[pImpPart][0], &s1[0], 80);
     pImpPart++;
    
    return 0;
}

/*
***************************************************************************************************************
*                   Конец  библиотеки семантических программ                                                  *
***************************************************************************************************************
*/

/*
...............................................................................................................
. Программа int yywrap()                                                                                      .
.                                                                                                             .
. Вызывается по достижении EOF входного потока                                                                .
.                                                                                                             .
. Возвращаемый результат 0 (если работа д.б. продолжена) и 1 (в противном случае)                             .
.                                                                                                             .
.....,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
*/

int yywrap() {
 return 1;
}

/*
...............................................................................................................
. Программа int main()                                                                                        .
.                                                                                                             .
. Главная программа. Начинает работу, проводит начальную инициализацию, обращается к парсеру (yyparse) и      .
. при отсутствии ошибок разгружает результат компиляции из массива AssProg в выходной файл Results.ass,       .
. а в случае преждевременного завершения парсера - выдает аварийное сообщение                                 .
.                                                                                                             .
. Возвращаемый результат 0 (компиляция успешна) и 1 (в противном случае)                                      .
.                                                                                                             .
.....,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
 pAssProg=0;
 memset(&DclPart[0][0], ' ', 80);
 memcpy(&DclPart[0][0], "TMP      DC    BL2'111'", 23);
 memset(&DclPart[1][0], ' ', 80);
 memcpy(&DclPart[1][0], "RBASE    EQU   5", 16);
 memset(&DclPart[2][0], ' ', 80);
 memcpy(&DclPart[2][0], "RVIX     EQU   14", 17);
 pDclPart=3;
 pImpPart=0;
 //yydebug=1;
 if (!yyparse()) {
  printf ("%d\n", pDclPart);
  int fn, i;
  if ( 0 >= (fn=open("Result.ass", O_CREAT|O_RDWR|O_TRUNC, S_IRWXU | S_IRGRP | S_IWGRP))) {
   printf("\n*** error it is not impossible to open Result.ass file\n");
  }
  else {
   for (i=0; i<pAssProg; i++) {
    if (80 != write(fn, &AssProg[i][0], 80)){
     printf("\n*** error during writing Result.ass file\n");
     break;
    }
   }
   close(fn);
   printf("\n*** Compilation is successfull\n");
  }
 return 0;
 }
 else {
  printf("\n*** Compilation is not successfull\n");
 }
 return 1;
}

