#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140101

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 1 "hw2.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union{
	int intVal;
	char idName[32];
	char cmpStr[3];
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 28 "hw2.y"
	#include <stdio.h>
	#include <stdlib.h>
	#include <string>
	#include "lex.yy.h"
	#include "y.tab.h"
	#include "SymbolTable.h"
	void yyerror(char *msg);
/*	int yylex(void);*/
/*	int sym[26];*/
	SymbolTable symbolTable;
	extern int num_lines;
	extern char line_buf[];
	extern char* yytext;
	int functionDefinitionExists = 0;
	int error_occurred = 0;
	int stack_counter = 0;
	int scope = 0;
	FILE* f_asm = fopen("assembly", "w");
#line 51 "y.tab.cpp"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define INTEGER 257
#define STRING 258
#define DOUBLE 259
#define SCI_NOTATION 260
#define CHAR 261
#define TYPE 262
#define TYPE_VOID 263
#define CONSTANT 264
#define KEY_FOR 265
#define KEY_WHILE 266
#define KEY_DO 267
#define KEY_IF 268
#define KEY_ELSE 269
#define KEY_SWITCH 270
#define KEY_RETURN 271
#define KEY_BREAK 272
#define KEY_CONTINUE 273
#define KEY_CONST 274
#define KEY_STRUCT 275
#define KEY_CASE 276
#define KEY_DEFAULT 277
#define ID 278
#define OP_CMP 279
#define OP_INCREMENT 280
#define OP_DECREMENT 281
#define OP_LAND 282
#define OP_LOR 283
#define DIGITAL_WRITE 284
#define DELAY 285
#define HIGH 286
#define LOW 287
#define SIGN_PRECEDENCE 288
#define ARR_IDX 289
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    0,    4,    4,    6,    8,    8,    9,   10,
   10,   12,   12,   12,   12,   12,   11,   11,    7,    7,
    3,   13,   13,   15,   15,   14,   14,   17,   17,   18,
   18,   18,   18,   18,   19,   19,   19,   19,   19,   19,
   19,   19,   19,   19,   19,   19,   20,   20,    1,    1,
    1,   16,   16,    2,    2,   24,   24,   25,   25,   25,
   25,   22,   22,   27,   27,   27,   27,   27,   26,   26,
   23,   23,   28,   21,   21,    5,    5,    5,    5,    5,
    5,    5,    5,    5,    5,    5,    5,    5,    5,    5,
    5,    5,    5,    5,    5,    5,    5,    5,    5,
};
static const short yylen[] = {                            2,
    3,    5,    0,   11,    7,   11,    7,    9,    8,    4,
    5,    1,    1,    1,    1,    1,    3,    0,    1,    0,
    2,    1,    0,    2,    3,    1,    0,    1,    2,    2,
    1,    1,    1,    1,    3,    4,    4,    3,    1,    1,
    2,    2,    2,    6,    6,    4,    3,    4,    2,    3,
    1,    2,    3,    5,    5,    1,    0,    5,    4,    3,
    2,    1,    3,    1,    3,    2,    6,    5,    3,    4,
    1,    3,    3,    1,    3,    3,    3,    3,    2,    3,
    3,    3,    3,    3,    2,    2,    1,    1,    1,    1,
    1,    1,    1,    3,    2,    2,    4,    3,    2,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,   49,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   50,    0,    1,    0,    0,    0,    0,   22,    0,    0,
    0,    0,   56,   87,   92,   88,   89,   90,   93,    0,
    0,    0,    0,    0,    0,    0,    0,   63,    0,    0,
    0,   52,    0,    0,    0,    0,    0,    0,    0,    0,
   39,   40,    0,    0,    0,   31,   32,   33,   34,   21,
   26,    0,    0,    0,    0,    0,   54,   85,   86,    0,
    0,   99,    0,   95,   96,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   55,    0,   72,   53,    2,
    0,    0,    0,    0,    0,    0,   42,   43,    0,    0,
    0,    0,    0,   29,   30,   25,   70,    0,    0,    0,
   98,    0,    0,   94,    0,    0,    0,    0,    0,   82,
   83,   84,   68,    0,    0,    0,    0,    0,    0,    0,
   38,    0,    0,    0,    0,    0,   59,    0,    0,    0,
   97,   67,    0,    0,    0,    0,    0,   37,    0,    0,
   46,   58,   48,   75,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   44,   45,    0,
    7,    0,    0,   13,   14,   15,   16,   12,    0,    0,
    0,    0,    0,    0,    0,    0,    9,    0,    8,    0,
    0,   17,    0,    0,   11,    6,    4,
};
static const short yydgoto[] = {                          4,
    5,    6,   26,   66,  122,   67,  136,   68,   69,  177,
  191,  189,   27,   70,   28,   29,   71,   72,   73,   82,
  123,    8,   21,   32,   33,   17,    9,   22,
};
static const short yysindex[] = {                       -61,
 -200, -195, -170,    0,   58,  -11,  128,    0,   75,  103,
 -143,  -61,  -90, -116, -101,  104,  118,  -96, -101,  122,
    0,  143,    0,  -96,  -58,   83,  -75,    0,  152,  121,
  -60,  175,    0,    0,    0,    0,    0,    0,    0,  -20,
  104,  104,  104,  104,   53,   98,  -40,    0,  183,  104,
 -143,    0, -143,  -61,  190,  196,  117,  201,  203,  104,
    0,    0,  124,  204,  207,    0,    0,    0,    0,    0,
    0,  -75,  189,  -90,  158,    2,    0,    0,    0,  104,
   66,    0,  120,    0,    0,   -9,  104,  104,  104,  104,
  104,  104,  104,  104,   81,    0,   53,    0,    0,    0,
  104,  104,  -90,  104,  -25,   53,    0,    0,   89,  104,
  191,   -7,  104,    0,    0,    0,    0, -101,  212,   -2,
    0,    5,  216,    0,  180,  120,   73,  139,  139,    0,
    0,    0,    0,  133,   53,  200,   16,  138,   25,  224,
    0,  226,   53,  104,  225,   32,    0, -101,  177,  104,
    0,    0,  104,  148,    9,  149,  155,    0,   53, -284,
    0,    0,    0,    0,  217,  -90,  239,  -90,    7,  241,
  244,  104,  161,  104,  165,  -26,   20,    0,    0,  252,
    0,   39,   31,    0,    0,    0,    0,    0,  243,  245,
  181,  179,  246,  186,  -90,  -90,    0,  -90,    0,  -90,
    7,    0,  187,  188,    0,    0,    0,
};
static const short yyrindex[] = {                       316,
    0,    0,    0,    0,    0,  258,  -33,    0,  260,    0,
    0,  316,  206,    0,  279,    0,  -32,    0,  279,    0,
    0,  269,    0,    0,    0,    0, -107,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -28,
    0,    0,    0,    0,   -5,    0,  -33,    0,    0,    0,
    0,    0,    0,  316,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -102,    0,  141,   64,  288,    0,    0,    0,    0,
    0,    0,  101,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   45,    0,    0,    0,
  274,    0,  206,    0,    0,  275,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  296,    0,
    0,  -12,    0,    0,   87,  112,  114,   95,  107,    0,
    0,    0,    0,    0,   -4,    0,    0,    0,    0,    0,
    0,    0,  284,    0,    0,    0,    0,    0,  -37,    0,
    0,    0,  274,    0,    0,    0,    0,    0,  292,    0,
    0,    0,    0,    0,    0,  206,    0,  206,    0,    0,
    0,  313,    0,    0,    0,    0,  231,    0,    0,    0,
    0,    0,  164,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  185,  206,    0,  206,    0,  206,
 -100,    0,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                        48,
    0,    0,   96,    0,  444,    0,    6,    0,    0,  156,
    0,    0,    0,    0,  286,    0,  299,    0,    0,  -62,
  -65,  109,   50,  339,  -54,  153,    0,    0,
};
#define YYTABLESIZE 618
static const short yytable[] = {                         47,
  111,  170,  171,   47,   47,   47,   47,   47,   91,   47,
   64,   66,   91,   91,   91,   91,   91,   27,   91,   81,
   16,   47,   28,   47,   10,   64,   66,   94,   74,  134,
   91,  124,   92,   90,   94,   91,   19,   93,   65,   92,
   90,   94,   91,  142,   93,  118,   92,   90,  150,   91,
   14,   93,   94,   65,   19,   47,  154,   92,   90,   23,
   91,   94,   93,  147,   91,  156,   92,   90,   94,   91,
   80,   93,  161,   92,   90,   94,   91,    7,   93,  193,
   92,   90,   10,   91,  164,   93,  163,   47,   73,   94,
  149,   11,   14,  162,   92,   90,   91,   91,   41,   93,
   98,  100,   99,   73,   69,   44,  121,   69,   42,   94,
   43,   13,   74,   41,   92,   90,   12,   91,   18,   93,
   44,   41,   69,   42,   69,   43,   48,   78,   44,  141,
   78,   42,   52,   43,   20,   80,   41,   80,   80,   80,
   30,   79,   19,   44,   79,   78,   42,   81,   43,   81,
   81,   81,   77,   80,   76,   77,   94,   76,  165,   79,
   31,   92,   90,  109,   91,   81,   93,   15,   27,   27,
   77,   24,   76,   28,   28,   94,   10,  180,   46,   78,
   92,   47,   50,   25,  110,   93,   51,   80,   16,   55,
   56,   57,   58,   79,   59,   60,   61,   62,  138,   81,
    1,    2,   63,   53,   77,  133,   76,   54,   64,   65,
   74,   78,    3,   75,   80,   77,   94,   76,   14,   80,
   95,   92,   90,   96,   91,   79,   93,  117,  119,  101,
  184,   81,  185,  186,  187,  102,   77,  188,   76,  103,
  104,   47,  105,  112,   47,   47,  113,  115,   14,  145,
   91,  144,  140,   91,   91,  148,  151,  152,  153,   78,
   79,  173,  155,  175,  157,   24,  158,   80,  160,   87,
  166,  168,   88,   89,  167,  172,   87,  169,  174,   88,
   89,  178,  176,   87,  179,  181,   88,   89,    5,  183,
  201,  202,  192,  203,   87,  204,  190,   88,   89,  194,
  195,  198,  196,   87,  199,  197,   88,   89,  200,   23,
   87,  206,  207,   88,   89,    3,   51,   87,   62,   57,
   88,   89,   34,   35,   36,   37,   38,   71,   61,   39,
   23,   87,   20,   41,   88,   89,   60,   34,   35,   36,
   37,   38,   35,   40,   39,   34,   35,   36,   37,   38,
   36,   87,   39,   20,   88,   18,  205,   49,   40,  116,
   34,   35,   36,   37,   38,   78,   40,   39,   78,   78,
  114,    0,    0,   80,    0,    0,   80,   80,    0,    0,
    0,   40,   79,   79,    0,   81,    0,    0,   81,   81,
    0,    0,    0,   77,   77,    0,   76,    0,   87,    0,
    0,    0,    0,  107,  108,   24,   24,   24,   24,    0,
   24,   24,   24,   24,    0,    0,   24,   24,   24,    0,
    0,    0,    0,    0,   24,   24,    0,    0,    5,    5,
    5,    5,    0,    5,    5,    5,    5,    0,    0,    5,
    5,    5,    0,    0,    0,    0,    0,    5,    5,   23,
   23,   23,   23,    0,   23,   23,   23,   23,    0,   45,
   23,   23,   23,    0,    0,    0,    0,    0,   23,   23,
   23,   23,   23,   23,    0,   23,   23,   23,   23,    0,
    0,    0,    0,   23,   83,   84,   85,   86,    0,   23,
   23,    0,    0,   97,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  106,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  120,    0,    0,    0,    0,    0,    0,
  125,  126,  127,  128,  129,  130,  131,  132,    0,    0,
    0,    0,    0,    0,  135,  137,    0,  139,    0,    0,
    0,    0,    0,  143,    0,    0,  146,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  159,    0,    0,
    0,    0,    0,    0,    0,    0,  135,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  135,    0,  182,
};
static const short yycheck[] = {                         37,
   63,  286,  287,   41,   42,   43,   44,   45,   37,   47,
   44,   44,   41,   42,   43,   44,   45,  125,   47,   40,
   61,   59,  125,   61,  125,   59,   59,   37,   41,   95,
   59,   41,   42,   43,   37,   45,   41,   47,   44,   42,
   43,   37,   45,  109,   47,   44,   42,   43,   44,   45,
   91,   47,   37,   59,   59,   93,   41,   42,   43,   12,
   45,   37,   47,  118,   93,   41,   42,   43,   37,   45,
   91,   47,   41,   42,   43,   37,   45,  278,   47,   41,
   42,   43,  278,   45,  150,   47,  149,  125,   44,   37,
   93,  262,   91,  148,   42,   43,  125,   45,   33,   47,
   51,   54,   53,   59,   41,   40,   41,   44,   43,   37,
   45,  123,  125,   33,   42,   43,   59,   45,   44,   47,
   40,   33,   59,   43,   61,   45,   18,   41,   40,   41,
   44,   43,   24,   45,  278,   41,   33,   43,   44,   45,
  257,   41,   40,   40,   44,   59,   43,   41,   45,   43,
   44,   45,   41,   59,   41,   44,   37,   44,  153,   59,
  262,   42,   43,   40,   45,   59,   47,   40,  276,  277,
   59,  262,   59,  276,  277,   37,  277,  172,   61,   93,
   42,  278,   61,  274,   61,   47,   44,   93,   61,  265,
  266,  267,  268,   93,  270,  271,  272,  273,  103,   93,
  262,  263,  278,  262,   93,  125,   93,  125,  284,  285,
   59,  125,  274,   93,   91,   41,   37,  278,   91,  125,
  123,   42,   43,   41,   45,  125,   47,   75,   76,   40,
  257,  125,  259,  260,  261,   40,  125,  264,  125,  123,
   40,  279,   40,   40,  282,  283,   40,   59,   91,  257,
  279,   61,  278,  282,  283,   44,   41,  125,   59,  280,
  281,  166,  125,  168,   41,  125,   41,   91,   44,  279,
  123,  123,  282,  283,  266,   59,  279,  123,   40,  282,
  283,   41,  276,  279,   41,  125,  282,  283,  125,  125,
  195,  196,   41,  198,  279,  200,  277,  282,  283,  269,
   58,  123,   58,  279,   59,  125,  282,  283,  123,  125,
  279,  125,  125,  282,  283,    0,   59,  279,   59,   41,
  282,  283,  257,  258,  259,  260,  261,   59,   41,  264,
  125,  279,   59,   59,  282,  283,   41,  257,  258,  259,
  260,  261,   59,  278,  264,  257,  258,  259,  260,  261,
   59,  279,  264,   41,  282,  125,  201,   19,  278,   74,
  257,  258,  259,  260,  261,  279,  278,  264,  282,  283,
   72,   -1,   -1,  279,   -1,   -1,  282,  283,   -1,   -1,
   -1,  278,  282,  283,   -1,  279,   -1,   -1,  282,  283,
   -1,   -1,   -1,  282,  283,   -1,  283,   -1,  279,   -1,
   -1,   -1,   -1,  280,  281,  265,  266,  267,  268,   -1,
  270,  271,  272,  273,   -1,   -1,  276,  277,  278,   -1,
   -1,   -1,   -1,   -1,  284,  285,   -1,   -1,  265,  266,
  267,  268,   -1,  270,  271,  272,  273,   -1,   -1,  276,
  277,  278,   -1,   -1,   -1,   -1,   -1,  284,  285,  265,
  266,  267,  268,   -1,  270,  271,  272,  273,   -1,   16,
  276,  277,  278,   -1,   -1,   -1,   -1,   -1,  284,  285,
  265,  266,  267,  268,   -1,  270,  271,  272,  273,   -1,
   -1,   -1,   -1,  278,   41,   42,   43,   44,   -1,  284,
  285,   -1,   -1,   50,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   60,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   80,   -1,   -1,   -1,   -1,   -1,   -1,
   87,   88,   89,   90,   91,   92,   93,   94,   -1,   -1,
   -1,   -1,   -1,   -1,  101,  102,   -1,  104,   -1,   -1,
   -1,   -1,   -1,  110,   -1,   -1,  113,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  144,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  153,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  172,   -1,  174,
};
#define YYFINAL 4
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 289
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? (YYMAXTOKEN + 1) : (a))
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'!'",0,0,0,"'%'",0,0,"'('","')'","'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,0,0,
0,0,0,"':'","';'",0,"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,"'['",0,"']'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'{'",0,"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"INTEGER","STRING","DOUBLE","SCI_NOTATION",
"CHAR","TYPE","TYPE_VOID","CONSTANT","KEY_FOR","KEY_WHILE","KEY_DO","KEY_IF",
"KEY_ELSE","KEY_SWITCH","KEY_RETURN","KEY_BREAK","KEY_CONTINUE","KEY_CONST",
"KEY_STRUCT","KEY_CASE","KEY_DEFAULT","ID","OP_CMP","OP_INCREMENT",
"OP_DECREMENT","OP_LAND","OP_LOR","DIGITAL_WRITE","DELAY","HIGH","LOW",
"SIGN_PRECEDENCE","ARR_IDX","illegal-symbol",
};
static const char *yyrule[] = {
"$accept : program",
"program : declaration ';' program",
"program : function_declaration '{' compound_statement '}' program",
"program :",
"if_else_statement : KEY_IF '(' expression ')' '{' compound_statement '}' KEY_ELSE '{' compound_statement '}'",
"if_else_statement : KEY_IF '(' expression ')' '{' compound_statement '}'",
"for_statement : KEY_FOR '(' optionalExpression ';' optionalExpression ';' optionalExpression ')' '{' compound_statement '}'",
"while_statemnt : KEY_WHILE '(' expression ')' '{' compound_statement '}'",
"while_statemnt : KEY_DO '{' compound_statement '}' KEY_WHILE '(' expression ')' ';'",
"switch_statement : KEY_SWITCH '(' ID ')' '{' cases defaultCase '}'",
"cases : KEY_CASE caseConstant ':' compound_statement",
"cases : KEY_CASE caseConstant ':' compound_statement cases",
"caseConstant : CONSTANT",
"caseConstant : INTEGER",
"caseConstant : DOUBLE",
"caseConstant : SCI_NOTATION",
"caseConstant : CHAR",
"defaultCase : KEY_DEFAULT ':' compound_statement",
"defaultCase :",
"optionalExpression : expression",
"optionalExpression :",
"compound_statement : declarations statements",
"declarations : over1Declarations",
"declarations :",
"over1Declarations : declaration_except_function ';'",
"over1Declarations : declaration_except_function ';' over1Declarations",
"statements : over1Statements",
"statements :",
"over1Statements : allKindsOfStatements",
"over1Statements : allKindsOfStatements over1Statements",
"allKindsOfStatements : statement ';'",
"allKindsOfStatements : if_else_statement",
"allKindsOfStatements : for_statement",
"allKindsOfStatements : while_statemnt",
"allKindsOfStatements : switch_statement",
"statement : ID '=' expression",
"statement : ID arr_indices '=' expression",
"statement : ID '(' expressions ')'",
"statement : ID '(' ')'",
"statement : KEY_BREAK",
"statement : KEY_CONTINUE",
"statement : KEY_RETURN expression",
"statement : ID OP_INCREMENT",
"statement : ID OP_DECREMENT",
"statement : DIGITAL_WRITE '(' INTEGER ',' HIGH ')'",
"statement : DIGITAL_WRITE '(' INTEGER ',' LOW ')'",
"statement : DELAY '(' expression ')'",
"arr_indices : '[' expression ']'",
"arr_indices : '[' expression ']' arr_indices",
"declaration : TYPE identifiers",
"declaration : KEY_CONST TYPE const_identifiers",
"declaration : function_declaration",
"declaration_except_function : TYPE identifiers",
"declaration_except_function : KEY_CONST TYPE const_identifiers",
"function_declaration : TYPE ID '(' parameters ')'",
"function_declaration : TYPE_VOID ID '(' parameters ')'",
"parameters : parameters_over1",
"parameters :",
"parameters_over1 : TYPE ID arr_brackets ',' parameters_over1",
"parameters_over1 : TYPE ID ',' parameters_over1",
"parameters_over1 : TYPE ID arr_brackets",
"parameters_over1 : TYPE ID",
"identifiers : identifier",
"identifiers : identifier ',' identifiers",
"identifier : ID",
"identifier : ID '=' expression",
"identifier : ID arr_brackets",
"identifier : ID arr_brackets '=' '{' expressions '}'",
"identifier : ID arr_brackets '=' '{' '}'",
"arr_brackets : '[' INTEGER ']'",
"arr_brackets : '[' INTEGER ']' arr_brackets",
"const_identifiers : const_identifier",
"const_identifiers : const_identifier ',' const_identifiers",
"const_identifier : ID '=' expression",
"expressions : expression",
"expressions : expression ',' expressions",
"expression : expression OP_LOR expression",
"expression : expression OP_LAND expression",
"expression : expression OP_CMP expression",
"expression : '!' expression",
"expression : expression '+' expression",
"expression : expression '-' expression",
"expression : expression '*' expression",
"expression : expression '/' expression",
"expression : expression '%' expression",
"expression : ID OP_INCREMENT",
"expression : ID OP_DECREMENT",
"expression : INTEGER",
"expression : DOUBLE",
"expression : SCI_NOTATION",
"expression : CHAR",
"expression : ID",
"expression : STRING",
"expression : CONSTANT",
"expression : '(' expression ')'",
"expression : '+' expression",
"expression : '-' expression",
"expression : ID '(' expressions ')'",
"expression : ID '(' ')'",
"expression : ID arr_indices",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 255 "hw2.y"

void yyerror(const char* msg){
	fprintf( stderr, "*** Error at line %d: %s\n", num_lines, line_buf );
	fprintf( stderr, "\n" );	
	fprintf( stderr, "Unmatched token: %s\n", yytext );
	fprintf( stderr, "*** syntax error\n");
	error_occurred = 1;
	exit(-1);
}

int main(void){
	//f_asm = fopen("");
	yyparse();
	if(functionDefinitionExists == 0){
		line_buf[0] = '\0';
		std::string temp = "There must be at least 1 function definition!";
	//	yyerror("There must be at least 1 function definition!");
		yyerror(temp.c_str());
	}
	if(error_occurred == 0)
		printf("No syntax error\n");
	fclose(f_asm);
	return 0;
}
#line 535 "y.tab.cpp"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 2:
#line 51 "hw2.y"
	{functionDefinitionExists = 1;}
break;
case 35:
#line 102 "hw2.y"
	{int index = symbolTable.lookUp(yystack.l_mark[-2].idName);
				int offset = symbolTable.entries[index].offset;
				fprintf(f_asm, "lwi $r0, [$sp+%d]\n", (stack_counter-1)*4);
				stack_counter--;
				fprintf(f_asm, "swi $r0, [$sp+%d]\n", (offset)*4);
				}
break;
case 44:
#line 116 "hw2.y"
	{fprintf(f_asm, "movi $r0, 13\n");
							fprintf(f_asm, "movi $r1, 1\n");
							fprintf(f_asm, "bal digitalWrite\n");
							}
break;
case 45:
#line 120 "hw2.y"
	{fprintf(f_asm, "movi $r0, 13\n");
							fprintf(f_asm, "movi $r1, 0\n");
							fprintf(f_asm, "bal digitalWrite\n");
							}
break;
case 46:
#line 125 "hw2.y"
	{fprintf(f_asm, "lwi $r0, [$sp+%d]\n", (stack_counter-1)*4);
							stack_counter--;
							fprintf(f_asm, "bal delay\n");
							}
break;
case 64:
#line 159 "hw2.y"
	{int index = symbolTable.install(yystack.l_mark[0].idName, stack_counter, scope);
		stack_counter++;}
break;
case 65:
#line 161 "hw2.y"
	{/*fprintf(f_asm, "lwi $r0, [$sp+%d]", (stack_counter-1)*4);*/
			/*	stack_counter--;*/
				symbolTable.install(yystack.l_mark[-2].idName, stack_counter-1, scope);
				 }
break;
case 80:
#line 189 "hw2.y"
	{fprintf(f_asm, "lwi $r1, [$sp+%d]\n", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "lwi $r0, [$sp+%d]\n", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "add $r0, $r0, $r1\n");
					fprintf(f_asm, "swi $r0, [$sp+%d]\n", stack_counter*4);
					stack_counter++;
					}
break;
case 81:
#line 197 "hw2.y"
	{fprintf(f_asm, "lwi $r1, [$sp+%d]\n", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "lwi $r0, [$sp+%d]\n", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "sub $r0, $r0, $r1\n");
					fprintf(f_asm, "swi $r0, [$sp+%d]\n", stack_counter*4);
					stack_counter++;
					}
break;
case 82:
#line 206 "hw2.y"
	{fprintf(f_asm, "lwi $r1, [$sp+%d]\n", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "lwi $r0, [$sp+%d]\n", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "mul $r0, $r0, $r1\n");
					fprintf(f_asm, "swi $r0, [$sp+%d]\n", stack_counter*4);
					stack_counter++;
					}
break;
case 83:
#line 215 "hw2.y"
	{fprintf(f_asm, "lwi $r1, [$sp+%d]\n", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "lwi $r0, [$sp+%d]\n", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "divsr $r0, $r1, $r0, $r1\n");
					fprintf(f_asm, "swi $r0, [$sp+%d]\n", stack_counter*4);
					stack_counter++;
					}
break;
case 84:
#line 224 "hw2.y"
	{fprintf(f_asm, "lwi $r1, [$sp+%d]\n", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "lwi $r0, [$sp+%d]\n", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "divsr $r1, $r0, $r0, $r1\n");
					fprintf(f_asm, "swi $r0, [$sp+%d]\n", stack_counter*4);
					stack_counter++;
					}
break;
case 87:
#line 235 "hw2.y"
	{fprintf(f_asm, "movi $r0, %d\n", yystack.l_mark[0].intVal);
			fprintf(f_asm, "swi $r0, [$sp+%d]\n", stack_counter*4);
			stack_counter++;}
break;
case 91:
#line 241 "hw2.y"
	{int index = symbolTable.lookUp(yystack.l_mark[0].idName);
		fprintf(f_asm, "lwi $r0, [$sp+%d]\n", symbolTable.entries[index].offset*4);
		fprintf(f_asm, "swi $r0, [$sp+%d]\n", stack_counter*4);
		stack_counter++;}
break;
#line 851 "y.tab.cpp"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
