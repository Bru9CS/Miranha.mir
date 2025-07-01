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

#line 81 "miranha.tab.c"

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
  YYSYMBOL_SE = 51,                        /* SE  */
  YYSYMBOL_52_2 = 52,                      /* $@2  */
  YYSYMBOL_53_3 = 53,                      /* $@3  */
  YYSYMBOL_ELIF = 54,                      /* ELIF  */
  YYSYMBOL_55_4 = 55,                      /* $@4  */
  YYSYMBOL_56_5 = 56,                      /* $@5  */
  YYSYMBOL_ELSE = 57,                      /* ELSE  */
  YYSYMBOL_58_6 = 58,                      /* $@6  */
  YYSYMBOL_COND = 59,                      /* COND  */
  YYSYMBOL_60_7 = 60,                      /* $@7  */
  YYSYMBOL_61_8 = 61,                      /* $@8  */
  YYSYMBOL_ENQUANTO = 62,                  /* ENQUANTO  */
  YYSYMBOL_63_9 = 63,                      /* $@9  */
  YYSYMBOL_64_10 = 64,                     /* $@10  */
  YYSYMBOL_PARA = 65,                      /* PARA  */
  YYSYMBOL_66_11 = 66,                     /* $@11  */
  YYSYMBOL_67_12 = 67,                     /* $@12  */
  YYSYMBOL_68_13 = 68,                     /* $@13  */
  YYSYMBOL_69_14 = 69,                     /* $@14  */
  YYSYMBOL_ITERADOR = 70,                  /* ITERADOR  */
  YYSYMBOL_EXPR = 71,                      /* EXPR  */
  YYSYMBOL_72_15 = 72,                     /* $@15  */
  YYSYMBOL_73_16 = 73,                     /* $@16  */
  YYSYMBOL_OP = 74,                        /* OP  */
  YYSYMBOL_RELAT_OP = 75,                  /* RELAT_OP  */
  YYSYMBOL_ARITH_OP = 76,                  /* ARITH_OP  */
  YYSYMBOL_NUM = 77,                       /* NUM  */
  YYSYMBOL_CASOS = 78,                     /* CASOS  */
  YYSYMBOL_79_17 = 79,                     /* $@17  */
  YYSYMBOL_80_18 = 80,                     /* $@18  */
  YYSYMBOL_81_19 = 81,                     /* $@19  */
  YYSYMBOL_LE = 82,                        /* LE  */
  YYSYMBOL_83_20 = 83,                     /* $@20  */
  YYSYMBOL_ESCREVE = 84,                   /* ESCREVE  */
  YYSYMBOL_85_21 = 85,                     /* $@21  */
  YYSYMBOL_PARAM = 86,                     /* PARAM  */
  YYSYMBOL_87_22 = 87                      /* $@22  */
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
#define YYFINAL  41
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   339

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  139

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
       0,    30,    30,    30,    30,    33,    36,    35,    41,    43,
      45,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    62,    64,    61,    67,    70,    72,    69,    75,    78,
      77,    83,    85,    82,    91,    93,    90,    98,   100,   102,
     104,    97,   108,   108,   112,   111,   114,   116,   115,   119,
     120,   124,   124,   127,   128,   130,   132,   134,   136,   140,
     142,   144,   146,   148,   152,   154,   156,   161,   163,   160,
     166,   165,   168,   172,   171,   178,   177,   182,   185,   184
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
  "ID", "$accept", "S", "DECL", "$@1", "TIPO", "CMD", "SE", "$@2", "$@3",
  "ELIF", "$@4", "$@5", "ELSE", "$@6", "COND", "$@7", "$@8", "ENQUANTO",
  "$@9", "$@10", "PARA", "$@11", "$@12", "$@13", "$@14", "ITERADOR",
  "EXPR", "$@15", "$@16", "OP", "RELAT_OP", "ARITH_OP", "NUM", "CASOS",
  "$@17", "$@18", "$@19", "LE", "$@20", "ESCREVE", "$@21", "PARAM", "$@22", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-72)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      32,   -72,   -72,   -72,   -38,   -34,   -25,   -24,   -23,   -20,
     -22,   -21,   -72,   -72,   -72,   -72,    32,   -15,    22,    32,
     -12,    32,   -72,   -72,   -72,   -72,   259,   -72,   -72,   -72,
       2,     3,   -72,   -72,   -72,   -72,   -72,   -72,   -11,    -9,
     -72,   -72,   -72,   -26,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -11,   -72,   -72,
     -72,   -72,   -11,   -11,   -11,    66,   104,   -72,   -11,   -72,
     -72,   307,     4,     4,   124,   144,   164,   -72,     5,   307,
     -72,   307,   -11,   -72,    15,    16,   -72,    -1,   -72,   -72,
     275,   -11,    21,    24,    81,   -72,    81,   -11,   -72,   224,
     -72,   -72,    49,     0,   -72,   291,   -72,    23,    53,   -72,
      26,    25,   -72,   -72,   -72,   -72,   -11,   -72,   -72,   -11,
     -11,    81,   242,    32,   184,   204,   -72,   -72,   -72,   -72,
     -72,    32,    81,    81,     0,   -72,    49,   -72,   -72
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     8,     9,    10,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    65,    66,    47,     4,    50,     0,     4,
       0,     4,    11,    12,    13,    14,     0,    49,    18,    19,
       0,     0,    21,    31,    17,    16,    34,    37,     0,     0,
      44,     1,     2,     0,     3,    59,    60,    61,    62,    63,
      53,    54,    58,    56,    57,    55,    15,     0,    52,    51,
      73,    75,     0,     0,     0,     0,     0,    20,     0,     6,
       5,    46,    77,    77,     0,     0,     0,    43,     0,    42,
      48,    45,     0,    78,     0,     0,    22,     0,    35,    38,
       0,     0,     0,     0,     0,    32,     0,     0,     7,    77,
      74,    76,    24,    72,    36,     0,    79,     0,    28,    67,
       0,     0,    39,    25,    29,    23,     0,    70,    33,     0,
       0,     0,     0,     4,     0,     0,    30,    68,    71,    40,
      26,     4,     0,     0,    72,    41,    24,    69,    27
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -72,   -16,     1,   -72,   -72,   -41,   -72,   -72,   -72,   -71,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -37,   -72,   -72,   -72,
     -72,   -72,   -72,   -67,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -69,   -72
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    18,    19,    82,    20,    21,    22,    62,    94,   108,
     120,   133,   115,   121,    23,    63,   103,    24,    64,    96,
      25,    65,    97,   119,   132,    78,    26,    68,    38,    57,
      58,    59,    27,   111,   116,   131,   123,    28,    72,    29,
      73,    84,    91
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      39,    66,    30,    42,    85,    44,    31,    12,    13,    14,
      69,    70,   109,   110,    34,    32,    33,    35,    36,    37,
      71,    40,    41,    60,    61,    74,    75,    76,    79,    15,
     106,    81,    43,    17,    67,     1,     2,     3,     4,     5,
       6,    95,    89,    83,     7,    90,     8,     9,    10,    11,
      12,    13,    14,   102,    99,   104,    92,    93,   100,   107,
     105,   101,   114,   113,   117,   138,    77,   137,   118,     1,
       2,     3,    15,     0,    16,     0,    17,     0,     0,   122,
     126,     0,   124,   125,    12,    13,    14,     4,     5,     6,
       0,   135,   136,     7,     0,     8,     9,    10,    11,    12,
      13,    14,     0,     0,     0,     0,    15,   128,     0,     0,
      17,     0,     0,     0,     0,   134,     0,     0,     0,     0,
       0,    15,     0,    16,     0,    17,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     0,     0,     0,
       0,     0,     0,     0,     0,    80,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     0,     0,     0,
       0,     0,     0,     0,     0,    86,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     0,     0,     0,
       0,     0,     0,     0,     0,    87,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     0,     0,     0,
       0,     0,     0,     0,     0,   129,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     0,     0,     0,
       0,     0,     0,     0,     0,   130,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     0,     0,     0,
       0,     0,     0,    83,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     0,     0,     0,     0,     0,
     127,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     0,     0,     0,     0,    56,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     0,     0,
       0,     0,    98,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     0,     0,     0,     0,   112,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55
};

static const yytype_int16 yycheck[] =
{
      16,    38,    40,    19,    73,    21,    40,    18,    19,    20,
      36,    37,    12,    13,    37,    40,    40,    37,    40,    40,
      57,    36,     0,    21,    21,    62,    63,    64,    65,    40,
      99,    68,    44,    44,    43,     3,     4,     5,     6,     7,
       8,    42,    37,    39,    12,    82,    14,    15,    16,    17,
      18,    19,    20,    94,    91,    96,    41,    41,    37,    10,
      97,    37,     9,    40,    38,   136,    65,   134,    43,     3,
       4,     5,    40,    -1,    42,    -1,    44,    -1,    -1,   116,
     121,    -1,   119,   120,    18,    19,    20,     6,     7,     8,
      -1,   132,   133,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    40,   123,    -1,    -1,
      44,    -1,    -1,    -1,    -1,   131,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    42,    -1,    44,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,    -1,
      38,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    -1,    -1,    37,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    37,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    -1,    -1,    37,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    12,    14,    15,
      16,    17,    18,    19,    20,    40,    42,    44,    46,    47,
      49,    50,    51,    59,    62,    65,    71,    77,    82,    84,
      40,    40,    40,    40,    37,    37,    40,    40,    73,    46,
      36,     0,    46,    44,    46,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    37,    74,    75,    76,
      21,    21,    52,    60,    63,    66,    71,    43,    72,    36,
      37,    71,    83,    85,    71,    71,    71,    47,    70,    71,
      41,    71,    48,    39,    86,    86,    41,    41,    41,    37,
      71,    87,    41,    41,    53,    42,    64,    67,    37,    71,
      37,    37,    50,    61,    50,    71,    86,    10,    54,    12,
      13,    78,    37,    40,     9,    57,    79,    38,    43,    68,
      55,    58,    71,    81,    71,    71,    50,    38,    46,    41,
      41,    80,    69,    56,    46,    50,    50,    78,    54
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    46,    46,    47,    48,    47,    49,    49,
      49,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    52,    53,    51,    54,    55,    56,    54,    57,    58,
      57,    60,    61,    59,    63,    64,    62,    66,    67,    68,
      69,    65,    70,    70,    72,    71,    71,    73,    71,    71,
      71,    74,    74,    75,    75,    75,    75,    75,    75,    76,
      76,    76,    76,    76,    77,    77,    77,    79,    80,    78,
      81,    78,    78,    83,    82,    85,    84,    86,    87,    86
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     0,     3,     0,     6,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     1,     1,
       3,     0,     0,     9,     0,     0,     0,     8,     0,     0,
       3,     0,     0,     9,     0,     0,     7,     0,     0,     0,
       0,    13,     1,     1,     0,     4,     3,     0,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     0,     7,
       0,     4,     0,     0,     7,     0,     7,     0,     0,     4
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
#line 34 "miranha.y"
    {fprintf(outputFile, "%s;\n", (yyvsp[-1].var));}
#line 1289 "miranha.tab.c"
    break;

  case 6: /* $@1: %empty  */
#line 36 "miranha.y"
    {fprintf(outputFile, "%s = ;\n", (yyvsp[-1].var));}
#line 1295 "miranha.tab.c"
    break;

  case 7: /* DECL: TIPO ID ASSIGN_OP $@1 EXPR SEMICOLON  */
#line 38 "miranha.y"
    {fprintf(outputFile, ";\n");}
#line 1301 "miranha.tab.c"
    break;

  case 8: /* TIPO: T_INT  */
#line 42 "miranha.y"
    {fprintf(outputFile, "int ");}
#line 1307 "miranha.tab.c"
    break;

  case 9: /* TIPO: T_FLOAT  */
#line 44 "miranha.y"
    {fprintf(outputFile, "float ");}
#line 1313 "miranha.tab.c"
    break;

  case 10: /* TIPO: T_CHAR  */
#line 46 "miranha.y"
    {fprintf(outputFile, "char ");}
#line 1319 "miranha.tab.c"
    break;

  case 21: /* $@2: %empty  */
#line 62 "miranha.y"
    {fprintf(outputFile, "if( ");}
#line 1325 "miranha.tab.c"
    break;

  case 22: /* $@3: %empty  */
#line 64 "miranha.y"
    {fprintf(outputFile, ") ");}
#line 1331 "miranha.tab.c"
    break;

  case 25: /* $@4: %empty  */
#line 70 "miranha.y"
    {fprintf(outputFile, "else if( ");}
#line 1337 "miranha.tab.c"
    break;

  case 26: /* $@5: %empty  */
#line 72 "miranha.y"
    {fprintf(outputFile, ") ");}
#line 1343 "miranha.tab.c"
    break;

  case 29: /* $@6: %empty  */
#line 78 "miranha.y"
    {fprintf(outputFile, "else ");}
#line 1349 "miranha.tab.c"
    break;

  case 31: /* $@7: %empty  */
#line 83 "miranha.y"
    {fprintf(outputFile, "case( ");}
#line 1355 "miranha.tab.c"
    break;

  case 32: /* $@8: %empty  */
#line 85 "miranha.y"
    {fprintf(outputFile, "){\n");}
#line 1361 "miranha.tab.c"
    break;

  case 33: /* COND: T_CASE LPAREN $@7 EXPR RPAREN LBRACE $@8 CASOS RBRACE  */
#line 87 "miranha.y"
    {fprintf(outputFile, "}\n");}
#line 1367 "miranha.tab.c"
    break;

  case 34: /* $@9: %empty  */
#line 91 "miranha.y"
    {fprintf(outputFile, "while( ");}
#line 1373 "miranha.tab.c"
    break;

  case 35: /* $@10: %empty  */
#line 93 "miranha.y"
    {fprintf(outputFile, ") ");}
#line 1379 "miranha.tab.c"
    break;

  case 37: /* $@11: %empty  */
#line 98 "miranha.y"
    {fprintf(outputFile, "for( ");}
#line 1385 "miranha.tab.c"
    break;

  case 38: /* $@12: %empty  */
#line 100 "miranha.y"
    {fprintf(outputFile, "; ");}
#line 1391 "miranha.tab.c"
    break;

  case 39: /* $@13: %empty  */
#line 102 "miranha.y"
    {fprintf(outputFile, "; ");}
#line 1397 "miranha.tab.c"
    break;

  case 40: /* $@14: %empty  */
#line 104 "miranha.y"
    {fprintf(outputFile, ") ");}
#line 1403 "miranha.tab.c"
    break;

  case 44: /* $@15: %empty  */
#line 112 "miranha.y"
    {fprintf(outputFile, "%s = ", (yyvsp[-1].var));}
#line 1409 "miranha.tab.c"
    break;

  case 47: /* $@16: %empty  */
#line 116 "miranha.y"
    {fprintf(outputFile, "( ");}
#line 1415 "miranha.tab.c"
    break;

  case 48: /* EXPR: LPAREN $@16 EXPR RPAREN  */
#line 118 "miranha.y"
    {fprintf(outputFile, ") ");}
#line 1421 "miranha.tab.c"
    break;

  case 50: /* EXPR: ID  */
#line 121 "miranha.y"
    {fprintf(outputFile, "%s ", (yyvsp[0].var));}
#line 1427 "miranha.tab.c"
    break;

  case 54: /* RELAT_OP: NE_OP  */
#line 129 "miranha.y"
    {fprintf(outputFile, "!= ");}
#line 1433 "miranha.tab.c"
    break;

  case 55: /* RELAT_OP: LT_OP  */
#line 131 "miranha.y"
    {fprintf(outputFile, "< ");}
#line 1439 "miranha.tab.c"
    break;

  case 56: /* RELAT_OP: LE_OP  */
#line 133 "miranha.y"
    {fprintf(outputFile, "<= ");}
#line 1445 "miranha.tab.c"
    break;

  case 57: /* RELAT_OP: GT_OP  */
#line 135 "miranha.y"
    {fprintf(outputFile, "> ");}
#line 1451 "miranha.tab.c"
    break;

  case 58: /* RELAT_OP: GE_OP  */
#line 137 "miranha.y"
    {fprintf(outputFile, ">= ");}
#line 1457 "miranha.tab.c"
    break;

  case 59: /* ARITH_OP: PLUS_OP  */
#line 141 "miranha.y"
    {fprintf(outputFile, "+ ");}
#line 1463 "miranha.tab.c"
    break;

  case 60: /* ARITH_OP: MINUS_OP  */
#line 143 "miranha.y"
    {fprintf(outputFile, "- ");}
#line 1469 "miranha.tab.c"
    break;

  case 61: /* ARITH_OP: MULT_OP  */
#line 145 "miranha.y"
    {fprintf(outputFile, "* ");}
#line 1475 "miranha.tab.c"
    break;

  case 62: /* ARITH_OP: DIV_OP  */
#line 147 "miranha.y"
    {fprintf(outputFile, "/ ");}
#line 1481 "miranha.tab.c"
    break;

  case 63: /* ARITH_OP: MOD_OP  */
#line 149 "miranha.y"
    {fprintf(outputFile, "%% ");}
#line 1487 "miranha.tab.c"
    break;

  case 64: /* NUM: INT_CONST  */
#line 153 "miranha.y"
    {fprintf(outputFile, "%d ", (yyvsp[0].integer));}
#line 1493 "miranha.tab.c"
    break;

  case 65: /* NUM: FLOAT_CONST  */
#line 155 "miranha.y"
    {fprintf(outputFile, "%f ", (yyvsp[0].floating));}
#line 1499 "miranha.tab.c"
    break;

  case 66: /* NUM: CHAR_CONST  */
#line 157 "miranha.y"
    {fprintf(outputFile, "%c ", (yyvsp[0].character));}
#line 1505 "miranha.tab.c"
    break;

  case 67: /* $@17: %empty  */
#line 161 "miranha.y"
    {fprintf(outputFile, "case ");}
#line 1511 "miranha.tab.c"
    break;

  case 68: /* $@18: %empty  */
#line 163 "miranha.y"
    {fprintf(outputFile, ": ");}
#line 1517 "miranha.tab.c"
    break;

  case 70: /* $@19: %empty  */
#line 166 "miranha.y"
    {fprintf(outputFile, "default: ");}
#line 1523 "miranha.tab.c"
    break;

  case 73: /* $@20: %empty  */
#line 172 "miranha.y"
    {fprintf(outputFile, "scanf(\"%s\" ", (yyvsp[0].text));}
#line 1529 "miranha.tab.c"
    break;

  case 74: /* LE: T_SCAN LPAREN STRING_CONST $@20 PARAM RPAREN SEMICOLON  */
#line 174 "miranha.y"
    {fprintf(outputFile, ");\n");}
#line 1535 "miranha.tab.c"
    break;

  case 75: /* $@21: %empty  */
#line 178 "miranha.y"
    {fprintf(outputFile, "printf(\"%s\" ", (yyvsp[0].text));}
#line 1541 "miranha.tab.c"
    break;

  case 76: /* ESCREVE: T_PRINT LPAREN STRING_CONST $@21 PARAM RPAREN SEMICOLON  */
#line 180 "miranha.y"
    {fprintf(outputFile, ");\n");}
#line 1547 "miranha.tab.c"
    break;

  case 78: /* $@22: %empty  */
#line 185 "miranha.y"
     {fprintf(outputFile, ", ");}
#line 1553 "miranha.tab.c"
    break;


#line 1557 "miranha.tab.c"

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

#line 188 "miranha.y"


int yyerror(char *s){
    printf("Syntax error at %s\n", s);
}

int main(int argc, char* argv[]){
    //verifica formato da chamada
    if (argc != 2) {
        fprintf(stderr, "Uso: %s arquivo.mir\n", argv[0]);
        return 1;
    }

    char outputC[256];
    char outputExe[256];

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

    yyin = fopen(argv[1], "r");
    if (!yyin) {
        perror("Erro ao abrir arquivo de entrada");
        exit(1);
    }
    yyparse();
    fclose(yyin);
    fprintf(outputFile, "\nreturn 0;\n}");
    fclose(outputFile);

    char cmd[512];
    snprintf(cmd, sizeof(cmd), "gcc %s -o %s", outputC, outputExe);
    if (system(cmd) != 0) {
        fprintf(stderr, "Falha ao compilar %s\n", outputC);
        return 1;
    }

    // Apagar arquivo temporário .c
    if (remove(outputC) != 0) {
        perror("Erro ao remover output");
    }
    return 0;
}
