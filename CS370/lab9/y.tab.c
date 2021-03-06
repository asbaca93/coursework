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
#line 1 "lab9.y"



/**********************************************************
*
*   lab9.y
*   Edited by Andrew Baca on 4/22/2018
*
*   Mods:
*      
*   Addition of a maxOffset
*   Addition of a max function
*   Addition of a String value
*   String value production rule to WRITESTMT            
*  
***********************************************************/


	/* begin specs */
#include "symtable.h"    
#include "ast.h"                    //inluded header files for ast and emit
#include "emit.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
extern int mydebug;
extern  int lineCo;
int level = 0;              //ADDITION OF 2 COUNTING INTEGERS FOR LEVEL AND OFFSET
int maxOffset;
int offset = 0;
int goffset = 0;            //GLOBAL OFFSET TO STORE OFFSET

#define max(x,y) (((x)>(y))?(x):(y))

int yylex();

void yyerror (s)  /* Called by yyparse on error */
     char *s;
{
  fprintf (stderr, "Error on line %d %s\n",lineCo, s);
}



/* Line 371 of yacc.c  */
#line 113 "y.tab.c"

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
     ID = 258,
     STRING = 259,
     NUM = 260,
     INT = 261,
     VOID = 262,
     WHILE = 263,
     IF = 264,
     THEN = 265,
     ELSE = 266,
     READ = 267,
     WRITE = 268,
     FOR = 269,
     RETURN = 270,
     LS = 271,
     GR = 272,
     EQ = 273,
     NEQ = 274,
     GREQ = 275,
     LSEQ = 276
   };
#endif
/* Tokens.  */
#define ID 258
#define STRING 259
#define NUM 260
#define INT 261
#define VOID 262
#define WHILE 263
#define IF 264
#define THEN 265
#define ELSE 266
#define READ 267
#define WRITE 268
#define FOR 269
#define RETURN 270
#define LS 271
#define GR 272
#define EQ 273
#define NEQ 274
#define GREQ 275
#define LSEQ 276



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 49 "lab9.y"

    int value;
    char * string;
    ASTnode * node;                 //added two token classes to union
    enum OPERATORS operator;


/* Line 387 of yacc.c  */
#line 206 "y.tab.c"
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
#line 234 "y.tab.c"

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   120

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNRULES -- Number of states.  */
#define YYNSTATES  118

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   276

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      25,    26,    33,    31,    27,    32,     2,    34,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    22,
       2,    30,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    23,     2,    24,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    28,     2,    29,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    18,    25,
      27,    29,    30,    31,    40,    42,    44,    46,    50,    53,
      58,    59,    65,    66,    69,    70,    73,    75,    77,    79,
      81,    83,    85,    87,    89,    92,    94,    98,   104,   112,
     118,   121,   125,   129,   133,   137,   139,   141,   146,   148,
     152,   154,   156,   158,   160,   162,   164,   166,   170,   172,
     174,   176,   180,   182,   184,   188,   190,   192,   194,   199,
     201,   202,   204
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      36,     0,    -1,    37,    -1,    38,    -1,    38,    37,    -1,
      39,    -1,    41,    -1,    40,     3,    22,    -1,    40,     3,
      23,     5,    24,    22,    -1,     6,    -1,     7,    -1,    -1,
      -1,    40,     3,    25,    42,    44,    43,    26,    47,    -1,
       7,    -1,    45,    -1,    46,    -1,    46,    27,    45,    -1,
      40,     3,    -1,    40,     3,    23,    24,    -1,    -1,    28,
      48,    49,    50,    29,    -1,    -1,    49,    39,    -1,    -1,
      51,    50,    -1,    52,    -1,    47,    -1,    54,    -1,    55,
      -1,    53,    -1,    56,    -1,    57,    -1,    58,    -1,    59,
      22,    -1,    22,    -1,    60,    30,    52,    -1,     9,    25,
      59,    26,    51,    -1,     9,    25,    59,    26,    51,    11,
      51,    -1,     8,    25,    59,    26,    51,    -1,    15,    22,
      -1,    15,    59,    22,    -1,    12,    60,    22,    -1,    13,
      59,    22,    -1,    13,     4,    22,    -1,    61,    -1,     3,
      -1,     3,    23,    59,    24,    -1,    63,    -1,    61,    62,
      63,    -1,    21,    -1,    16,    -1,    17,    -1,    20,    -1,
      18,    -1,    19,    -1,    65,    -1,    63,    64,    65,    -1,
      31,    -1,    32,    -1,    67,    -1,    65,    66,    67,    -1,
      33,    -1,    34,    -1,    25,    59,    26,    -1,     5,    -1,
      60,    -1,    68,    -1,     3,    25,    69,    26,    -1,    70,
      -1,    -1,    59,    -1,    59,    27,    70,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    66,    66,    68,    69,    72,    73,    75,    94,   113,
     114,   119,   133,   117,   160,   161,   163,   164,   167,   182,
     195,   195,   214,   215,   220,   221,   226,   227,   228,   229,
     230,   231,   232,   233,   235,   242,   244,   255,   259,   265,
     269,   270,   277,   280,   282,   288,   290,   311,   336,   337,
     353,   354,   355,   356,   357,   358,   360,   361,   377,   378,
     380,   381,   397,   398,   400,   401,   404,   405,   408,   440,
     441,   443,   451
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "STRING", "NUM", "INT", "VOID",
  "WHILE", "IF", "THEN", "ELSE", "READ", "WRITE", "FOR", "RETURN", "LS",
  "GR", "EQ", "NEQ", "GREQ", "LSEQ", "';'", "'['", "']'", "'('", "')'",
  "','", "'{'", "'}'", "'='", "'+'", "'-'", "'*'", "'/'", "$accept", "P",
  "DL", "D", "VARDEC", "typespec", "FUNDEC", "$@1", "$@2", "params",
  "paramlist", "param", "compoundstmt", "$@3", "localdeclarations",
  "statementlist", "stmt", "expressionstmt", "assignmentstmt",
  "selectionstmt", "iterationstmt", "returnstmt", "readstmt", "writestmt",
  "expr", "var", "simpleexpr", "relop", "additiveexpr", "addop", "term",
  "multop", "factor", "call", "args", "arglist", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,    59,    91,    93,    40,    41,    44,   123,   125,
      61,    43,    45,    42,    47
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    35,    36,    37,    37,    38,    38,    39,    39,    40,
      40,    42,    43,    41,    44,    44,    45,    45,    46,    46,
      48,    47,    49,    49,    50,    50,    51,    51,    51,    51,
      51,    51,    51,    51,    52,    52,    53,    54,    54,    55,
      56,    56,    57,    58,    58,    59,    60,    60,    61,    61,
      62,    62,    62,    62,    62,    62,    63,    63,    64,    64,
      65,    65,    66,    66,    67,    67,    67,    67,    68,    69,
      69,    70,    70
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     6,     1,
       1,     0,     0,     8,     1,     1,     1,     3,     2,     4,
       0,     5,     0,     2,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     3,     5,     7,     5,
       2,     3,     3,     3,     3,     1,     1,     4,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     3,     1,     1,     3,     1,     1,     1,     4,     1,
       0,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     9,    10,     0,     2,     3,     5,     0,     6,     1,
       4,     0,     7,     0,    11,     0,     0,     0,    10,     0,
      12,    15,    16,     8,    18,     0,     0,     0,     0,    17,
      19,    20,    13,    22,    24,    46,    65,     0,     0,     0,
       0,     0,    35,     0,    23,     0,    27,     0,    24,    26,
      30,    28,    29,    31,    32,    33,     0,    66,    45,    48,
      56,    60,    67,     0,    70,     0,     0,    46,     0,     0,
       0,    66,    40,     0,     0,     0,    21,    25,    34,     0,
      51,    52,    54,    55,    53,    50,     0,    58,    59,     0,
      62,    63,     0,     0,    71,     0,    69,     0,     0,    42,
      44,    43,    41,    64,    36,    49,    57,    61,    47,     0,
      68,     0,     0,    72,    39,    37,     0,    38
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,     6,     7,     8,    16,    25,    20,
      21,    22,    46,    33,    34,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    71,    58,    86,    59,    89,
      60,    92,    61,    62,    95,    96
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -50
static const yytype_int8 yypact[] =
{
      16,   -50,   -50,     3,   -50,    16,   -50,     8,   -50,   -50,
     -50,    58,   -50,     1,   -50,    12,    62,    24,    30,    57,
     -50,   -50,    45,   -50,    43,    63,    16,    66,    47,   -50,
     -50,   -50,   -50,   -50,    25,   -13,   -50,    67,    68,    85,
       4,    49,   -50,    10,   -50,    88,   -50,    65,    36,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,    73,    69,     0,    11,
      51,   -50,   -50,    10,    10,    10,    10,    74,    76,    78,
      79,   -50,   -50,    80,    70,    64,   -50,   -50,   -50,    54,
     -50,   -50,   -50,   -50,   -50,   -50,    10,   -50,   -50,    10,
     -50,   -50,    10,    81,    77,    82,   -50,    83,    84,   -50,
     -50,   -50,   -50,   -50,   -50,    11,    51,   -50,   -50,    10,
     -50,    36,    36,   -50,   -50,    92,    36,   -50
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -50,   -50,   101,   -50,    86,    39,   -50,   -50,   -50,   -50,
      87,   -50,    89,   -50,   -50,    59,   -49,    32,   -50,   -50,
     -50,   -50,   -50,   -50,   -39,   -34,   -50,   -50,    26,   -50,
      27,   -50,    22,   -50,   -50,     6
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -15
static const yytype_int8 yytable[] =
{
      57,    70,    73,     9,    74,    68,    15,    35,    69,    36,
      63,    11,    64,    35,    57,    36,    80,    81,    82,    83,
      84,    85,     1,     2,    93,    94,    97,    98,    35,    43,
      36,     1,     2,    37,    38,    43,    17,    39,    40,    35,
      41,    36,    87,    88,    37,    38,    23,    42,    39,    40,
      43,    41,    35,    31,    36,    19,   -14,    35,    42,    36,
      24,    43,   114,   115,    31,    19,    27,   117,     1,    18,
      94,    72,    26,    45,    43,    31,    42,    57,    57,    43,
      12,    13,    57,    14,    90,    91,    12,    13,    67,    28,
      30,    75,    65,    66,    76,    78,   103,    63,    99,    79,
     100,   101,   102,   116,   109,   108,    10,    77,   110,   111,
     112,   104,   105,    29,   107,   113,   106,    32,     0,     0,
      44
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-50)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
      34,    40,    41,     0,    43,    39,     5,     3,     4,     5,
      23,     3,    25,     3,    48,     5,    16,    17,    18,    19,
      20,    21,     6,     7,    63,    64,    65,    66,     3,    25,
       5,     6,     7,     8,     9,    25,    24,    12,    13,     3,
      15,     5,    31,    32,     8,     9,    22,    22,    12,    13,
      25,    15,     3,    28,     5,    16,    26,     3,    22,     5,
       3,    25,   111,   112,    28,    26,    23,   116,     6,     7,
     109,    22,    27,    34,    25,    28,    22,   111,   112,    25,
      22,    23,   116,    25,    33,    34,    22,    23,     3,    26,
      24,     3,    25,    25,    29,    22,    26,    23,    22,    30,
      22,    22,    22,    11,    27,    24,     5,    48,    26,    26,
      26,    79,    86,    26,    92,   109,    89,    28,    -1,    -1,
      34
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,    36,    37,    38,    39,    40,    41,     0,
      37,     3,    22,    23,    25,     5,    42,    24,     7,    40,
      44,    45,    46,    22,     3,    43,    27,    23,    26,    45,
      24,    28,    47,    48,    49,     3,     5,     8,     9,    12,
      13,    15,    22,    25,    39,    40,    47,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    63,
      65,    67,    68,    23,    25,    25,    25,     3,    60,     4,
      59,    60,    22,    59,    59,     3,    29,    50,    22,    30,
      16,    17,    18,    19,    20,    21,    62,    31,    32,    64,
      33,    34,    66,    59,    59,    69,    70,    59,    59,    22,
      22,    22,    22,    26,    52,    63,    65,    67,    24,    27,
      26,    26,    26,    70,    51,    51,    11,    51
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
        case 2:
/* Line 1792 of yacc.c  */
#line 66 "lab9.y"
    {program = (yyvsp[(1) - (1)].node);}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 68 "lab9.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 69 "lab9.y"
    {(yyvsp[(1) - (2)].node)->next=(yyvsp[(2) - (2)].node);                   //next in list
                                            (yyval.node)= (yyvsp[(1) - (2)].node);}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 72 "lab9.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 73 "lab9.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 75 "lab9.y"
    {	struct SymTab *p;
                                                if(Search((yyvsp[(2) - (3)].string), level, 0) == NULL)        //CHECK IF EXIST
                                                {
							
					     	                         (yyval.node)=ASTCreateNode(VARDEC);     //vardec node
                                                     (yyval.node)->symbol = Insert((yyvsp[(2) - (3)].string), (yyvsp[(1) - (3)].operator), 0, level, 1, offset, NULL);    //INSERT IF NOT THERE
                                             	     (yyval.node)->operator=(yyvsp[(1) - (3)].operator);              //with companion values
                                             	     (yyval.node)->name=(yyvsp[(2) - (3)].string);
                                                     (yyval.node)->istype = (yyvsp[(1) - (3)].operator);
                                                     offset += 1;
					    	                    }
                                                else
                                                {
                                                yyerror((yyvsp[(2) - (3)].string));                        //BARF
                                                yyerror("Symbol already used");
                                                exit(1);
                                                }
					                        }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 94 "lab9.y"
    {   struct SymTab *p;
                                                if(Search((yyvsp[(2) - (6)].string), level, 0)== NULL)             //CHECK IF EXIST
                                                {
                                                    (yyval.node)=ASTCreateNode(VARDEC); 
                                                    (yyval.node)->operator=(yyvsp[(1) - (6)].operator);
                                                    (yyval.node)->istype = (yyvsp[(1) - (6)].operator);
                                                    (yyval.node)->symbol = Insert((yyvsp[(2) - (6)].string), (yyvsp[(1) - (6)].operator), 2, level, (yyvsp[(4) - (6)].value), offset, NULL);        //INSERT
                                                    (yyval.node)->name=(yyvsp[(2) - (6)].string);
                                                    (yyval.node)->value=(yyvsp[(4) - (6)].value);
                                                    offset += (yyvsp[(4) - (6)].value);
                                                }
                                                else{                                   //BARF
                                                    yyerror((yyvsp[(2) - (6)].string));
                                                    yyerror("symbol already used ");
                                                    (yyval.node) = NULL;
                                                }
                                            }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 113 "lab9.y"
    {(yyval.operator) = INTTYPE;}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 114 "lab9.y"
    {(yyval.operator) = VOIDTYPE;}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 119 "lab9.y"
    {
                                                if(Search((yyvsp[(2) - (3)].string), level, 0) == NULL){           //CHECK IF EXIST
                                                    Insert((yyvsp[(2) - (3)].string), (yyvsp[(1) - (3)].operator), 1, level, 0, 2, 0);
                                                    goffset = offset;
                                                    offset = 2;
							maxOffset = offset;
                                                }
                                                else{                                       //BARF
                                                    yyerror((yyvsp[(2) - (3)].string));
                                                    yyerror("name already used");
                                                    exit(1);
                                                }
                                        }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 133 "lab9.y"
    {
                                           (Search((yyvsp[(2) - (5)].string), 0, 0))->fparms = (yyvsp[(5) - (5)].node);
                                            
                                        }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 143 "lab9.y"
    {
                                                         (yyval.node)=ASTCreateNode(FUNCTDEC);        //create function node
                                                         (yyval.node)->name=(yyvsp[(2) - (8)].string);
                                                         (yyval.node)->s1 = (yyvsp[(5) - (8)].node);
                                                         (yyval.node)->operator = (yyvsp[(1) - (8)].operator);
                                                         (yyval.node)->symbol = Search((yyvsp[(2) - (8)].string), 0, 0);     //INSERT 
                                                         (yyval.node)->right = (yyvsp[(8) - (8)].node);
                                                         (yyval.node)->left = (yyvsp[(5) - (8)].node);
                                                         
                                                         offset -= Delete(1);   //reset level and offset after block
                                                         level = 0;
                                                         offset = goffset;
							 (yyval.node)->value = maxOffset;
							 (yyval.node)->symbol->mysize = maxOffset;
                                  }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 160 "lab9.y"
    {(yyval.node) = NULL;}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 161 "lab9.y"
    {(yyval.node) = (yyvsp[(1) - (1)].node);}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 163 "lab9.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 164 "lab9.y"
    {(yyvsp[(1) - (3)].node)->next=(yyvsp[(3) - (3)].node);               //list of parameters
                                                 (yyval.node) = (yyvsp[(1) - (3)].node);}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 167 "lab9.y"
    {       //INSERT PARAMS 
                                                    if(Search((yyvsp[(2) - (2)].string), level + 1, 0) == NULL)
                                                    {
                                                        (yyval.node)=ASTCreateNode(PARAM);       //create parameter node
                                                        (yyval.node)->name=(yyvsp[(2) - (2)].string);                   //and store value if need be
                                                        (yyval.node)->operator = (yyvsp[(1) - (2)].operator);
                                                        (yyval.node)->istype = (yyvsp[(1) - (2)].operator);
                                                        (yyval.node)->symbol = Insert((yyvsp[(2) - (2)].string), (yyvsp[(1) - (2)].operator), 0, level + 1, 1, offset, NULL);
                                                         mydebug && printf("in param, insert %s %d\n", (yyvsp[(2) - (2)].string), level + 1);
                                                         if (mydebug) Display();
                                                        offset += 1;
                                                        (yyval.node)->value = 0;
                                                    }
                                                }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 182 "lab9.y"
    {
                                                    if(Search((yyvsp[(2) - (4)].string), level + 1, 0) == NULL)
                                                    {
                                                        (yyval.node)=ASTCreateNode(PARAM);
                                                        (yyval.node)->name=(yyvsp[(2) - (4)].string);
                                                        (yyval.node)->operator = (yyvsp[(1) - (4)].operator);
                                                        (yyval.node)->istype = (yyvsp[(1) - (4)].operator);
                                                        (yyval.node)->symbol = Insert((yyvsp[(2) - (4)].string), (yyvsp[(1) - (4)].operator), 2, level + 1, 1, offset, NULL);
                                                        offset += 1;
                                                        (yyval.node)->value = -1;
                                                 }
                                            }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 195 "lab9.y"
    {level++;
                                                             mydebug && printf("statement block level is %d\n", level);
                                                            }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 199 "lab9.y"
    { 
							                                  (yyval.node)=ASTCreateNode(BLOCK);          //create block node
                                                              if ((yyvsp[(3) - (5)].node)==NULL){ 
                                                                  (yyval.node)->right=(yyvsp[(4) - (5)].node);
                                                                  }
                                                              else{  
                                                                (yyval.node)->left=(yyvsp[(3) - (5)].node);
                                                                (yyval.node)->right=(yyvsp[(4) - (5)].node);
                                                                 }
                                                             Display();                 //clear level and offset
							     maxOffset = max(maxOffset, offset);
                                                             offset -= Delete(level);
							                                 level -= 1;
                                                             }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 214 "lab9.y"
    {(yyval.node)=NULL;}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 215 "lab9.y"
    {
                                                        (yyvsp[(2) - (2)].node)->next=(yyvsp[(1) - (2)].node);            //next list local decs
                                                        (yyval.node)=(yyvsp[(2) - (2)].node);
                                                 }
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 220 "lab9.y"
    {(yyval.node)=NULL;}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 221 "lab9.y"
    {
                                                     (yyvsp[(1) - (2)].node)->next=(yyvsp[(2) - (2)].node);               //statement list
                                                     (yyval.node) = (yyvsp[(1) - (2)].node);
                                                 }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 226 "lab9.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 227 "lab9.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 228 "lab9.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 229 "lab9.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 230 "lab9.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 231 "lab9.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 232 "lab9.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 233 "lab9.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 235 "lab9.y"
    { (yyval.node)=ASTCreateNode(EXPRSTMT);          //exprstmt node
                                   (yyval.node)->right=(yyvsp[(1) - (2)].node);
                                   (yyval.node)->istype = (yyvsp[(1) - (2)].node)->istype;
				   (yyval.node)->name = CreateTemp();
				   (yyval.node)->symbol = Insert((yyval.node)->name, (yyval.node)->istype, 0, level, 1, offset, NULL);
				   offset++;
                                 }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 242 "lab9.y"
    { (yyval.node)=NULL;}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 244 "lab9.y"
    {
                                                        (yyval.node)=ASTCreateNode(ASSIGN);      //assignmnet statement node
                                                        if(((yyvsp[(1) - (3)].node)->istype == VOIDTYPE)||((yyvsp[(1) - (3)].node)->istype != (yyvsp[(3) - (3)].node) ->istype))       //typecheck
                                                        {
                                                            yyerror("type error in assignment statement");
                                                            exit(1);
                                                        }
                                                        (yyval.node)->right=(yyvsp[(1) - (3)].node);
                                                        (yyval.node)->s1=(yyvsp[(3) - (3)].node);
                                                        }
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 255 "lab9.y"
    { (yyval.node)=ASTCreateNode(IFSTMT);     //if statement node
                                                  (yyval.node)->right=(yyvsp[(3) - (5)].node);                 //with possible else
                                                  (yyval.node)->s1=(yyvsp[(5) - (5)].node);
                                                  (yyval.node)->s2=NULL;}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 260 "lab9.y"
    {(yyval.node)=ASTCreateNode(IFSTMT);
                                                  (yyval.node)->right=(yyvsp[(3) - (7)].node);
                                                  (yyval.node)->s1=(yyvsp[(5) - (7)].node);
                                                  (yyval.node)->s2=(yyvsp[(7) - (7)].node);}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 265 "lab9.y"
    {(yyval.node)=ASTCreateNode(WHILESTMT);      //while statement node
                                                (yyval.node)->right=(yyvsp[(3) - (5)].node);
                                                (yyval.node)->s1=(yyvsp[(5) - (5)].node);}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 269 "lab9.y"
    {(yyval.node)=ASTCreateNode(RET);}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 270 "lab9.y"
    {(yyval.node)=ASTCreateNode(RET);
                                                (yyval.node)->right=(yyvsp[(2) - (3)].node);
						(yyval.node)->name= CreateTemp();
                                                (yyval.node)->symbol = Insert((yyval.node)->name, INTTYPE, 0, level, 1, offset, NULL);
                                                offset++;
						}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 277 "lab9.y"
    {(yyval.node)=ASTCreateNode(READSTMT);            //reas statement
                                             (yyval.node)->right=(yyvsp[(2) - (3)].node);}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 280 "lab9.y"
    {(yyval.node)=ASTCreateNode(WRITESTMT);           //write statement
                                             (yyval.node)->right=(yyvsp[(2) - (3)].node);}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 282 "lab9.y"
    {(yyval.node)=ASTCreateNode(WRITESTMT); 
					     (yyval.node)->string = CreateTemp();
					     (yyval.node)->name = (yyvsp[(2) - (3)].string);

					    }
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 288 "lab9.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 290 "lab9.y"
    {struct SymbTab *p;
                                                if((p = Search((yyvsp[(1) - (1)].string), level, 1)) != NULL)      //inherit types
                                                {
                                                    (yyval.node)=ASTCreateNode(IDENT);               //id with possible expression
                                                    (yyval.node)->name=(yyvsp[(1) - (1)].string);
                                                    (yyval.node)->symbol = p;
                                                    (yyval.node)->istype = p->Type;
                                                    if(p->IsAFunc == 2)
                                                    {
                                                        yyerror((yyvsp[(1) - (1)].string));
                                                        yyerror("Variable is an array, syntax error");
                                                        exit(1);
                                                    }
                                                }
                                                else
                                                {
                                                yyerror((yyvsp[(1) - (1)].string));
                                                yyerror("undeclared variable");
                                                exit(1);
                                                }
                                            }
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 311 "lab9.y"
    {struct SymbTab *p;
                                                if((p = Search((yyvsp[(1) - (4)].string), level, 1)) != NULL)
                                                {
                                                    (yyval.node)=ASTCreateNode(IDENT);
	                                                (yyval.node)->name=(yyvsp[(1) - (4)].string);
		                                            (yyval.node)->right=(yyvsp[(3) - (4)].node);
                                                    //$$->symbol = p;
                                                    (yyval.node)->istype = p->Type;
                                                    if(p->IsAFunc == 2)
                                                        (yyval.node)->symbol = p;
                                                    else{  
                                                        printf("%d\n", p->IsAFunc);
                                                        yyerror((yyvsp[(1) - (4)].string));
                                                        yyerror("Syntax error, not an array");
                                                        exit(1);
                                                    }
                                                }
                                                else
                                                {
                                                    yyerror((yyvsp[(1) - (4)].string));
                                                    yyerror("Undeclared Variable");
                                                    exit(1);
                                                }
                                            }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 336 "lab9.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 337 "lab9.y"
    {
                                                    if((yyvsp[(1) - (3)].node)->istype != (yyvsp[(3) - (3)].node)->istype)                //typecheck
                                                    {
                                                        yyerror("Term Types mismatch");
                                                        exit(1);
                                                    }
                                                    (yyval.node)=ASTCreateNode(EXPR);        //siple expression
                                                     (yyval.node)->left=(yyvsp[(1) - (3)].node);                   //left and right with operator
                                                     (yyval.node)->right=(yyvsp[(3) - (3)].node);
                                                     (yyval.node)->operator=(yyvsp[(2) - (3)].operator);
                                                     (yyval.node)->istype = (yyvsp[(1) - (3)].node)->istype;
                                                     (yyval.node)->name = CreateTemp();
                                                     (yyval.node)->symbol = Insert((yyval.node)->name, INTTYPE, 0, level, 1, offset, NULL);
                                                     offset++;
                                                    }
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 353 "lab9.y"
    {(yyval.operator)=LSEQUAL;}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 354 "lab9.y"
    {(yyval.operator)=LESS;}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 355 "lab9.y"
    {(yyval.operator)=GREATER;}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 356 "lab9.y"
    {(yyval.operator)=GREQUAL;}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 357 "lab9.y"
    {(yyval.operator)=EQUAL;}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 358 "lab9.y"
    {(yyval.operator)=NEQUAL;}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 360 "lab9.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 361 "lab9.y"
    {
                                                 if((yyvsp[(1) - (3)].node)->istype != (yyvsp[(3) - (3)].node)->istype)           //typecheck
                                                 {
                                                    yyerror("Term types mismatch");
                                                    exit(1);
                                                 }
                                                    (yyval.node)=ASTCreateNode(EXPR);        //left, right, operator
                                                    (yyval.node)->left=(yyvsp[(1) - (3)].node);
                                                    (yyval.node)->right=(yyvsp[(3) - (3)].node);
                                                    (yyval.node)->istype = (yyvsp[(1) - (3)].node)->istype;
                                                    (yyval.node)->operator=(yyvsp[(2) - (3)].operator);
                                                    (yyval.node)->name = CreateTemp();
                                                    (yyval.node)->symbol = Insert((yyval.node)->name, INTTYPE, 0, level, 1, offset, NULL);
                                                    offset++;
                                                }
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 377 "lab9.y"
    {(yyval.operator)=PLUS;}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 378 "lab9.y"
    {(yyval.operator)=MINUS;}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 380 "lab9.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 381 "lab9.y"
    {
                                                 if((yyvsp[(1) - (3)].node)->istype != (yyvsp[(3) - (3)].node)->istype)           //typecheck
                                                 {
                                                    yyerror("Term types mismatch");
                                                    exit(1);
                                                 }
                                                    (yyval.node)=ASTCreateNode(EXPR);          //term op
                                                    (yyval.node)->left=(yyvsp[(1) - (3)].node);
                                                    (yyval.node)->right=(yyvsp[(3) - (3)].node);
                                                    (yyval.node)->istype = (yyvsp[(1) - (3)].node)->istype;
                                                    (yyval.node)->operator=(yyvsp[(2) - (3)].operator);
                                                    (yyval.node)->name = CreateTemp();
                                                    (yyval.node)->symbol = Insert((yyval.node)->name, INTTYPE, 0, level, 1, offset, NULL);
                                                    offset++;
                                                }
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 397 "lab9.y"
    {(yyval.operator)=TIMES;}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 398 "lab9.y"
    {(yyval.operator)=DIVIDE;}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 400 "lab9.y"
    {(yyval.node)=(yyvsp[(2) - (3)].node);}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 401 "lab9.y"
    {(yyval.node)=ASTCreateNode(NUMBER);
                                                (yyval.node)->value=(yyvsp[(1) - (1)].value);
                                                (yyval.node)->istype = INTTYPE;}
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 404 "lab9.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 67:
/* Line 1792 of yacc.c  */
#line 405 "lab9.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 68:
/* Line 1792 of yacc.c  */
#line 408 "lab9.y"
    {struct SymbTab *p;
                                                 p = Search((yyvsp[(1) - (4)].string), 0, 0);
                                                 if(p == NULL){
                                                    yyerror((yyvsp[(1) - (4)].string));
                                                    yyerror("not defined");
                                                    exit(1);
                                                 }
                                                 if(p->IsAFunc != 1)     //check if function
                                                 {
                                                       yyerror((yyvsp[(1) - (4)].string));
                                                       yyerror("Function is not a function");
                                                       exit(1);
                                                 }
                                                        
                                                    
                                                 if(CompareFormals(p->fparms, (yyvsp[(3) - (4)].node)) != 1)      //compare params
                                                 {
                                                        yyerror((yyvsp[(1) - (4)].string));
                                                        yyerror("Parameters do not match");
                                                        exit(1);
                                                 }
                                                    
                                                 (yyval.node)=ASTCreateNode(CALL);        //call node
                                                 (yyval.node)->right=(yyvsp[(3) - (4)].node);
                                                 (yyval.node)->istype = p->Type;
                                                 (yyval.node)->name=(yyvsp[(1) - (4)].string);
                                                 (yyval.node)->symbol = p;
						 (yyval.node)->value = p->mysize;
                                                 }
    break;

  case 69:
/* Line 1792 of yacc.c  */
#line 440 "lab9.y"
    {(yyval.node)=(yyvsp[(1) - (1)].node);}
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 441 "lab9.y"
    {(yyval.node)=NULL;}
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 443 "lab9.y"
    {   (yyval.node)=ASTCreateNode(ARGLIST);        //arglist node
                                                    (yyval.node)->name = CreateTemp();
                                                    (yyval.node)->symbol = Insert((yyval.node)->name, INTTYPE, 0, level, 1, offset, NULL);
                                                    offset++;
                                                    (yyval.node)->s1= (yyvsp[(1) - (1)].node);
                                                    (yyval.node)->istype = (yyvsp[(1) - (1)].node)->istype;
                                                    (yyval.node)->next = NULL;
                                                }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 451 "lab9.y"
    {    (yyval.node)=ASTCreateNode(ARGLIST);
                                                    (yyval.node)->name= CreateTemp();
                                                    (yyval.node)->symbol = Insert((yyval.node)->name, INTTYPE, 0, level, 1, offset, NULL);
                                                    offset++;
                                                    (yyval.node)->istype = (yyvsp[(1) - (3)].node)->istype;
                                                    (yyval.node)->next = (yyvsp[(3) - (3)].node);
                                                    (yyval.node)->s1=(yyvsp[(1) - (3)].node);
                                               }
    break;


/* Line 1792 of yacc.c  */
#line 2231 "y.tab.c"
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
#line 460 "lab9.y"
	/* end of rules, start of program */

int main(int argv, char * argc[])
{ 
  int fileFlag = 0;
  int i = 0;
  FILE *fp;
  printf("%d\n\n\n", argv);
  while( i < argv){
	if(strcmp(argc[i], "-d") == 0)
		mydebug = 1;
	if((strcmp(argc[i], "-o") == 0)){
		fp = fopen(argc[i+1], "wb");
		fileFlag = 1;
   		yyparse();
		ASTemit(program, fp);
		fclose(fp);

	 /* this is where we can do things with the AST like print it or process it */
	}
	i++;
	
   } 

  fprintf(stderr,"\nthe input has been syntactically checked\n\n");
  if(mydebug) ASTprint(0,program);  /* this is where we can do things with the AST like print it or process it */

  //Display();
  return(0);
} 
