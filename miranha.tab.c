/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "miranha.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    int yylex();
    int yyerror(char *s);
    FILE* outputFile;
    extern FILE *yyin;
    extern char* yytext;
    extern int lineNumber;
    FILE* tokenDebug;

#line 84 "miranha.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "miranha.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_INT = 3,                      /* T_INT  */
  YYSYMBOL_T_FLOAT = 4,                    /* T_FLOAT  */
  YYSYMBOL_T_CHAR = 5,                     /* T_CHAR  */
  YYSYMBOL_T_SCAN = 6,                     /* T_SCAN  */
  YYSYMBOL_T_PRINT = 7,                    /* T_PRINT  */
  YYSYMBOL_T_IF = 8,                       /* T_IF  */
  YYSYMBOL_T_ELSE = 9,                     /* T_ELSE  */
  YYSYMBOL_T_ELSEIF = 10,                  /* T_ELSEIF  */
  YYSYMBOL_T_SWITCH = 11,                  /* T_SWITCH  */
  YYSYMBOL_T_CASE = 12,                    /* T_CASE  */
  YYSYMBOL_T_DEFAULT = 13,                 /* T_DEFAULT  */
  YYSYMBOL_T_CONTINUE = 14,                /* T_CONTINUE  */
  YYSYMBOL_T_BREAK = 15,                   /* T_BREAK  */
  YYSYMBOL_T_WHILE = 16,                   /* T_WHILE  */
  YYSYMBOL_T_FOR = 17,                     /* T_FOR  */
  YYSYMBOL_INT_CONST = 18,                 /* INT_CONST  */
  YYSYMBOL_FLOAT_CONST = 19,               /* FLOAT_CONST  */
  YYSYMBOL_CHAR_CONST = 20,                /* CHAR_CONST  */
  YYSYMBOL_STRING_CONST = 21,              /* STRING_CONST  */
  YYSYMBOL_PLUS_OP = 22,                   /* PLUS_OP  */
  YYSYMBOL_MINUS_OP = 23,                  /* MINUS_OP  */
  YYSYMBOL_MULT_OP = 24,                   /* MULT_OP  */
  YYSYMBOL_DIV_OP = 25,                    /* DIV_OP  */
  YYSYMBOL_MOD_OP = 26,                    /* MOD_OP  */
  YYSYMBOL_EQ_OP = 27,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 28,                     /* NE_OP  */
  YYSYMBOL_GE_OP = 29,                     /* GE_OP  */
  YYSYMBOL_LE_OP = 30,                     /* LE_OP  */
  YYSYMBOL_GT_OP = 31,                     /* GT_OP  */
  YYSYMBOL_LT_OP = 32,                     /* LT_OP  */
  YYSYMBOL_AND_OP = 33,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 34,                     /* OR_OP  */
  YYSYMBOL_NOT_OP = 35,                    /* NOT_OP  */
  YYSYMBOL_ASSIGN_OP = 36,                 /* ASSIGN_OP  */
  YYSYMBOL_SEMICOLON = 37,                 /* SEMICOLON  */
  YYSYMBOL_COLON = 38,                     /* COLON  */
  YYSYMBOL_COMMA = 39,                     /* COMMA  */
  YYSYMBOL_LPAREN = 40,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 41,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 42,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 43,                    /* RBRACE  */
  YYSYMBOL_ID = 44,                        /* ID  */
  YYSYMBOL_YYACCEPT = 45,                  /* $accept  */
  YYSYMBOL_S = 46,                         /* S  */
  YYSYMBOL_DECL = 47,                      /* DECL  */
  YYSYMBOL_48_1 = 48,                      /* $@1  */
  YYSYMBOL_TIPO = 49,                      /* TIPO  */
  YYSYMBOL_CMD = 50,                       /* CMD  */
  YYSYMBOL_51_2 = 51,                      /* $@2  */
  YYSYMBOL_SE = 52,                        /* SE  */
  YYSYMBOL_53_3 = 53,                      /* $@3  */
  YYSYMBOL_54_4 = 54,                      /* $@4  */
  YYSYMBOL_OTHER = 55,                     /* OTHER  */
  YYSYMBOL_ELIF = 56,                      /* ELIF  */
  YYSYMBOL_57_5 = 57,                      /* $@5  */
  YYSYMBOL_58_6 = 58,                      /* $@6  */
  YYSYMBOL_ELSE = 59,                      /* ELSE  */
  YYSYMBOL_60_7 = 60,                      /* $@7  */
  YYSYMBOL_COND = 61,                      /* COND  */
  YYSYMBOL_62_8 = 62,                      /* $@8  */
  YYSYMBOL_63_9 = 63,                      /* $@9  */
  YYSYMBOL_ENQUANTO = 64,                  /* ENQUANTO  */
  YYSYMBOL_65_10 = 65,                     /* $@10  */
  YYSYMBOL_66_11 = 66,                     /* $@11  */
  YYSYMBOL_PARA = 67,                      /* PARA  */
  YYSYMBOL_68_12 = 68,                     /* $@12  */
  YYSYMBOL_69_13 = 69,                     /* $@13  */
  YYSYMBOL_70_14 = 70,                     /* $@14  */
  YYSYMBOL_71_15 = 71,                     /* $@15  */
  YYSYMBOL_ITERADOR = 72,                  /* ITERADOR  */
  YYSYMBOL_EXPR = 73,                      /* EXPR  */
  YYSYMBOL_74_16 = 74,                     /* $@16  */
  YYSYMBOL_75_17 = 75,                     /* $@17  */
  YYSYMBOL_76_18 = 76,                     /* $@18  */
  YYSYMBOL_OP = 77,                        /* OP  */
  YYSYMBOL_RELAT_OP = 78,                  /* RELAT_OP  */
  YYSYMBOL_ARITH_OP = 79,                  /* ARITH_OP  */
  YYSYMBOL_NUM = 80,                       /* NUM  */
  YYSYMBOL_CASOS = 81,                     /* CASOS  */
  YYSYMBOL_82_19 = 82,                     /* $@19  */
  YYSYMBOL_83_20 = 83,                     /* $@20  */
  YYSYMBOL_84_21 = 84,                     /* $@21  */
  YYSYMBOL_LE = 85,                        /* LE  */
  YYSYMBOL_86_22 = 86,                     /* $@22  */
  YYSYMBOL_ESCREVE = 87,                   /* ESCREVE  */
  YYSYMBOL_88_23 = 88,                     /* $@23  */
  YYSYMBOL_VARLIST = 89,                   /* VARLIST  */
  YYSYMBOL_90_24 = 90,                     /* $@24  */
  YYSYMBOL_PARAM = 91,                     /* PARAM  */
  YYSYMBOL_92_25 = 92                      /* $@25  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  43
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   354

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  151

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   299


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    38,    38,    38,    38,    41,    44,    43,    49,    51,
      53,    57,    58,    59,    60,    61,    63,    65,    67,    68,
      70,    69,    76,    78,    75,    81,    82,    82,    86,    88,
      85,    94,    93,    99,   101,    98,   107,   109,   106,   114,
     116,   118,   120,   113,   124,   124,   128,   127,   130,   132,
     131,   135,   134,   138,   139,   143,   143,   146,   148,   150,
     152,   154,   156,   158,   160,   162,   166,   168,   170,   172,
     174,   178,   180,   182,   187,   189,   186,   192,   191,   194,
     198,   197,   204,   203,   208,   211,   210,   214,   217,   216
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "T_INT", "T_FLOAT",
  "T_CHAR", "T_SCAN", "T_PRINT", "T_IF", "T_ELSE", "T_ELSEIF", "T_SWITCH",
  "T_CASE", "T_DEFAULT", "T_CONTINUE", "T_BREAK", "T_WHILE", "T_FOR",
  "INT_CONST", "FLOAT_CONST", "CHAR_CONST", "STRING_CONST", "PLUS_OP",
  "MINUS_OP", "MULT_OP", "DIV_OP", "MOD_OP", "EQ_OP", "NE_OP", "GE_OP",
  "LE_OP", "GT_OP", "LT_OP", "AND_OP", "OR_OP", "NOT_OP", "ASSIGN_OP",
  "SEMICOLON", "COLON", "COMMA", "LPAREN", "RPAREN", "LBRACE", "RBRACE",
  "ID", "$accept", "S", "DECL", "$@1", "TIPO", "CMD", "$@2", "SE", "$@3",
  "$@4", "OTHER", "ELIF", "$@5", "$@6", "ELSE", "$@7", "COND", "$@8",
  "$@9", "ENQUANTO", "$@10", "$@11", "PARA", "$@12", "$@13", "$@14",
  "$@15", "ITERADOR", "EXPR", "$@16", "$@17", "$@18", "OP", "RELAT_OP",
  "ARITH_OP", "NUM", "CASOS", "$@19", "$@20", "$@21", "LE", "$@22",
  "ESCREVE", "$@23", "VARLIST", "$@24", "PARAM", "$@25", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-99)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      68,   -99,   -99,   -99,   -39,   -34,   -18,   -13,   -17,    -9,
      -4,    -3,   -99,   -99,   -99,   -99,   -99,   -99,     8,    41,
      68,    -2,    68,   -99,   -99,   -99,   -99,   271,   -99,   -99,
     -99,    22,    27,   -99,   -99,   -99,   -99,   -99,   -99,    -5,
      -5,    68,   -99,   -99,   -99,   -25,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,    -5,   -99,   -99,   -99,   -99,    -5,    -5,    -5,
       5,   319,   134,     9,    -5,   -99,   -99,   319,    11,    12,
     154,   174,   194,   -99,    17,   319,   -99,   -99,   319,    -5,
      13,    14,   -99,    15,   -99,    16,   -99,   -99,   287,   -99,
      23,    -5,    24,   111,   -99,   111,    -5,   -99,    11,   -99,
     110,   -99,     7,     6,   -99,   303,   -99,   -99,   -99,    19,
     -99,   -99,   -99,   -99,    25,    21,   -99,   111,   -99,    -5,
     -99,   -99,    -5,   -99,    -5,   254,    68,   214,   234,   -99,
     -99,   -99,   -99,    68,   111,   111,     6,   -99,     7,   -99,
     -99
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     8,     9,    10,     0,     0,     0,     0,     0,     0,
       0,     0,    71,    72,    73,    49,    51,    20,    54,     0,
       4,     0,     4,    11,    12,    13,    14,     0,    53,    18,
      19,     0,     0,    22,    33,    17,    16,    36,    39,     0,
       0,     4,    46,     1,     2,     0,     3,    66,    67,    68,
      69,    70,    57,    58,    62,    60,    61,    59,    63,    64,
      65,    15,     0,    56,    55,    80,    82,     0,     0,     0,
       0,    50,     0,     0,     0,     6,     5,    48,    84,    87,
       0,     0,     0,    45,     0,    44,    52,    21,    47,     0,
       0,     0,    88,     0,    23,     0,    37,    40,     0,    85,
       0,     0,     0,     0,    34,     0,     0,     7,    84,    81,
      87,    83,    25,    79,    38,     0,    86,    89,    31,     0,
      24,    26,    27,    74,     0,     0,    41,     0,    28,     0,
      77,    35,     0,    32,     0,     0,     4,     0,     0,    75,
      78,    42,    29,     4,     0,     0,    79,    43,    25,    76,
      30
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -99,   -20,    -8,   -99,   -99,   -98,   -99,   -99,   -99,   -99,
     -82,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -36,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -79,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -40,   -99,   -41,   -99
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    19,    20,    89,    21,    22,    41,    23,    67,   103,
     120,   121,   134,   145,   122,   127,    24,    68,   113,    25,
      69,   105,    26,    70,   106,   132,   144,    84,    27,    74,
      39,    40,    62,    63,    64,    28,   125,   129,   143,   136,
      29,    78,    30,    79,    91,   108,    93,   101
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      44,    31,    46,    71,    72,   112,    32,   114,     1,     2,
       3,    75,    76,    12,    13,    14,   118,   119,   123,   124,
      35,    73,    33,    12,    13,    14,    77,    34,    36,   133,
      15,    80,    81,    82,    85,    16,    37,    38,    88,    18,
      15,    43,    45,    65,    42,    16,   147,   148,    66,    18,
      90,    92,    87,    98,    97,   100,   102,    99,   104,   128,
     109,   111,    83,   130,   131,   110,   150,   149,   116,   117,
     115,     1,     2,     3,     4,     5,     6,     0,     0,     7,
       0,     0,     8,     9,    10,    11,    12,    13,    14,     0,
       0,     0,     0,   135,     0,     0,   137,     0,   138,     0,
       0,     0,     0,    15,     0,     0,     0,     0,    16,     0,
      17,     0,    18,     0,     0,     0,   140,     4,     5,     6,
       0,     0,     7,   146,     0,     8,     9,    10,    11,    12,
      13,    14,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    15,     0,     0,    92,
       0,    16,     0,    17,     0,    18,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
       0,     0,     0,     0,     0,    86,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
       0,     0,     0,     0,     0,    94,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
       0,     0,     0,     0,     0,    95,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
       0,     0,     0,     0,     0,    96,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
       0,     0,     0,     0,     0,   141,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
       0,     0,     0,     0,     0,   142,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
       0,     0,   139,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,     0,    61,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,     0,   107,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,     0,
     126,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60
};

static const yytype_int16 yycheck[] =
{
      20,    40,    22,    39,    40,   103,    40,   105,     3,     4,
       5,    36,    37,    18,    19,    20,     9,    10,    12,    13,
      37,    41,    40,    18,    19,    20,    62,    40,    37,   127,
      35,    67,    68,    69,    70,    40,    40,    40,    74,    44,
      35,     0,    44,    21,    36,    40,   144,   145,    21,    44,
      39,    39,    43,    89,    37,    41,    41,    44,    42,    40,
      37,    37,    70,    38,    43,   101,   148,   146,   108,   110,
     106,     3,     4,     5,     6,     7,     8,    -1,    -1,    11,
      -1,    -1,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,   129,    -1,    -1,   132,    -1,   134,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    40,    -1,
      42,    -1,    44,    -1,    -1,    -1,   136,     6,     7,     8,
      -1,    -1,    11,   143,    -1,    14,    15,    16,    17,    18,
      19,    20,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    35,    -1,    -1,    39,
      -1,    40,    -1,    42,    -1,    44,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    41,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    41,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    41,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    41,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    41,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    41,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    38,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    37,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    37,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    11,    14,    15,
      16,    17,    18,    19,    20,    35,    40,    42,    44,    46,
      47,    49,    50,    52,    61,    64,    67,    73,    80,    85,
      87,    40,    40,    40,    40,    37,    37,    40,    40,    75,
      76,    51,    36,     0,    46,    44,    46,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    37,    77,    78,    79,    21,    21,    53,    62,    65,
      68,    73,    73,    46,    74,    36,    37,    73,    86,    88,
      73,    73,    73,    47,    72,    73,    41,    43,    73,    48,
      39,    89,    39,    91,    41,    41,    41,    37,    73,    44,
      41,    92,    41,    54,    42,    66,    69,    37,    90,    37,
      73,    37,    50,    63,    50,    73,    89,    91,     9,    10,
      55,    56,    59,    12,    13,    81,    37,    60,    40,    82,
      38,    43,    70,    50,    57,    73,    84,    73,    73,    38,
      46,    41,    41,    83,    71,    58,    46,    50,    50,    81,
      55
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    46,    46,    47,    48,    47,    49,    49,
      49,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      51,    50,    53,    54,    52,    55,    55,    55,    57,    58,
      56,    60,    59,    62,    63,    61,    65,    66,    64,    68,
      69,    70,    71,    67,    72,    72,    74,    73,    73,    75,
      73,    76,    73,    73,    73,    77,    77,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    79,    79,    79,    79,
      79,    80,    80,    80,    82,    83,    81,    84,    81,    81,
      86,    85,    88,    87,    89,    90,    89,    91,    92,    91
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     0,     3,     0,     6,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     1,     1,
       0,     4,     0,     0,     8,     0,     1,     1,     0,     0,
       8,     0,     3,     0,     0,     9,     0,     0,     7,     0,
       0,     0,     0,    13,     1,     1,     0,     4,     3,     0,
       3,     0,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     0,     7,     0,     4,     0,
       0,     7,     0,     7,     0,     0,     4,     0,     0,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 5: /* DECL: TIPO ID SEMICOLON  */
#line 42 "miranha.y"
    {fprintf(outputFile, "%s;\n", (yyvsp[-1].var));}
#line 1311 "miranha.tab.c"
    break;

  case 6: /* $@1: %empty  */
#line 44 "miranha.y"
    {fprintf(outputFile, "%s = ", (yyvsp[-1].var));}
#line 1317 "miranha.tab.c"
    break;

  case 7: /* DECL: TIPO ID ASSIGN_OP $@1 EXPR SEMICOLON  */
#line 46 "miranha.y"
    {fprintf(outputFile, ";\n");}
#line 1323 "miranha.tab.c"
    break;

  case 8: /* TIPO: T_INT  */
#line 50 "miranha.y"
    {fprintf(outputFile, "int ");}
#line 1329 "miranha.tab.c"
    break;

  case 9: /* TIPO: T_FLOAT  */
#line 52 "miranha.y"
    {fprintf(outputFile, "float ");}
#line 1335 "miranha.tab.c"
    break;

  case 10: /* TIPO: T_CHAR  */
#line 54 "miranha.y"
    {fprintf(outputFile, "char ");}
#line 1341 "miranha.tab.c"
    break;

  case 15: /* CMD: EXPR SEMICOLON  */
#line 62 "miranha.y"
    {fprintf(outputFile, ";\n");}
#line 1347 "miranha.tab.c"
    break;

  case 16: /* CMD: T_BREAK SEMICOLON  */
#line 64 "miranha.y"
    {fprintf(outputFile, "break;\n");}
#line 1353 "miranha.tab.c"
    break;

  case 17: /* CMD: T_CONTINUE SEMICOLON  */
#line 66 "miranha.y"
    {fprintf(outputFile, "continue;\n");}
#line 1359 "miranha.tab.c"
    break;

  case 20: /* $@2: %empty  */
#line 70 "miranha.y"
    {fprintf(outputFile, "{\n");}
#line 1365 "miranha.tab.c"
    break;

  case 21: /* CMD: LBRACE $@2 S RBRACE  */
#line 72 "miranha.y"
    {fprintf(outputFile, "}\n");}
#line 1371 "miranha.tab.c"
    break;

  case 22: /* $@3: %empty  */
#line 76 "miranha.y"
    {fprintf(outputFile, "if( ");}
#line 1377 "miranha.tab.c"
    break;

  case 23: /* $@4: %empty  */
#line 78 "miranha.y"
    {fprintf(outputFile, ") ");}
#line 1383 "miranha.tab.c"
    break;

  case 28: /* $@5: %empty  */
#line 86 "miranha.y"
    {fprintf(outputFile, "else{if( ");}
#line 1389 "miranha.tab.c"
    break;

  case 29: /* $@6: %empty  */
#line 88 "miranha.y"
    {fprintf(outputFile, ") ");}
#line 1395 "miranha.tab.c"
    break;

  case 30: /* ELIF: T_ELSEIF LPAREN $@5 EXPR RPAREN $@6 CMD OTHER  */
#line 90 "miranha.y"
    {fprintf(outputFile, "} ");}
#line 1401 "miranha.tab.c"
    break;

  case 31: /* $@7: %empty  */
#line 94 "miranha.y"
    {fprintf(outputFile, "else ");}
#line 1407 "miranha.tab.c"
    break;

  case 33: /* $@8: %empty  */
#line 99 "miranha.y"
    {fprintf(outputFile, "switch( ");}
#line 1413 "miranha.tab.c"
    break;

  case 34: /* $@9: %empty  */
#line 101 "miranha.y"
    {fprintf(outputFile, "){\n");}
#line 1419 "miranha.tab.c"
    break;

  case 35: /* COND: T_SWITCH LPAREN $@8 EXPR RPAREN LBRACE $@9 CASOS RBRACE  */
#line 103 "miranha.y"
    {fprintf(outputFile, "}\n");}
#line 1425 "miranha.tab.c"
    break;

  case 36: /* $@10: %empty  */
#line 107 "miranha.y"
    {fprintf(outputFile, "while( ");}
#line 1431 "miranha.tab.c"
    break;

  case 37: /* $@11: %empty  */
#line 109 "miranha.y"
    {fprintf(outputFile, ") ");}
#line 1437 "miranha.tab.c"
    break;

  case 39: /* $@12: %empty  */
#line 114 "miranha.y"
    {fprintf(outputFile, "for( ");}
#line 1443 "miranha.tab.c"
    break;

  case 40: /* $@13: %empty  */
#line 116 "miranha.y"
    {fprintf(outputFile, "; ");}
#line 1449 "miranha.tab.c"
    break;

  case 41: /* $@14: %empty  */
#line 118 "miranha.y"
    {fprintf(outputFile, "; ");}
#line 1455 "miranha.tab.c"
    break;

  case 42: /* $@15: %empty  */
#line 120 "miranha.y"
    {fprintf(outputFile, ") ");}
#line 1461 "miranha.tab.c"
    break;

  case 46: /* $@16: %empty  */
#line 128 "miranha.y"
    {fprintf(outputFile, "%s = ", (yyvsp[-1].var));}
#line 1467 "miranha.tab.c"
    break;

  case 49: /* $@17: %empty  */
#line 132 "miranha.y"
    {fprintf(outputFile, "! ");}
#line 1473 "miranha.tab.c"
    break;

  case 51: /* $@18: %empty  */
#line 135 "miranha.y"
    {fprintf(outputFile, "( ");}
#line 1479 "miranha.tab.c"
    break;

  case 52: /* EXPR: LPAREN $@18 EXPR RPAREN  */
#line 137 "miranha.y"
    {fprintf(outputFile, ") ");}
#line 1485 "miranha.tab.c"
    break;

  case 54: /* EXPR: ID  */
#line 140 "miranha.y"
    {fprintf(outputFile, "%s ", (yyvsp[0].var));}
#line 1491 "miranha.tab.c"
    break;

  case 57: /* RELAT_OP: EQ_OP  */
#line 147 "miranha.y"
    {fprintf(outputFile, "== ");}
#line 1497 "miranha.tab.c"
    break;

  case 58: /* RELAT_OP: NE_OP  */
#line 149 "miranha.y"
    {fprintf(outputFile, "!= ");}
#line 1503 "miranha.tab.c"
    break;

  case 59: /* RELAT_OP: LT_OP  */
#line 151 "miranha.y"
    {fprintf(outputFile, "< ");}
#line 1509 "miranha.tab.c"
    break;

  case 60: /* RELAT_OP: LE_OP  */
#line 153 "miranha.y"
    {fprintf(outputFile, "<= ");}
#line 1515 "miranha.tab.c"
    break;

  case 61: /* RELAT_OP: GT_OP  */
#line 155 "miranha.y"
    {fprintf(outputFile, "> ");}
#line 1521 "miranha.tab.c"
    break;

  case 62: /* RELAT_OP: GE_OP  */
#line 157 "miranha.y"
    {fprintf(outputFile, ">= ");}
#line 1527 "miranha.tab.c"
    break;

  case 63: /* RELAT_OP: AND_OP  */
#line 159 "miranha.y"
    {fprintf(outputFile, "&& ");}
#line 1533 "miranha.tab.c"
    break;

  case 64: /* RELAT_OP: OR_OP  */
#line 161 "miranha.y"
    {fprintf(outputFile, "|| ");}
#line 1539 "miranha.tab.c"
    break;

  case 65: /* RELAT_OP: NOT_OP  */
#line 163 "miranha.y"
    {fprintf(outputFile, "! ");}
#line 1545 "miranha.tab.c"
    break;

  case 66: /* ARITH_OP: PLUS_OP  */
#line 167 "miranha.y"
    {fprintf(outputFile, "+ ");}
#line 1551 "miranha.tab.c"
    break;

  case 67: /* ARITH_OP: MINUS_OP  */
#line 169 "miranha.y"
    {fprintf(outputFile, "- ");}
#line 1557 "miranha.tab.c"
    break;

  case 68: /* ARITH_OP: MULT_OP  */
#line 171 "miranha.y"
    {fprintf(outputFile, "* ");}
#line 1563 "miranha.tab.c"
    break;

  case 69: /* ARITH_OP: DIV_OP  */
#line 173 "miranha.y"
    {fprintf(outputFile, "/ ");}
#line 1569 "miranha.tab.c"
    break;

  case 70: /* ARITH_OP: MOD_OP  */
#line 175 "miranha.y"
    {fprintf(outputFile, "%% ");}
#line 1575 "miranha.tab.c"
    break;

  case 71: /* NUM: INT_CONST  */
#line 179 "miranha.y"
    {fprintf(outputFile, "%d ", (yyvsp[0].integer));}
#line 1581 "miranha.tab.c"
    break;

  case 72: /* NUM: FLOAT_CONST  */
#line 181 "miranha.y"
    {fprintf(outputFile, "%f ", (yyvsp[0].floating));}
#line 1587 "miranha.tab.c"
    break;

  case 73: /* NUM: CHAR_CONST  */
#line 183 "miranha.y"
    {fprintf(outputFile, "'%c' ", (yyvsp[0].character));}
#line 1593 "miranha.tab.c"
    break;

  case 74: /* $@19: %empty  */
#line 187 "miranha.y"
    {fprintf(outputFile, "case ");}
#line 1599 "miranha.tab.c"
    break;

  case 75: /* $@20: %empty  */
#line 189 "miranha.y"
    {fprintf(outputFile, ": ");}
#line 1605 "miranha.tab.c"
    break;

  case 77: /* $@21: %empty  */
#line 192 "miranha.y"
    {fprintf(outputFile, "default: ");}
#line 1611 "miranha.tab.c"
    break;

  case 80: /* $@22: %empty  */
#line 198 "miranha.y"
    {fprintf(outputFile, "scanf(\"%s\" ", (yyvsp[0].text));}
#line 1617 "miranha.tab.c"
    break;

  case 81: /* LE: T_SCAN LPAREN STRING_CONST $@22 VARLIST RPAREN SEMICOLON  */
#line 200 "miranha.y"
    {fprintf(outputFile, ");\n");}
#line 1623 "miranha.tab.c"
    break;

  case 82: /* $@23: %empty  */
#line 204 "miranha.y"
    {fprintf(outputFile, "printf(\"%s\" ", (yyvsp[0].text));}
#line 1629 "miranha.tab.c"
    break;

  case 83: /* ESCREVE: T_PRINT LPAREN STRING_CONST $@23 PARAM RPAREN SEMICOLON  */
#line 206 "miranha.y"
    {fprintf(outputFile, ");\n");}
#line 1635 "miranha.tab.c"
    break;

  case 85: /* $@24: %empty  */
#line 211 "miranha.y"
     {fprintf(outputFile, ", &%s", (yyvsp[0].var));}
#line 1641 "miranha.tab.c"
    break;

  case 88: /* $@25: %empty  */
#line 217 "miranha.y"
     {fprintf(outputFile, ", ");}
#line 1647 "miranha.tab.c"
    break;


#line 1651 "miranha.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 220 "miranha.y"


int yyerror(char *s){
    fprintf(stderr, "%s: unexpected '%s' at line %d\n", s, yytext, lineNumber);
}

int main(int argc, char* argv[]){
    //verifica formato da chamada
    if (argc < 2 || argc > 3) {
        fprintf(stderr, "Uso: %s arquivo.mir [-o]\n", argv[0]);
        return 1;
    }

    char outputC[256];
    char outputExe[256];
    char outputLog[256];

    // Copiar nome base sem extensão
    strncpy(outputC, argv[1], sizeof(outputC) - 1);
    outputC[sizeof(outputC) - 1] = '\0';

    // Trocar a extensão por .c
    char *ext = strrchr(outputC, '.');
    if (ext) {
        strcpy(ext, ".c");
    } else {
        strcat(outputC, ".c");
    }

    // Trocar a extensão por .log
    strncpy(outputLog, argv[1], sizeof(outputLog) - 1);
    outputLog[sizeof(outputLog) - 1] = '\0';
    ext = strrchr(outputLog, '.');
    if (ext) {
        strcpy(ext, ".log");
    } else {
        strcat(outputC, ".log");
    }

    // Criar nome do executável (sem extensão)
    strncpy(outputExe, outputC, sizeof(outputExe) - 1);
    outputExe[sizeof(outputExe) - 1] = '\0';
    ext = strrchr(outputExe, '.');
    if (ext) {
        *ext = '\0'; // Remove .c
    }

    outputFile = fopen(outputC, "w");
    if (!outputFile) {
        perror("Erro ao abrir output.c");
        exit(1);
    }

    fprintf(outputFile, "#include <stdio.h>\nint main(){\n");

    tokenDebug = fopen(outputLog, "w");
    if (!tokenDebug) {
        perror("Erro ao abrir .log");
        exit(1);
    }

    yyin = fopen(argv[1], "r");
    if (!yyin) {
        perror("Erro ao abrir arquivo de entrada");
        exit(1);
    }
    char result = yyparse();
    fclose(yyin);
    fprintf(outputFile, "\nreturn 0;\n}");
    fclose(outputFile);
    fclose(tokenDebug);

    if(result == 0){
        char cmd[512];
        snprintf(cmd, sizeof(cmd), "gcc %s -o %s", outputC, outputExe);
        if (system(cmd) != 0) {
            fprintf(stderr, "Falha ao compilar %s\n", outputC);
            return 1;
        }
    }

    // Apagar arquivo temporário .c
    if(argc == 3 && strcmp(argv[3], "-o")){
        if (remove(outputC) != 0) {
            perror("Erro ao remover output");
        }
    }
    return 0;
}
