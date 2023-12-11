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
#line 1 "bison.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <stdbool.h>

    extern FILE *yyin;
    extern int yylex();
    extern int yylineno;
    extern char *yytext;
    extern void yyerror(const char* err);
    
    bool has_layout_width=false,has_layout_height=false, has_android_text=false, has_android_src=false;

    
    void id_unique(char *id_value);
  
    char array[100][100]; //gia thn synartisi id_unique
    int amount=0;         //gia thn synartisi id_unique


    void checkedButton_existed(char *str);    //gia to erwtima 2d
    void id_checkedButton(char *str);        //gia to erwtima 2d
    char checkedButton_id[10][100];          //gia to erwtima 2d
 
    bool existed_id_value=false;            //gia to erwtima 2d
    int amount_checked=1;                   //gia to erwtima 2d

    
    int max_progress[2];               //gia to erwtima 2e
    bool max_existed=false;            //gia to erwtima 2e
    bool progress_existed=false;       //gia to erwtima 2e


    void amount_equal(int value);      // gia to erwtima 3
    bool has_android_amount=false;     // gia to erwtima 3
    int checkedButton_amount;          // gia to erwtima 3
    int checkedButton_equal=0;         // gia to erwtima 3

#line 111 "bison.tab.c"

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

#include "bison.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_LESS_THAN = 3,                  /* LESS_THAN  */
  YYSYMBOL_GREATER_THAN = 4,               /* GREATER_THAN  */
  YYSYMBOL_COLON = 5,                      /* COLON  */
  YYSYMBOL_SLASH = 6,                      /* SLASH  */
  YYSYMBOL_ASSIGN = 7,                     /* ASSIGN  */
  YYSYMBOL_INT = 8,                        /* INT  */
  YYSYMBOL_STRING = 9,                     /* STRING  */
  YYSYMBOL_LINEAR_LAYOUT = 10,             /* LINEAR_LAYOUT  */
  YYSYMBOL_RELATIVE_LAYOUT = 11,           /* RELATIVE_LAYOUT  */
  YYSYMBOL_TEXT_VIEW = 12,                 /* TEXT_VIEW  */
  YYSYMBOL_IMAGE_VIEW = 13,                /* IMAGE_VIEW  */
  YYSYMBOL_BUTTON = 14,                    /* BUTTON  */
  YYSYMBOL_RADIO_BUTTON = 15,              /* RADIO_BUTTON  */
  YYSYMBOL_RADIO_GROUP = 16,               /* RADIO_GROUP  */
  YYSYMBOL_PROGRESS_BAR = 17,              /* PROGRESS_BAR  */
  YYSYMBOL_ANDROID = 18,                   /* ANDROID  */
  YYSYMBOL_LAYOUT_WIDTH = 19,              /* LAYOUT_WIDTH  */
  YYSYMBOL_LAYOUT_HEIGHT = 20,             /* LAYOUT_HEIGHT  */
  YYSYMBOL_ORIENTATION = 21,               /* ORIENTATION  */
  YYSYMBOL_ID = 22,                        /* ID  */
  YYSYMBOL_TEXT = 23,                      /* TEXT  */
  YYSYMBOL_SRC = 24,                       /* SRC  */
  YYSYMBOL_PADDING = 25,                   /* PADDING  */
  YYSYMBOL_MAX = 26,                       /* MAX  */
  YYSYMBOL_PROGRESS = 27,                  /* PROGRESS  */
  YYSYMBOL_TEXT_COLOR = 28,                /* TEXT_COLOR  */
  YYSYMBOL_CHECKED_BUTTON = 29,            /* CHECKED_BUTTON  */
  YYSYMBOL_AMOUNT = 30,                    /* AMOUNT  */
  YYSYMBOL_YYACCEPT = 31,                  /* $accept  */
  YYSYMBOL_xml = 32,                       /* xml  */
  YYSYMBOL_child_plus = 33,                /* child_plus  */
  YYSYMBOL_child = 34,                     /* child  */
  YYSYMBOL_radio_button_plus = 35,         /* radio_button_plus  */
  YYSYMBOL_str_or_int = 36,                /* str_or_int  */
  YYSYMBOL_linear_layout = 37,             /* linear_layout  */
  YYSYMBOL_38_1 = 38,                      /* $@1  */
  YYSYMBOL_39_2 = 39,                      /* $@2  */
  YYSYMBOL_linear_attributes = 40,         /* linear_attributes  */
  YYSYMBOL_linear_attribute = 41,          /* linear_attribute  */
  YYSYMBOL_42_3 = 42,                      /* $@3  */
  YYSYMBOL_linear_attribute_name = 43,     /* linear_attribute_name  */
  YYSYMBOL_44_4 = 44,                      /* $@4  */
  YYSYMBOL_45_5 = 45,                      /* $@5  */
  YYSYMBOL_46_6 = 46,                      /* $@6  */
  YYSYMBOL_47_7 = 47,                      /* $@7  */
  YYSYMBOL_relative_layout = 48,           /* relative_layout  */
  YYSYMBOL_49_8 = 49,                      /* $@8  */
  YYSYMBOL_50_9 = 50,                      /* $@9  */
  YYSYMBOL_relative_attributes = 51,       /* relative_attributes  */
  YYSYMBOL_relative_attribute = 52,        /* relative_attribute  */
  YYSYMBOL_53_10 = 53,                     /* $@10  */
  YYSYMBOL_relative_attribute_name = 54,   /* relative_attribute_name  */
  YYSYMBOL_55_11 = 55,                     /* $@11  */
  YYSYMBOL_56_12 = 56,                     /* $@12  */
  YYSYMBOL_57_13 = 57,                     /* $@13  */
  YYSYMBOL_58_14 = 58,                     /* $@14  */
  YYSYMBOL_text_view = 59,                 /* text_view  */
  YYSYMBOL_60_15 = 60,                     /* $@15  */
  YYSYMBOL_text_attributes = 61,           /* text_attributes  */
  YYSYMBOL_text_attribute = 62,            /* text_attribute  */
  YYSYMBOL_63_16 = 63,                     /* $@16  */
  YYSYMBOL_text_attribute_name = 64,       /* text_attribute_name  */
  YYSYMBOL_65_17 = 65,                     /* $@17  */
  YYSYMBOL_66_18 = 66,                     /* $@18  */
  YYSYMBOL_67_19 = 67,                     /* $@19  */
  YYSYMBOL_68_20 = 68,                     /* $@20  */
  YYSYMBOL_69_21 = 69,                     /* $@21  */
  YYSYMBOL_image_view = 70,                /* image_view  */
  YYSYMBOL_71_22 = 71,                     /* $@22  */
  YYSYMBOL_image_view_attributes = 72,     /* image_view_attributes  */
  YYSYMBOL_image_view_attribute = 73,      /* image_view_attribute  */
  YYSYMBOL_74_23 = 74,                     /* $@23  */
  YYSYMBOL_image_view_attribute_name = 75, /* image_view_attribute_name  */
  YYSYMBOL_76_24 = 76,                     /* $@24  */
  YYSYMBOL_77_25 = 77,                     /* $@25  */
  YYSYMBOL_78_26 = 78,                     /* $@26  */
  YYSYMBOL_79_27 = 79,                     /* $@27  */
  YYSYMBOL_80_28 = 80,                     /* $@28  */
  YYSYMBOL_button = 81,                    /* button  */
  YYSYMBOL_82_29 = 82,                     /* $@29  */
  YYSYMBOL_button_attributes = 83,         /* button_attributes  */
  YYSYMBOL_button_attribute = 84,          /* button_attribute  */
  YYSYMBOL_85_30 = 85,                     /* $@30  */
  YYSYMBOL_button_attribute_name = 86,     /* button_attribute_name  */
  YYSYMBOL_87_31 = 87,                     /* $@31  */
  YYSYMBOL_88_32 = 88,                     /* $@32  */
  YYSYMBOL_89_33 = 89,                     /* $@33  */
  YYSYMBOL_90_34 = 90,                     /* $@34  */
  YYSYMBOL_91_35 = 91,                     /* $@35  */
  YYSYMBOL_radio_group = 92,               /* radio_group  */
  YYSYMBOL_93_36 = 93,                     /* $@36  */
  YYSYMBOL_94_37 = 94,                     /* $@37  */
  YYSYMBOL_radio_group_attributes = 95,    /* radio_group_attributes  */
  YYSYMBOL_radio_group_attribute = 96,     /* radio_group_attribute  */
  YYSYMBOL_97_38 = 97,                     /* $@38  */
  YYSYMBOL_radio_group_attribute_name = 98, /* radio_group_attribute_name  */
  YYSYMBOL_99_39 = 99,                     /* $@39  */
  YYSYMBOL_100_40 = 100,                   /* $@40  */
  YYSYMBOL_101_41 = 101,                   /* $@41  */
  YYSYMBOL_102_42 = 102,                   /* $@42  */
  YYSYMBOL_103_43 = 103,                   /* $@43  */
  YYSYMBOL_radio_button = 104,             /* radio_button  */
  YYSYMBOL_105_44 = 105,                   /* $@44  */
  YYSYMBOL_radio_button_attributes = 106,  /* radio_button_attributes  */
  YYSYMBOL_radio_button_attribute = 107,   /* radio_button_attribute  */
  YYSYMBOL_108_45 = 108,                   /* $@45  */
  YYSYMBOL_radio_button_attribute_name = 109, /* radio_button_attribute_name  */
  YYSYMBOL_110_46 = 110,                   /* $@46  */
  YYSYMBOL_111_47 = 111,                   /* $@47  */
  YYSYMBOL_112_48 = 112,                   /* $@48  */
  YYSYMBOL_113_49 = 113,                   /* $@49  */
  YYSYMBOL_114_50 = 114,                   /* $@50  */
  YYSYMBOL_progress_bar = 115,             /* progress_bar  */
  YYSYMBOL_116_51 = 116,                   /* $@51  */
  YYSYMBOL_progress_bar_attributes = 117,  /* progress_bar_attributes  */
  YYSYMBOL_progress_bar_attribute = 118,   /* progress_bar_attribute  */
  YYSYMBOL_119_52 = 119,                   /* $@52  */
  YYSYMBOL_progress_bar_attribute_name = 120, /* progress_bar_attribute_name  */
  YYSYMBOL_121_53 = 121,                   /* $@53  */
  YYSYMBOL_122_54 = 122,                   /* $@54  */
  YYSYMBOL_123_55 = 123,                   /* $@55  */
  YYSYMBOL_124_56 = 124                    /* $@56  */
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
typedef yytype_int16 yy_state_t;

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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   227

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  94
/* YYNRULES -- Number of rules.  */
#define YYNRULES  141
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  270

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   285


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
      25,    26,    27,    28,    29,    30
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    86,    86,    86,    89,    89,    90,    90,    90,    90,
      90,    90,    90,    90,    91,    91,    94,    96,   100,   100,
     100,   107,   107,   109,   109,   111,   111,   111,   112,   112,
     112,   113,   114,   117,   117,   117,   124,   124,   126,   126,
     128,   128,   128,   129,   129,   129,   130,   133,   133,   140,
     140,   142,   142,   144,   144,   144,   145,   145,   145,   146,
     146,   147,   148,   151,   151,   157,   157,   159,   159,   161,
     161,   161,   162,   162,   162,   163,   163,   164,   165,   168,
     168,   174,   174,   176,   176,   178,   178,   178,   179,   179,
     179,   180,   180,   181,   182,   187,   187,   187,   202,   202,
     204,   204,   206,   206,   206,   207,   207,   207,   208,   209,
     210,   210,   216,   216,   222,   222,   224,   224,   226,   226,
     226,   227,   227,   227,   228,   228,   229,   232,   232,   245,
     245,   247,   247,   249,   249,   249,   250,   250,   250,   251,
     252,   254
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "LESS_THAN",
  "GREATER_THAN", "COLON", "SLASH", "ASSIGN", "INT", "STRING",
  "LINEAR_LAYOUT", "RELATIVE_LAYOUT", "TEXT_VIEW", "IMAGE_VIEW", "BUTTON",
  "RADIO_BUTTON", "RADIO_GROUP", "PROGRESS_BAR", "ANDROID", "LAYOUT_WIDTH",
  "LAYOUT_HEIGHT", "ORIENTATION", "ID", "TEXT", "SRC", "PADDING", "MAX",
  "PROGRESS", "TEXT_COLOR", "CHECKED_BUTTON", "AMOUNT", "$accept", "xml",
  "child_plus", "child", "radio_button_plus", "str_or_int",
  "linear_layout", "$@1", "$@2", "linear_attributes", "linear_attribute",
  "$@3", "linear_attribute_name", "$@4", "$@5", "$@6", "$@7",
  "relative_layout", "$@8", "$@9", "relative_attributes",
  "relative_attribute", "$@10", "relative_attribute_name", "$@11", "$@12",
  "$@13", "$@14", "text_view", "$@15", "text_attributes", "text_attribute",
  "$@16", "text_attribute_name", "$@17", "$@18", "$@19", "$@20", "$@21",
  "image_view", "$@22", "image_view_attributes", "image_view_attribute",
  "$@23", "image_view_attribute_name", "$@24", "$@25", "$@26", "$@27",
  "$@28", "button", "$@29", "button_attributes", "button_attribute",
  "$@30", "button_attribute_name", "$@31", "$@32", "$@33", "$@34", "$@35",
  "radio_group", "$@36", "$@37", "radio_group_attributes",
  "radio_group_attribute", "$@38", "radio_group_attribute_name", "$@39",
  "$@40", "$@41", "$@42", "$@43", "radio_button", "$@44",
  "radio_button_attributes", "radio_button_attribute", "$@45",
  "radio_button_attribute_name", "$@46", "$@47", "$@48", "$@49", "$@50",
  "progress_bar", "$@51", "progress_bar_attributes",
  "progress_bar_attribute", "$@52", "progress_bar_attribute_name", "$@53",
  "$@54", "$@55", "$@56", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-78)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,    -7,    29,   -78,   -78,   -78,   -78,   -78,    25,    37,
      31,    56,    25,    57,    66,    37,   -78,   -78,   -78,   -78,
     -78,   -78,    60,     2,    65,     2,   -78,   -78,    69,    76,
     -78,    40,   -78,    36,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,    79,   -78,    64,    81,    82,    63,
      83,   -78,   -78,   -78,   -78,   -78,    -4,   -78,    84,    86,
      85,     9,   -78,   -78,   -78,   -78,    72,    77,    78,    80,
      87,    89,   -78,   -78,   -78,    90,    38,    38,    92,    94,
      72,    97,    98,    77,   101,   102,    78,   104,    99,    80,
     105,   106,    87,   103,    38,    38,   107,   -78,   -78,   -78,
     -78,   -78,   109,   -78,   -78,   110,   -78,   -78,   111,   -78,
     -78,   -78,   -78,   -78,   112,   -78,   -78,   -78,   -78,   -78,
      12,   -78,    39,   -78,    46,   -78,     8,   114,    22,   -78,
     -78,   -78,   113,   -78,   115,   -78,   -78,   -78,   116,   -78,
     117,   -78,   -78,   -78,   118,   -78,   119,   -78,   -78,   -78,
     120,   121,   -78,   -78,   122,   126,   -78,   -78,   -78,   123,
     124,   125,   -78,   127,   128,   129,   132,   131,   136,   139,
     140,   145,   146,   148,   149,   144,   152,   153,   155,   156,
     151,   157,   158,   -78,    18,   -78,   160,   161,   162,   164,
     165,   -78,   -78,   -78,   166,   -78,   -78,   -78,   -78,   167,
     -78,   -78,   -78,   -78,   168,   -78,   -78,   -78,   -78,   -78,
     170,   100,   154,   -78,   -78,   -78,   -78,   -78,    38,    38,
     -78,    38,    38,   -78,    38,    38,   -78,    38,    38,   -78,
     159,   130,   100,   175,    38,    38,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   176,   -78,   -78,   -78,   -78,
      55,   -78,   -78,   -78,   174,   -78,   -78,   177,   178,   173,
     179,   -78,   -78,   -78,   181,    38,    38,   -78,   -78,   -78
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     3,    18,    33,     1,     0,     0,
       0,     0,    21,     0,     0,    36,    23,    19,    22,    38,
      34,    37,     0,     0,     0,     0,    25,    28,     0,     0,
      24,     0,    13,     0,     4,    11,    12,     6,     7,     8,
       9,    10,    40,    43,     0,    39,     0,     0,     0,     0,
       0,    47,    63,    79,    95,   127,     0,     5,     0,     0,
       0,     0,    26,    29,    31,    32,     0,     0,     0,     0,
       0,     0,    41,    44,    46,     0,     0,     0,     0,     0,
      49,     0,     0,    65,     0,     0,    81,     0,     0,    98,
       0,     0,   129,     0,     0,     0,     0,    17,    16,    27,
      30,    51,     0,    50,    67,     0,    66,    83,     0,    82,
     100,    96,    99,   131,     0,   130,    20,    42,    45,    35,
       0,    48,     0,    64,     0,    80,     0,     0,     0,   128,
      53,    56,     0,    59,     0,    52,    69,    72,     0,    75,
       0,    68,    85,    88,     0,    91,     0,    84,   102,   105,
       0,     0,   110,   101,     0,     0,    14,   133,   136,     0,
       0,     0,   132,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   112,     0,    15,     0,     0,     0,     0,
       0,    54,    57,    61,     0,    62,    70,    73,    77,     0,
      78,    86,    89,    93,     0,    94,   103,   106,   108,   109,
       0,     0,     0,   134,   137,   139,   140,   141,     0,     0,
      60,     0,     0,    76,     0,     0,    92,     0,     0,   111,
       0,     0,   114,     0,     0,     0,    55,    58,    71,    74,
      87,    90,   104,   107,   116,     0,   115,    97,   135,   138,
       0,   113,   118,   121,     0,   124,   117,     0,     0,     0,
       0,   119,   122,   126,     0,     0,     0,   125,   120,   123
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -78,   -78,    96,   -32,   -78,   -77,   133,   -78,   -78,   171,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   169,   -78,   -78,
     172,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     134,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,    91,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,    33,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   108,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,    41,   -78,   -41,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   135,   -78,   -78,   -78,
     -78,   -78,   -78,   -78
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,    33,    34,   155,    99,    35,     8,    23,    11,
      12,    22,    30,    47,    76,    48,    77,    36,     9,    25,
      14,    15,    24,    45,    58,    94,    59,    95,    37,    66,
      79,    80,   120,   135,   163,   218,   164,   219,   166,    38,
      67,    82,    83,   122,   141,   168,   221,   169,   222,   171,
      39,    68,    85,    86,   124,   147,   173,   224,   174,   225,
     176,    40,    69,   127,    88,    89,   126,   153,   178,   227,
     179,   228,   182,   156,   211,   231,   232,   250,   256,   257,
     265,   258,   266,   260,    41,    70,    91,    92,   128,   162,
     186,   234,   187,   235
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     100,    57,    71,     5,     6,    31,     5,     6,    51,    52,
      53,    32,    54,    55,    57,    75,     1,   117,   118,     5,
       6,    51,    52,    53,   212,    54,    55,   148,   149,     7,
     150,   130,   131,   183,   132,   133,    16,   151,   152,    56,
     134,   157,   158,    10,   159,    32,    97,    98,   160,   161,
       5,     6,    51,    52,    53,    13,    54,    55,   136,   137,
      17,   138,    19,   139,   140,   142,   143,    61,   144,   145,
      20,   146,    64,    32,   252,   253,    49,   254,   255,    26,
      27,    28,    29,    50,    42,    43,    60,    44,    62,    63,
      78,    72,    65,    73,    74,    81,    84,   101,    87,    93,
     102,    96,   104,   111,   105,    90,   107,   116,   108,   110,
     113,   119,   114,   121,   123,   125,   129,   154,   230,   109,
     165,    46,   167,   170,   172,   175,   177,   180,   181,   184,
     188,   189,   190,     3,   191,   192,   245,   183,   193,   194,
     195,   236,   237,   196,   238,   239,   197,   240,   241,   198,
     242,   243,   199,   203,   200,   201,   202,   248,   249,   204,
     208,   205,   206,   207,   244,   210,   209,   213,   214,     4,
     233,   215,   216,   217,   106,   220,   223,   226,   229,   247,
     251,   259,   263,    18,   261,   262,   264,    21,   268,   269,
     267,   246,     0,     0,     0,     0,   185,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   103,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   115
};

static const yytype_int16 yycheck[] =
{
      77,    33,     6,    10,    11,     3,    10,    11,    12,    13,
      14,     9,    16,    17,    46,     6,     3,    94,    95,    10,
      11,    12,    13,    14,     6,    16,    17,    19,    20,     0,
      22,    19,    20,    15,    22,    23,     5,    29,    30,     3,
      28,    19,    20,    18,    22,     9,     8,     9,    26,    27,
      10,    11,    12,    13,    14,    18,    16,    17,    19,    20,
       4,    22,     5,    24,    25,    19,    20,     3,    22,    23,
       4,    25,     9,     9,    19,    20,     7,    22,    23,    19,
      20,    21,    22,     7,    19,    20,     7,    22,     7,     7,
      18,     7,     9,     7,     9,    18,    18,     5,    18,    10,
       6,    11,     5,     4,     6,    18,     5,     4,     6,     5,
       5,     4,     6,     4,     4,     4,     4,     3,    18,    86,
       7,    25,     7,     7,     7,     7,     7,     7,     7,     3,
       7,     7,     7,     0,     7,     7,     6,    15,     9,     7,
       9,   218,   219,     7,   221,   222,     7,   224,   225,     9,
     227,   228,     7,     9,     8,     7,     7,   234,   235,     7,
       9,     8,     7,     7,     5,     7,     9,     7,     7,     0,
      16,     9,     8,     8,    83,     9,     9,     9,     8,     4,
       4,     7,     9,    12,     7,     7,     7,    15,   265,   266,
       9,   232,    -1,    -1,    -1,    -1,   155,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    32,    37,    48,    10,    11,     0,    38,    49,
      18,    40,    41,    18,    51,    52,     5,     4,    40,     5,
       4,    51,    42,    39,    53,    50,    19,    20,    21,    22,
      43,     3,     9,    33,    34,    37,    48,    59,    70,    81,
      92,   115,    19,    20,    22,    54,    33,    44,    46,     7,
       7,    12,    13,    14,    16,    17,     3,    34,    55,    57,
       7,     3,     7,     7,     9,     9,    60,    71,    82,    93,
     116,     6,     7,     7,     9,     6,    45,    47,    18,    61,
      62,    18,    72,    73,    18,    83,    84,    18,    95,    96,
      18,   117,   118,    10,    56,    58,    11,     8,     9,    36,
      36,     5,     6,    61,     5,     6,    72,     5,     6,    83,
       5,     4,    95,     5,     6,   117,     4,    36,    36,     4,
      63,     4,    74,     4,    85,     4,    97,    94,   119,     4,
      19,    20,    22,    23,    28,    64,    19,    20,    22,    24,
      25,    75,    19,    20,    22,    23,    25,    86,    19,    20,
      22,    29,    30,    98,     3,    35,   104,    19,    20,    22,
      26,    27,   120,    65,    67,     7,    69,     7,    76,    78,
       7,    80,     7,    87,    89,     7,    91,     7,    99,   101,
       7,     7,   103,    15,     3,   104,   121,   123,     7,     7,
       7,     7,     7,     9,     7,     9,     7,     7,     9,     7,
       8,     7,     7,     9,     7,     8,     7,     7,     9,     9,
       7,   105,     6,     7,     7,     9,     8,     8,    66,    68,
       9,    77,    79,     9,    88,    90,     9,   100,   102,     8,
      18,   106,   107,    16,   122,   124,    36,    36,    36,    36,
      36,    36,    36,    36,     5,     6,   106,     4,    36,    36,
     108,     4,    19,    20,    22,    23,   109,   110,   112,     7,
     114,     7,     7,     9,     7,   111,   113,     9,    36,    36
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    31,    32,    32,    33,    33,    34,    34,    34,    34,
      34,    34,    34,    34,    35,    35,    36,    36,    38,    39,
      37,    40,    40,    42,    41,    44,    45,    43,    46,    47,
      43,    43,    43,    49,    50,    48,    51,    51,    53,    52,
      55,    56,    54,    57,    58,    54,    54,    60,    59,    61,
      61,    63,    62,    65,    66,    64,    67,    68,    64,    69,
      64,    64,    64,    71,    70,    72,    72,    74,    73,    76,
      77,    75,    78,    79,    75,    80,    75,    75,    75,    82,
      81,    83,    83,    85,    84,    87,    88,    86,    89,    90,
      86,    91,    86,    86,    86,    93,    94,    92,    95,    95,
      97,    96,    99,   100,    98,   101,   102,    98,    98,    98,
     103,    98,   105,   104,   106,   106,   108,   107,   110,   111,
     109,   112,   113,   109,   114,   109,   109,   116,   115,   117,
     117,   119,   118,   121,   122,   120,   123,   124,   120,   120,
     120,   120
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     0,     0,
      11,     1,     2,     0,     4,     0,     0,     5,     0,     0,
       5,     3,     3,     0,     0,    11,     1,     2,     0,     4,
       0,     0,     5,     0,     0,     5,     3,     0,     6,     1,
       2,     0,     4,     0,     0,     5,     0,     0,     5,     0,
       4,     3,     3,     0,     6,     1,     2,     0,     4,     0,
       0,     5,     0,     0,     5,     0,     4,     3,     3,     0,
       6,     1,     2,     0,     4,     0,     0,     5,     0,     0,
       5,     0,     4,     3,     3,     0,     0,    11,     1,     2,
       0,     4,     0,     0,     5,     0,     0,     5,     3,     3,
       0,     4,     0,     6,     1,     2,     0,     4,     0,     0,
       5,     0,     0,     5,     0,     4,     3,     0,     6,     1,
       2,     0,     4,     0,     0,     5,     0,     0,     5,     3,
       3,     3
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
  case 16: /* str_or_int: STRING  */
#line 94 "bison.y"
                     {printf("%s",yylval.strval); if(strcmp(yylval.strval,"\"wrap_content\"")!=0 && strcmp(yylval.strval,"\"match_parent\"")!=0) 
                                                  yyerror("In layout_width and layout_height only match_parent and wrap_content attributes are available strings.\n"); }
#line 1687 "bison.tab.c"
    break;

  case 17: /* str_or_int: INT  */
#line 96 "bison.y"
                  {printf("\"%d\"",yylval.intval); if(yylval.intval<=0) 
                                                   yyerror("In layout_width and layout_height a strictly positive number is required.\n");}
#line 1694 "bison.tab.c"
    break;

  case 18: /* $@1: %empty  */
#line 100 "bison.y"
                                       {printf("<LinearLayout"); }
#line 1700 "bison.tab.c"
    break;

  case 19: /* $@2: %empty  */
#line 100 "bison.y"
                                                                                                   {printf(">");  
                                                                                                   if(!has_layout_height || !has_layout_width) 
                                                                                                       yyerror("layout_width and layout_height are required attributes.\n"); 

                                                                                                   has_layout_width=false; has_layout_height=false; }
#line 1710 "bison.tab.c"
    break;

  case 20: /* linear_layout: LESS_THAN LINEAR_LAYOUT $@1 linear_attributes GREATER_THAN $@2 child_plus LESS_THAN SLASH LINEAR_LAYOUT GREATER_THAN  */
#line 105 "bison.y"
                                                                     {printf("</LinearLayout>"); }
#line 1716 "bison.tab.c"
    break;

  case 23: /* $@3: %empty  */
#line 109 "bison.y"
                                {printf("android:");}
#line 1722 "bison.tab.c"
    break;

  case 25: /* $@4: %empty  */
#line 111 "bison.y"
                                      {has_layout_width=true;}
#line 1728 "bison.tab.c"
    break;

  case 26: /* $@5: %empty  */
#line 111 "bison.y"
                                                                        {printf("layout_width=");  }
#line 1734 "bison.tab.c"
    break;

  case 28: /* $@6: %empty  */
#line 112 "bison.y"
                                       {has_layout_height=true;}
#line 1740 "bison.tab.c"
    break;

  case 29: /* $@7: %empty  */
#line 112 "bison.y"
                                                                        {printf("layout_height=");}
#line 1746 "bison.tab.c"
    break;

  case 31: /* linear_attribute_name: ORIENTATION ASSIGN STRING  */
#line 113 "bison.y"
                                                   {printf("orientation="); printf("%s",yylval.strval);}
#line 1752 "bison.tab.c"
    break;

  case 32: /* linear_attribute_name: ID ASSIGN STRING  */
#line 114 "bison.y"
                                          {printf("id="); printf("%s",yylval.strval); id_unique(yytext);}
#line 1758 "bison.tab.c"
    break;

  case 33: /* $@8: %empty  */
#line 117 "bison.y"
                                           {printf("<RelativeLayout");}
#line 1764 "bison.tab.c"
    break;

  case 34: /* $@9: %empty  */
#line 117 "bison.y"
                                                                                                         {printf(">");
                                                                                                         if(!has_layout_height || !has_layout_width) 
                                                                                                             yyerror("layout_width and layout_height are required attributes.\n");

                                                                                                         has_layout_height=false; has_layout_width=false;  }
#line 1774 "bison.tab.c"
    break;

  case 35: /* relative_layout: LESS_THAN RELATIVE_LAYOUT $@8 relative_attributes GREATER_THAN $@9 child_plus LESS_THAN SLASH RELATIVE_LAYOUT GREATER_THAN  */
#line 122 "bison.y"
                                                                         {printf("</RelativeLayout>");}
#line 1780 "bison.tab.c"
    break;

  case 38: /* $@10: %empty  */
#line 126 "bison.y"
                                  {printf("android:");}
#line 1786 "bison.tab.c"
    break;

  case 40: /* $@11: %empty  */
#line 128 "bison.y"
                                       {has_layout_width=true;}
#line 1792 "bison.tab.c"
    break;

  case 41: /* $@12: %empty  */
#line 128 "bison.y"
                                                                        {printf("Layout_width=");}
#line 1798 "bison.tab.c"
    break;

  case 43: /* $@13: %empty  */
#line 129 "bison.y"
                                        {has_layout_height=true;}
#line 1804 "bison.tab.c"
    break;

  case 44: /* $@14: %empty  */
#line 129 "bison.y"
                                                                         {printf("Layout_height=");}
#line 1810 "bison.tab.c"
    break;

  case 46: /* relative_attribute_name: ID ASSIGN STRING  */
#line 130 "bison.y"
                                           {printf("id="); printf("%s",yylval.strval); id_unique(yytext);}
#line 1816 "bison.tab.c"
    break;

  case 47: /* $@15: %empty  */
#line 133 "bison.y"
                               {printf("<TextView");}
#line 1822 "bison.tab.c"
    break;

  case 48: /* text_view: LESS_THAN TEXT_VIEW $@15 text_attributes SLASH GREATER_THAN  */
#line 133 "bison.y"
                                                                                         {printf("/>");
                                                                                         if(!has_layout_height || !has_layout_width || !has_android_text)  
                                                                                             yyerror("layout_width, layout_height and text are required attributes.");

                                                                                         has_layout_height=false; has_layout_width=false ; has_android_text=false; }
#line 1832 "bison.tab.c"
    break;

  case 51: /* $@16: %empty  */
#line 142 "bison.y"
                              {printf("android:");}
#line 1838 "bison.tab.c"
    break;

  case 53: /* $@17: %empty  */
#line 144 "bison.y"
                                   {has_layout_width=true;}
#line 1844 "bison.tab.c"
    break;

  case 54: /* $@18: %empty  */
#line 144 "bison.y"
                                                                    {printf("layout_width=");}
#line 1850 "bison.tab.c"
    break;

  case 56: /* $@19: %empty  */
#line 145 "bison.y"
                                    {has_layout_height=true;}
#line 1856 "bison.tab.c"
    break;

  case 57: /* $@20: %empty  */
#line 145 "bison.y"
                                                                     {printf("layout_height=");}
#line 1862 "bison.tab.c"
    break;

  case 59: /* $@21: %empty  */
#line 146 "bison.y"
                           {has_android_text=true;}
#line 1868 "bison.tab.c"
    break;

  case 60: /* text_attribute_name: TEXT $@21 ASSIGN STRING  */
#line 146 "bison.y"
                                                                  {printf("text="); printf("%s",yylval.strval);}
#line 1874 "bison.tab.c"
    break;

  case 61: /* text_attribute_name: ID ASSIGN STRING  */
#line 147 "bison.y"
                                         {printf("id="); printf("%s",yylval.strval); id_unique(yytext);}
#line 1880 "bison.tab.c"
    break;

  case 62: /* text_attribute_name: TEXT_COLOR ASSIGN STRING  */
#line 148 "bison.y"
                                                {printf("textColor="); printf("%s",yylval.strval);}
#line 1886 "bison.tab.c"
    break;

  case 63: /* $@22: %empty  */
#line 151 "bison.y"
                                 {printf("<ImageView");}
#line 1892 "bison.tab.c"
    break;

  case 64: /* image_view: LESS_THAN IMAGE_VIEW $@22 image_view_attributes SLASH GREATER_THAN  */
#line 151 "bison.y"
                                                                                                  {printf("/>");
                                                                                                  if(!has_layout_height || !has_layout_width || !has_android_src) 
                                                                                                      yyerror("layout_width, layout_height and src are required attributes.\n"); 

                                                                                                  has_layout_height=false; has_layout_width=false; has_android_src=false; }
#line 1902 "bison.tab.c"
    break;

  case 67: /* $@23: %empty  */
#line 159 "bison.y"
                                    {printf("android:");}
#line 1908 "bison.tab.c"
    break;

  case 69: /* $@24: %empty  */
#line 161 "bison.y"
                                        {has_layout_width=true;}
#line 1914 "bison.tab.c"
    break;

  case 70: /* $@25: %empty  */
#line 161 "bison.y"
                                                                        {printf("layout_width=");}
#line 1920 "bison.tab.c"
    break;

  case 72: /* $@26: %empty  */
#line 162 "bison.y"
                                        {has_layout_height=true;}
#line 1926 "bison.tab.c"
    break;

  case 73: /* $@27: %empty  */
#line 162 "bison.y"
                                                                         {printf("layout_height=");}
#line 1932 "bison.tab.c"
    break;

  case 75: /* $@28: %empty  */
#line 163 "bison.y"
                              {has_android_src=true;}
#line 1938 "bison.tab.c"
    break;

  case 76: /* image_view_attribute_name: SRC $@28 ASSIGN STRING  */
#line 163 "bison.y"
                                                                    {printf("src="); printf("%s",yylval.strval);}
#line 1944 "bison.tab.c"
    break;

  case 77: /* image_view_attribute_name: ID ASSIGN STRING  */
#line 164 "bison.y"
                                           {printf("id="); printf("%s",yylval.strval); id_unique(yytext);}
#line 1950 "bison.tab.c"
    break;

  case 78: /* image_view_attribute_name: PADDING ASSIGN INT  */
#line 165 "bison.y"
                                             {printf("padding="); printf("\"%d\"",yylval.intval);   if(yylval.intval<=0) 
                                                                                                    yyerror("Padding attribute must be a strictly positive number.\n"); }
#line 1957 "bison.tab.c"
    break;

  case 79: /* $@29: %empty  */
#line 168 "bison.y"
                          {printf("<Button");}
#line 1963 "bison.tab.c"
    break;

  case 80: /* button: LESS_THAN BUTTON $@29 button_attributes SLASH GREATER_THAN  */
#line 168 "bison.y"
                                                                                    {printf("/>");
                                                                                    if((!has_layout_height || !has_layout_width) || !has_android_text)
                                                                                        yyerror("layout_width, layout_height  and text are required attributes.\n");

                                                                                    has_layout_width=false; has_layout_height=false; has_android_text=false; }
#line 1973 "bison.tab.c"
    break;

  case 83: /* $@30: %empty  */
#line 176 "bison.y"
                                {printf("android:");}
#line 1979 "bison.tab.c"
    break;

  case 85: /* $@31: %empty  */
#line 178 "bison.y"
                                    {has_layout_width=true;}
#line 1985 "bison.tab.c"
    break;

  case 86: /* $@32: %empty  */
#line 178 "bison.y"
                                                                    {printf("layout_width=");}
#line 1991 "bison.tab.c"
    break;

  case 88: /* $@33: %empty  */
#line 179 "bison.y"
                                    {has_layout_height=true;}
#line 1997 "bison.tab.c"
    break;

  case 89: /* $@34: %empty  */
#line 179 "bison.y"
                                                                     {printf("layout_height=");}
#line 2003 "bison.tab.c"
    break;

  case 91: /* $@35: %empty  */
#line 180 "bison.y"
                           {has_android_text=true;}
#line 2009 "bison.tab.c"
    break;

  case 92: /* button_attribute_name: TEXT $@35 ASSIGN STRING  */
#line 180 "bison.y"
                                                                  {printf("text="); printf("%s",yylval.strval);}
#line 2015 "bison.tab.c"
    break;

  case 93: /* button_attribute_name: ID ASSIGN STRING  */
#line 181 "bison.y"
                                        {printf("id="); printf("%s",yylval.strval); id_unique(yytext);}
#line 2021 "bison.tab.c"
    break;

  case 94: /* button_attribute_name: PADDING ASSIGN INT  */
#line 182 "bison.y"
                                         {printf("padding="); printf("\"%d\"",yylval.intval);     if(yylval.intval<=0) 
                                                                                                   yyerror("In padding, a strictly positive number is required.\n");}
#line 2028 "bison.tab.c"
    break;

  case 95: /* $@36: %empty  */
#line 187 "bison.y"
                                    {printf("<RadioGroup"); checkedButton_equal=0;}
#line 2034 "bison.tab.c"
    break;

  case 96: /* $@37: %empty  */
#line 187 "bison.y"
                                                                                                                         {printf(">");  
                                                                                      if(!has_layout_height || !has_layout_width || !has_android_amount) 
                                                                                          yyerror("layout_width, layout_height and amount are required attributes.\n"); 

                                                                                      has_layout_width=false; has_layout_height=false; }
#line 2044 "bison.tab.c"
    break;

  case 97: /* radio_group: LESS_THAN RADIO_GROUP $@36 radio_group_attributes GREATER_THAN $@37 radio_button_plus LESS_THAN SLASH RADIO_GROUP GREATER_THAN  */
#line 192 "bison.y"
                                                                         {printf("</RadioGroup>"); 
                                                                                 if(existed_id_value==false && strcmp(checkedButton_id[0],"\0")!=0  && strcmp(checkedButton_id[1],"\0")!=0) 
                                                                                     yyerror("The checkedButton attribute is not similar with any id from RadioButton\n");

                                                                                 memset(checkedButton_id,'\0',sizeof(checkedButton_id)); existed_id_value=false; amount_checked=1;  //all array elements are set to zero
                                                                                 
                                                                                 if(checkedButton_amount!=checkedButton_equal)
                                                                                     yyerror("The amount of RadioButton is not equal to the amount attribute of RadioGroup.\n");}
#line 2057 "bison.tab.c"
    break;

  case 100: /* $@38: %empty  */
#line 204 "bison.y"
                                     {printf("android:");}
#line 2063 "bison.tab.c"
    break;

  case 102: /* $@39: %empty  */
#line 206 "bison.y"
                                           {has_layout_width=true;}
#line 2069 "bison.tab.c"
    break;

  case 103: /* $@40: %empty  */
#line 206 "bison.y"
                                                                           {printf("layout_width=");}
#line 2075 "bison.tab.c"
    break;

  case 105: /* $@41: %empty  */
#line 207 "bison.y"
                                            {has_layout_height=true;}
#line 2081 "bison.tab.c"
    break;

  case 106: /* $@42: %empty  */
#line 207 "bison.y"
                                                                             {printf("layout_height=");}
#line 2087 "bison.tab.c"
    break;

  case 108: /* radio_group_attribute_name: ID ASSIGN STRING  */
#line 208 "bison.y"
                                               {printf("id="); printf("%s",yylval.strval); id_unique(yytext);}
#line 2093 "bison.tab.c"
    break;

  case 109: /* radio_group_attribute_name: CHECKED_BUTTON ASSIGN STRING  */
#line 209 "bison.y"
                                                           {printf("checkedButton="); printf("%s",yylval.strval);  checkedButton_existed(yytext); }
#line 2099 "bison.tab.c"
    break;

  case 110: /* $@43: %empty  */
#line 210 "bison.y"
                                     {has_android_amount=true;}
#line 2105 "bison.tab.c"
    break;

  case 111: /* radio_group_attribute_name: AMOUNT $@43 ASSIGN INT  */
#line 210 "bison.y"
                                                                           {printf("amount="); printf("\"%d\"",yylval.intval);   if(yylval.intval<0) 
                                                                                                                                     yyerror("Amount attribute must be a positive integer.\n"); 
                                                                                                                               
                                                                                                                                 amount_equal(yylval.intval); }
#line 2114 "bison.tab.c"
    break;

  case 112: /* $@44: %empty  */
#line 216 "bison.y"
                                     {printf("<RadioButton"); checkedButton_equal++;}
#line 2120 "bison.tab.c"
    break;

  case 113: /* radio_button: LESS_THAN RADIO_BUTTON $@44 radio_button_attributes SLASH GREATER_THAN  */
#line 216 "bison.y"
                                                                                                                                 {printf("/>");
                                                                                        if((!has_layout_height || !has_layout_width) || !has_android_text) 
                                                                                            yyerror("layout_width, layout_height and text are required attributes.\n");
                                                                                        
                                                                                        has_layout_width=false; has_layout_height=false; has_android_text=false;}
#line 2130 "bison.tab.c"
    break;

  case 116: /* $@45: %empty  */
#line 224 "bison.y"
                                      {printf("android:");}
#line 2136 "bison.tab.c"
    break;

  case 118: /* $@46: %empty  */
#line 226 "bison.y"
                                           {has_layout_width=true;}
#line 2142 "bison.tab.c"
    break;

  case 119: /* $@47: %empty  */
#line 226 "bison.y"
                                                                           {printf("layout_width=");}
#line 2148 "bison.tab.c"
    break;

  case 121: /* $@48: %empty  */
#line 227 "bison.y"
                                            {has_layout_height=true;}
#line 2154 "bison.tab.c"
    break;

  case 122: /* $@49: %empty  */
#line 227 "bison.y"
                                                                             {printf("layout_height=");}
#line 2160 "bison.tab.c"
    break;

  case 124: /* $@50: %empty  */
#line 228 "bison.y"
                                   {has_android_text=true;}
#line 2166 "bison.tab.c"
    break;

  case 125: /* radio_button_attribute_name: TEXT $@50 ASSIGN STRING  */
#line 228 "bison.y"
                                                                          {printf("text="); printf("%s",yylval.strval);}
#line 2172 "bison.tab.c"
    break;

  case 126: /* radio_button_attribute_name: ID ASSIGN STRING  */
#line 229 "bison.y"
                                               {printf("id="); printf("%s",yylval.strval); id_unique(yytext); id_checkedButton(yytext); }
#line 2178 "bison.tab.c"
    break;

  case 127: /* $@51: %empty  */
#line 232 "bison.y"
                                     {printf("<ProgressBar");}
#line 2184 "bison.tab.c"
    break;

  case 128: /* progress_bar: LESS_THAN PROGRESS_BAR $@51 progress_bar_attributes SLASH GREATER_THAN  */
#line 232 "bison.y"
                                                                                                          {printf("/>");
                                                                                                          if(!has_layout_height || !has_layout_width) 
                                                                                                              yyerror("layout_width and layout_height are required attributes.\n");

                                                                                                          has_layout_width=false; has_layout_height=false;has_android_text=false; 

                                                                                                          if(max_existed==true && progress_existed==true)
                                                                                                          {
                                                                                                            if(max_progress[0]<max_progress[1]) 
                                                                                                            yyerror("The progress  attribute must be less or equal with max attribute.\n");
                                                                                                          } 
                                                                                                        }
#line 2201 "bison.tab.c"
    break;

  case 131: /* $@52: %empty  */
#line 247 "bison.y"
                                      {printf("android:");}
#line 2207 "bison.tab.c"
    break;

  case 133: /* $@53: %empty  */
#line 249 "bison.y"
                                           {has_layout_width=true;}
#line 2213 "bison.tab.c"
    break;

  case 134: /* $@54: %empty  */
#line 249 "bison.y"
                                                                            {printf("layout_width=");}
#line 2219 "bison.tab.c"
    break;

  case 136: /* $@55: %empty  */
#line 250 "bison.y"
                                            {has_layout_height=true;}
#line 2225 "bison.tab.c"
    break;

  case 137: /* $@56: %empty  */
#line 250 "bison.y"
                                                                             {printf("layout_height=");}
#line 2231 "bison.tab.c"
    break;

  case 139: /* progress_bar_attribute_name: ID ASSIGN STRING  */
#line 251 "bison.y"
                                               {printf("id="); printf("%s",yylval.strval); id_unique(yytext);}
#line 2237 "bison.tab.c"
    break;

  case 140: /* progress_bar_attribute_name: MAX ASSIGN INT  */
#line 252 "bison.y"
                                             {printf("max"); printf("\"%d\"",yylval.intval);
                                                             max_progress[0]=yylval.intval; max_existed=true; }
#line 2244 "bison.tab.c"
    break;

  case 141: /* progress_bar_attribute_name: PROGRESS ASSIGN INT  */
#line 254 "bison.y"
                                                  {printf("progress="); printf("\"%d\"",yylval.intval); 
                                                  if(yylval.intval<0) 
                                                      yyerror("Progress attribute must be a positive integer\n");

                                                  max_progress[1]=yylval.intval; progress_existed=true; }
#line 2254 "bison.tab.c"
    break;


#line 2258 "bison.tab.c"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
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
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 261 "bison.y"
     


int main(int argc, char **argv)
{

    if(argc>1)
    {
        yyin=fopen(argv[1],"r");
        if(yyin==NULL)
        {
            printf("Error - Cannot open the file");
            return -1;
        }
    }else yyin=stdin;

    
    yyparse();


    fclose(yyin);

    return 0;
}


void id_unique(char *id_value)
{
    int counter;
    for (counter=0; counter<amount; counter++)
    {
        if(strcmp(array[counter],id_value)==0)
        {
            yyerror("id is not unique\n");
        }
    }

    strcpy(array[counter],id_value);
    amount++;
}


void checkedButton_existed(char *str)
{
    strcpy(checkedButton_id[0],str);
}

void id_checkedButton(char *str)
{
  
    if(strcmp(checkedButton_id[0], "") == 0) return;

    strcpy(checkedButton_id[amount_checked],str);
    if(existed_id_value==false)
    {
        if(strcmp(checkedButton_id[0],checkedButton_id[amount_checked])==0)
        {
            existed_id_value=true;
        }
    }
    amount_checked++;

}


void amount_equal(int value)
{
    checkedButton_amount=value;
}
