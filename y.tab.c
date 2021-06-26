/* A Bison parser, made by GNU Bison 3.7.5.  */

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
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "chipa.y"

    #include "LinkedList.h"

    void yyerror(const char *s);
    
    int yylex();


#line 80 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    FIN_LINEA = 258,               /* FIN_LINEA  */
    DOS_PUNTOS = 259,              /* DOS_PUNTOS  */
    MAS = 260,                     /* MAS  */
    MENOS = 261,                   /* MENOS  */
    POR = 262,                     /* POR  */
    DIVIDIDO = 263,                /* DIVIDIDO  */
    MOD = 264,                     /* MOD  */
    VERDADERO = 265,               /* VERDADERO  */
    FALSO = 266,                   /* FALSO  */
    MENOR = 267,                   /* MENOR  */
    MAYOR = 268,                   /* MAYOR  */
    MENOR_IGUAL = 269,             /* MENOR_IGUAL  */
    MAYOR_IGUAL = 270,             /* MAYOR_IGUAL  */
    IGUAL = 271,                   /* IGUAL  */
    PARENTESIS_ABRE = 272,         /* PARENTESIS_ABRE  */
    PARENTESIS_CIERRA = 273,       /* PARENTESIS_CIERRA  */
    MIENTRAS = 274,                /* MIENTRAS  */
    HAZ = 275,                     /* HAZ  */
    SI = 276,                      /* SI  */
    COMILLA = 277,                 /* COMILLA  */
    Y = 278,                       /* Y  */
    O = 279,                       /* O  */
    NO = 280,                      /* NO  */
    IMPRIMIR = 281,                /* IMPRIMIR  */
    SINO = 282,                    /* SINO  */
    NUMERO = 283,                  /* NUMERO  */
    TEXTO = 284,                   /* TEXTO  */
    VAR_NUMERO = 285,              /* VAR_NUMERO  */
    VAR_TEXTO = 286,               /* VAR_TEXTO  */
    NOMBRE = 287,                  /* NOMBRE  */
    FIN = 288                      /* FIN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define FIN_LINEA 258
#define DOS_PUNTOS 259
#define MAS 260
#define MENOS 261
#define POR 262
#define DIVIDIDO 263
#define MOD 264
#define VERDADERO 265
#define FALSO 266
#define MENOR 267
#define MAYOR 268
#define MENOR_IGUAL 269
#define MAYOR_IGUAL 270
#define IGUAL 271
#define PARENTESIS_ABRE 272
#define PARENTESIS_CIERRA 273
#define MIENTRAS 274
#define HAZ 275
#define SI 276
#define COMILLA 277
#define Y 278
#define O 279
#define NO 280
#define IMPRIMIR 281
#define SINO 282
#define NUMERO 283
#define TEXTO 284
#define VAR_NUMERO 285
#define VAR_TEXTO 286
#define NOMBRE 287
#define FIN 288

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "chipa.y"

    char texto[256];
    int numero;

#line 204 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_FIN_LINEA = 3,                  /* FIN_LINEA  */
  YYSYMBOL_DOS_PUNTOS = 4,                 /* DOS_PUNTOS  */
  YYSYMBOL_MAS = 5,                        /* MAS  */
  YYSYMBOL_MENOS = 6,                      /* MENOS  */
  YYSYMBOL_POR = 7,                        /* POR  */
  YYSYMBOL_DIVIDIDO = 8,                   /* DIVIDIDO  */
  YYSYMBOL_MOD = 9,                        /* MOD  */
  YYSYMBOL_VERDADERO = 10,                 /* VERDADERO  */
  YYSYMBOL_FALSO = 11,                     /* FALSO  */
  YYSYMBOL_MENOR = 12,                     /* MENOR  */
  YYSYMBOL_MAYOR = 13,                     /* MAYOR  */
  YYSYMBOL_MENOR_IGUAL = 14,               /* MENOR_IGUAL  */
  YYSYMBOL_MAYOR_IGUAL = 15,               /* MAYOR_IGUAL  */
  YYSYMBOL_IGUAL = 16,                     /* IGUAL  */
  YYSYMBOL_PARENTESIS_ABRE = 17,           /* PARENTESIS_ABRE  */
  YYSYMBOL_PARENTESIS_CIERRA = 18,         /* PARENTESIS_CIERRA  */
  YYSYMBOL_MIENTRAS = 19,                  /* MIENTRAS  */
  YYSYMBOL_HAZ = 20,                       /* HAZ  */
  YYSYMBOL_SI = 21,                        /* SI  */
  YYSYMBOL_COMILLA = 22,                   /* COMILLA  */
  YYSYMBOL_Y = 23,                         /* Y  */
  YYSYMBOL_O = 24,                         /* O  */
  YYSYMBOL_NO = 25,                        /* NO  */
  YYSYMBOL_IMPRIMIR = 26,                  /* IMPRIMIR  */
  YYSYMBOL_SINO = 27,                      /* SINO  */
  YYSYMBOL_NUMERO = 28,                    /* NUMERO  */
  YYSYMBOL_TEXTO = 29,                     /* TEXTO  */
  YYSYMBOL_VAR_NUMERO = 30,                /* VAR_NUMERO  */
  YYSYMBOL_VAR_TEXTO = 31,                 /* VAR_TEXTO  */
  YYSYMBOL_NOMBRE = 32,                    /* NOMBRE  */
  YYSYMBOL_FIN = 33,                       /* FIN  */
  YYSYMBOL_34_ = 34,                       /* '='  */
  YYSYMBOL_35_ = 35,                       /* '('  */
  YYSYMBOL_36_ = 36,                       /* ')'  */
  YYSYMBOL_37_ = 37,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 38,                  /* $accept  */
  YYSYMBOL_S = 39,                         /* S  */
  YYSYMBOL_begin = 40,                     /* begin  */
  YYSYMBOL_end = 41,                       /* end  */
  YYSYMBOL_CODE = 42,                      /* CODE  */
  YYSYMBOL_INSTRUCCION = 43,               /* INSTRUCCION  */
  YYSYMBOL_DECLARACION = 44,               /* DECLARACION  */
  YYSYMBOL_asignacion = 45,                /* asignacion  */
  YYSYMBOL_ASIGNACION_NUM = 46,            /* ASIGNACION_NUM  */
  YYSYMBOL_ASIGNACION_TEXT = 47,           /* ASIGNACION_TEXT  */
  YYSYMBOL_declara_y_asigna = 48,          /* declara_y_asigna  */
  YYSYMBOL_print = 49,                     /* print  */
  YYSYMBOL_operacion = 50,                 /* operacion  */
  YYSYMBOL_operador = 51,                  /* operador  */
  YYSYMBOL_parentesis_st_abre = 52,        /* parentesis_st_abre  */
  YYSYMBOL_parentesis_st_cierra = 53,      /* parentesis_st_cierra  */
  YYSYMBOL_valor = 54,                     /* valor  */
  YYSYMBOL_CONTROL_LOGICO = 55,            /* CONTROL_LOGICO  */
  YYSYMBOL_super_si = 56,                  /* super_si  */
  YYSYMBOL_si_st = 57,                     /* si_st  */
  YYSYMBOL_entonces_haz = 58,              /* entonces_haz  */
  YYSYMBOL_fin_si = 59,                    /* fin_si  */
  YYSYMBOL_super_haz = 60,                 /* super_haz  */
  YYSYMBOL_haz_st = 61,                    /* haz_st  */
  YYSYMBOL_fin_haz = 62,                   /* fin_haz  */
  YYSYMBOL_mientras_st = 63,               /* mientras_st  */
  YYSYMBOL_fin_mientras = 64,              /* fin_mientras  */
  YYSYMBOL_sentencia_booleana = 65,        /* sentencia_booleana  */
  YYSYMBOL_sentencia_logica = 66,          /* sentencia_logica  */
  YYSYMBOL_sentencia_not = 67,             /* sentencia_not  */
  YYSYMBOL_boolean = 68,                   /* boolean  */
  YYSYMBOL_sentencia_comparativa = 69,     /* sentencia_comparativa  */
  YYSYMBOL_comparador = 70                 /* comparador  */
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
typedef yytype_int8 yy_state_t;

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

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   98

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  103

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   288


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
      35,    36,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    37,     2,
       2,    34,     2,     2,     2,     2,     2,     2,     2,     2,
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    55,    55,    56,    58,    60,    60,    60,    63,    64,
      65,    66,    68,    78,    89,    89,    91,   101,   103,   115,
     126,   138,   139,   156,   158,   159,   160,   161,   162,   164,
     165,   167,   185,   186,   188,   188,   190,   192,   194,   196,
     199,   201,   203,   205,   207,   210,   211,   212,   213,   214,
     215,   216,   218,   219,   221,   222,   224,   225,   227,   229,
     230,   231,   232,   233
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
  "\"end of file\"", "error", "\"invalid token\"", "FIN_LINEA",
  "DOS_PUNTOS", "MAS", "MENOS", "POR", "DIVIDIDO", "MOD", "VERDADERO",
  "FALSO", "MENOR", "MAYOR", "MENOR_IGUAL", "MAYOR_IGUAL", "IGUAL",
  "PARENTESIS_ABRE", "PARENTESIS_CIERRA", "MIENTRAS", "HAZ", "SI",
  "COMILLA", "Y", "O", "NO", "IMPRIMIR", "SINO", "NUMERO", "TEXTO",
  "VAR_NUMERO", "VAR_TEXTO", "NOMBRE", "FIN", "'='", "'('", "')'", "':'",
  "$accept", "S", "begin", "end", "CODE", "INSTRUCCION", "DECLARACION",
  "asignacion", "ASIGNACION_NUM", "ASIGNACION_TEXT", "declara_y_asigna",
  "print", "operacion", "operador", "parentesis_st_abre",
  "parentesis_st_cierra", "valor", "CONTROL_LOGICO", "super_si", "si_st",
  "entonces_haz", "fin_si", "super_haz", "haz_st", "fin_haz",
  "mientras_st", "fin_mientras", "sentencia_booleana", "sentencia_logica",
  "sentencia_not", "boolean", "sentencia_comparativa", "comparador", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,    61,    40,    41,    58
};
#endif

#define YYPACT_NINF (-49)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-17)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -49,    22,    37,   -49,   -49,   -49,   -14,    -6,     0,     4,
     -49,    36,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
      -5,   -49,     6,    12,    13,    10,    14,     2,   -49,   -49,
     -49,   -49,   -49,    21,   -49,   -49,    -5,    70,    15,    -1,
      -9,   -49,    37,    31,    24,    34,    30,    61,   -49,   -49,
      23,    82,   -49,    47,    65,    47,   -49,   -49,   -49,   -49,
     -49,    23,   -49,    37,    -5,   -49,   -49,   -49,    -1,    33,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,    23,
     -49,   -49,    -9,   -49,    42,    47,    -5,   -49,   -49,    57,
     -49,     7,   -49,   -49,   -49,    47,   -49,    -5,   -49,   -49,
      89,   -49,   -49
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     5,     1,    41,    37,     0,     0,     0,     0,
       4,     0,     8,     9,    14,    15,    10,    11,     7,    34,
       0,    35,     0,     0,     0,    12,    13,     0,     2,     6,
      56,    57,    29,    54,    32,    31,     0,     0,     0,     0,
      45,    51,     5,     0,     0,     0,     0,    32,    18,    17,
       0,     0,    55,     0,     0,     0,    59,    60,    62,    61,
      63,     0,    38,     5,     0,    50,    52,    53,     0,     0,
      21,    22,    19,    20,    24,    25,    26,    27,    28,     0,
      30,    33,     0,    58,     0,     0,     0,    46,    42,     0,
      23,     0,    39,    36,    49,     0,    43,     0,    47,    48,
       0,    44,    40
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -49,   -49,   -49,   -49,   -34,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,    66,   -49,   -26,   -48,   -25,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -36,    16,    62,
     -35,   -49,   -49
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,    28,    10,    11,    12,    13,    14,    15,
      16,    17,    53,    79,    36,    81,    37,    18,    19,    20,
      63,    93,    21,    22,    89,    97,   102,    38,    68,    39,
      40,    41,    61
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      55,    50,    51,    23,    65,    30,    31,    82,    69,    30,
      31,    54,    32,    64,    66,    67,    32,    30,    31,    32,
      33,    24,     3,    34,    50,    51,    25,    35,    85,    84,
      47,    48,    26,    87,    35,    50,    83,    94,    27,    29,
      32,    43,    86,    42,    45,    44,    33,    99,    46,    70,
      95,    34,    62,    50,    90,    35,    98,     4,     5,    73,
      71,   100,    72,     6,   -16,    80,    88,     7,     8,     9,
      74,    75,    76,    77,    78,    92,    96,    56,    57,    58,
      59,    60,    56,    57,    58,    59,    60,    74,    75,    76,
      77,    78,   101,    49,     0,    52,     0,     0,    91
};

static const yytype_int8 yycheck[] =
{
      36,    27,    27,    17,    39,    10,    11,    55,    42,    10,
      11,    36,    17,    39,    23,    24,    17,    10,    11,    17,
      25,    35,     0,    28,    50,    50,    32,    32,    64,    63,
      28,    29,    32,    68,    32,    61,    61,    85,    34,     3,
      17,    29,    68,    37,    34,    32,    25,    95,    34,    18,
      86,    28,    37,    79,    79,    32,    91,    20,    21,    29,
      36,    97,    28,    26,     3,    18,    33,    30,    31,    32,
       5,     6,     7,     8,     9,    33,    19,    12,    13,    14,
      15,    16,    12,    13,    14,    15,    16,     5,     6,     7,
       8,     9,     3,    27,    -1,    33,    -1,    -1,    82
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    39,    40,     0,    20,    21,    26,    30,    31,    32,
      42,    43,    44,    45,    46,    47,    48,    49,    55,    56,
      57,    60,    61,    17,    35,    32,    32,    34,    41,     3,
      10,    11,    17,    25,    28,    32,    52,    54,    65,    67,
      68,    69,    37,    29,    32,    34,    34,    28,    29,    50,
      52,    54,    67,    50,    54,    65,    12,    13,    14,    15,
      16,    70,    37,    58,    52,    68,    23,    24,    66,    42,
      18,    36,    28,    29,     5,     6,     7,     8,     9,    51,
      18,    53,    53,    54,    42,    65,    52,    68,    33,    62,
      54,    66,    33,    59,    53,    65,    19,    63,    68,    53,
      65,     3,    64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    39,    40,    41,    42,    42,    42,    43,    43,
      43,    43,    44,    44,    45,    45,    46,    46,    47,    48,
      48,    49,    49,    50,    51,    51,    51,    51,    51,    52,
      53,    54,    54,    54,    55,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    65,    65,    65,    65,
      65,    65,    66,    66,    67,    67,    68,    68,    69,    70,
      70,    70,    70,    70
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     0,     0,     0,     2,     1,     1,     1,
       1,     1,     2,     2,     1,     1,     3,     3,     3,     4,
       4,     4,     4,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     5,     1,     1,     1,
       7,     1,     1,     1,     1,     1,     3,     5,     5,     4,
       2,     1,     1,     1,     1,     2,     1,     1,     3,     1,
       1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
  case 3: /* begin: %empty  */
#line 56 "chipa.y"
       {printf("#include \"LinkedList.h\"\n int main() {");}
#line 1333 "y.tab.c"
    break;

  case 4: /* end: %empty  */
#line 58 "chipa.y"
     {printf("}");}
#line 1339 "y.tab.c"
    break;

  case 8: /* INSTRUCCION: DECLARACION  */
#line 63 "chipa.y"
                {}
#line 1345 "y.tab.c"
    break;

  case 9: /* INSTRUCCION: asignacion  */
#line 64 "chipa.y"
                {}
#line 1351 "y.tab.c"
    break;

  case 10: /* INSTRUCCION: declara_y_asigna  */
#line 65 "chipa.y"
                      {}
#line 1357 "y.tab.c"
    break;

  case 11: /* INSTRUCCION: print  */
#line 66 "chipa.y"
           {}
#line 1363 "y.tab.c"
    break;

  case 12: /* DECLARACION: VAR_NUMERO NOMBRE  */
#line 68 "chipa.y"
                               {
        if(find((yyvsp[0].texto))!=NULL){
            yyerror("Variable ya definida");
            fprintf(stderr, "La variable ya se definio previamente");
            YYABORT;
        }
        else {
            insert((yyvsp[0].texto), 0, 1);
        }
    }
#line 1378 "y.tab.c"
    break;

  case 13: /* DECLARACION: VAR_TEXTO NOMBRE  */
#line 78 "chipa.y"
                        {     
        if(find((yyvsp[0].texto)) != NULL){
            yyerror("Variable ya definida");
            fprintf(stderr, "La variable ya se definio previamente");
            YYABORT;
        }
        else {
            insert((yyvsp[0].texto), '\0', 0);
        };
    }
#line 1393 "y.tab.c"
    break;

  case 16: /* ASIGNACION_NUM: NOMBRE '=' NUMERO  */
#line 91 "chipa.y"
                                  {
    struct node* aux;
    if((aux=find((yyvsp[-2].texto))) != NULL){
        aux->data = (void *) &((yyvsp[0].numero));
    }else{
        yyerror("La variable que se intento asignar no existe");
        fprintf(stderr, "La variable que se intento asignar no existe");
        YYABORT;
    }
}
#line 1408 "y.tab.c"
    break;

  case 18: /* ASIGNACION_TEXT: NOMBRE '=' TEXTO  */
#line 103 "chipa.y"
                                  {
    struct node* aux;
    if((aux=find((yyvsp[-2].texto))) != NULL){
        aux->data = (void *)(yyvsp[0].texto);
    }else{
        yyerror("La variable que se intento asignar no existe");
        //fprintf(stderr, "Error en la linea %d. La variable que se intento asignar no existe", yylineno);
        fprintf(stderr, "Error en alguna linea, capo. La variable que se intento asignar no existe");
        YYABORT;
    }
}
#line 1424 "y.tab.c"
    break;

  case 19: /* declara_y_asigna: VAR_NUMERO NOMBRE '=' NUMERO  */
#line 115 "chipa.y"
                                              {
    struct node* aux;
        if(find((yyvsp[-2].texto))!=NULL){
            yyerror("Variable ya definida");
            fprintf(stderr, "La variable ya se definio previamente");
            YYABORT;
        }
        else {
            insert((yyvsp[-2].texto), &((yyvsp[0].numero)), 1);
        }
    }
#line 1440 "y.tab.c"
    break;

  case 20: /* declara_y_asigna: VAR_TEXTO NOMBRE '=' TEXTO  */
#line 126 "chipa.y"
                               {
        if(find((yyvsp[-2].texto))!=NULL){
            yyerror("Variable ya definida");
            fprintf(stderr, "La variable ya se definio previamente");
            YYABORT;
        }
        else {
            insert((yyvsp[-2].texto), (yyvsp[0].texto), 0);
        }
    }
#line 1455 "y.tab.c"
    break;

  case 21: /* print: IMPRIMIR PARENTESIS_ABRE TEXTO PARENTESIS_CIERRA  */
#line 138 "chipa.y"
                                                         { printf("printf(%s);", (yyvsp[-1].texto)) ; }
#line 1461 "y.tab.c"
    break;

  case 22: /* print: IMPRIMIR '(' NOMBRE ')'  */
#line 139 "chipa.y"
                                 {
            struct node* aux;
            if((aux=find((yyvsp[-1].texto))) != NULL){
                if(aux->type == 1)
                    printf("printf(\" %d \")", aux->data);
                if(aux->type == 0)
                    printf("printf(\" %s \")", aux->data);
                    
            } else {
                yyerror("La variable que se intento imprimir no existe");
                //fprintf(stderr, "Error en la linea %d. La variable que se intento imprimir no existe", yylineno);
                fprintf(stderr, "Error en alguna linea, capo. La variable que se intento asignar no existe");
                YYABORT;
            }
        }
#line 1481 "y.tab.c"
    break;

  case 24: /* operador: MAS  */
#line 158 "chipa.y"
             {printf(" + ");}
#line 1487 "y.tab.c"
    break;

  case 25: /* operador: MENOS  */
#line 159 "chipa.y"
              {printf(" - ");}
#line 1493 "y.tab.c"
    break;

  case 26: /* operador: POR  */
#line 160 "chipa.y"
            {printf(" * ");}
#line 1499 "y.tab.c"
    break;

  case 27: /* operador: DIVIDIDO  */
#line 161 "chipa.y"
                 {printf(" / ");}
#line 1505 "y.tab.c"
    break;

  case 28: /* operador: MOD  */
#line 162 "chipa.y"
            {printf(" % ");}
#line 1511 "y.tab.c"
    break;

  case 29: /* parentesis_st_abre: PARENTESIS_ABRE  */
#line 164 "chipa.y"
                                   {printf(" ( ");}
#line 1517 "y.tab.c"
    break;

  case 30: /* parentesis_st_cierra: PARENTESIS_CIERRA  */
#line 165 "chipa.y"
                                       {printf(" ) ");}
#line 1523 "y.tab.c"
    break;

  case 31: /* valor: NOMBRE  */
#line 167 "chipa.y"
              {
    struct node* aux;
    if((aux=find((yyvsp[0].texto))) != NULL) {
        if(aux->type != 1){
            yyerror("La variable que se intento usar no es un numero");
            //fprintf(stderr, "Error en la linea %d. La variable que se intento usar no es un numero", yylineno);
            fprintf(stderr, "Error en alguna linea, capo. La variable que se intento asignar no existe");        
            YYABORT; 
        } else {
            printf("%s", (yyvsp[0].texto));
        }
    } else {
            yyerror("La variable que se intento usar no existe");
            //fprintf(stderr, "Error en la linea %d. La variable que se intento usar no existe", yylineno);
            fprintf(stderr, "Error en alguna linea, capo. La variable que se intento asignar no existe");        
            YYABORT; 
    } }
#line 1545 "y.tab.c"
    break;

  case 32: /* valor: NUMERO  */
#line 185 "chipa.y"
             {printf("%d", (yyvsp[0].numero));}
#line 1551 "y.tab.c"
    break;

  case 37: /* si_st: SI  */
#line 192 "chipa.y"
          {printf("if(");}
#line 1557 "y.tab.c"
    break;

  case 38: /* entonces_haz: ':'  */
#line 194 "chipa.y"
                  {printf("){\n");}
#line 1563 "y.tab.c"
    break;

  case 39: /* fin_si: FIN  */
#line 196 "chipa.y"
            {printf("}\n");}
#line 1569 "y.tab.c"
    break;

  case 41: /* haz_st: HAZ  */
#line 201 "chipa.y"
            {printf("do{");}
#line 1575 "y.tab.c"
    break;

  case 42: /* fin_haz: FIN  */
#line 203 "chipa.y"
             {printf("}\n");}
#line 1581 "y.tab.c"
    break;

  case 43: /* mientras_st: MIENTRAS  */
#line 205 "chipa.y"
                      {printf("while(");}
#line 1587 "y.tab.c"
    break;

  case 44: /* fin_mientras: FIN_LINEA  */
#line 207 "chipa.y"
                        {printf(");\n");}
#line 1593 "y.tab.c"
    break;

  case 52: /* sentencia_logica: Y  */
#line 218 "chipa.y"
                    {printf("&&");}
#line 1599 "y.tab.c"
    break;

  case 53: /* sentencia_logica: O  */
#line 219 "chipa.y"
            {printf("||");}
#line 1605 "y.tab.c"
    break;

  case 54: /* sentencia_not: NO  */
#line 221 "chipa.y"
                  {printf("!");}
#line 1611 "y.tab.c"
    break;

  case 56: /* boolean: VERDADERO  */
#line 224 "chipa.y"
                  {printf("1");}
#line 1617 "y.tab.c"
    break;

  case 57: /* boolean: FALSO  */
#line 225 "chipa.y"
               {printf("0");}
#line 1623 "y.tab.c"
    break;

  case 59: /* comparador: MENOR  */
#line 229 "chipa.y"
                  {printf("<");}
#line 1629 "y.tab.c"
    break;

  case 60: /* comparador: MAYOR  */
#line 230 "chipa.y"
                {printf(">");}
#line 1635 "y.tab.c"
    break;

  case 61: /* comparador: MAYOR_IGUAL  */
#line 231 "chipa.y"
                      {printf(">=");}
#line 1641 "y.tab.c"
    break;

  case 62: /* comparador: MENOR_IGUAL  */
#line 232 "chipa.y"
                      {printf("<=");}
#line 1647 "y.tab.c"
    break;

  case 63: /* comparador: IGUAL  */
#line 233 "chipa.y"
               {printf("==");}
#line 1653 "y.tab.c"
    break;


#line 1657 "y.tab.c"

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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
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

#line 236 "chipa.y"



int main(void) {
    //list* symbolTable = (list*) malloc(sizeof(list));
    yyparse();
}
