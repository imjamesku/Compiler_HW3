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
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 26 "hw2.y"
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
#line 50 "y.tab.cpp"

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
#define OP_INCREMENT 279
#define OP_DECREMENT 280
#define OP_CMP 281
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
static const short yysindex[] = {                      -170,
 -276, -253, -232,    0,   -8,  -29,  100,    0,   61,   85,
 -150, -170,  -69, -125, -100,   90,  108,  -80, -100,  133,
    0,  163,    0,  -80,  -48,   95,  200,    0,  167,  129,
  -35,  189,    0,    0,    0,    0,    0,    0,    0,  -20,
   90,   90,   90,   90,   53,  125,   26,    0,  208,   90,
 -150,    0, -150, -170,  210,  211,  134,  212,  218,   90,
    0,    0,   24,  221,  222,    0,    0,    0,    0,    0,
    0,  200,  204,  -69,  173,   11,    0,    0,    0,   90,
   66,    0,  101,    0,    0,   -9,   90,   90,   90,   90,
   90,   90,   90,   90,  -22,    0,   53,    0,    0,    0,
   90,   90,  -69,   90,  -13,   53,    0,    0,   81,   90,
  209,   14,   90,    0,    0,    0,    0, -100,  231,   -2,
    0,    5,  235,    0,  174,  101,   94,  176,  176,    0,
    0,    0,    0,  157,   53,  219,   16,  159,   25,  236,
    0,  242,   53,   90,  241,   32,    0, -100,  198,   90,
    0,    0,   90,  168,   27,  169,  171,    0,   53,  -84,
    0,    0,    0,    0,  237,  -69,  255,  -69,   29,  260,
  261,   90,  175,   90,  184,  -32,   33,    0,    0,  270,
    0,   39,   43,    0,    0,    0,    0,    0,  258,  271,
  192,  195,  269,  196,  -69,  -69,    0,  -69,    0,  -69,
   29,    0,  206,  207,    0,    0,    0,
};
static const short yyrindex[] = {                       333,
    0,    0,    0,    0,    0,  278,   -5,    0,  284,    0,
    0,  333,   99,    0,  305,    0,  114,    0,  305,    0,
    0,  293,    0,    0,    0,    0, -124,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -28,
    0,    0,    0,    0,  128,    0,   -5,    0,    0,    0,
    0,    0,    0,  333,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -122,    0,  -88,  151,  312,    0,    0,    0,    0,
    0,    0,  115,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  142,    0,    0,    0,
  296,    0,   99,    0,    0,  301,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  320,    0,
    0,   42,    0,    0,  -15,  122,  116,   75,  106,    0,
    0,    0,    0,    0,   86,    0,    0,    0,    0,    0,
    0,    0,  304,    0,    0,    0,    0,    0,  -37,    0,
    0,    0,  296,    0,    0,    0,    0,    0,  314,    0,
    0,    0,    0,    0,    0,   99,    0,   99,    0,    0,
    0,  337,    0,    0,    0,    0,  249,    0,    0,    0,
    0,    0,  144,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  165,   99,    0,   99,    0,   99,
 -113,    0,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                       117,
    0,    0,  259,    0,  403,    0,  -64,    0,    0,  178,
    0,    0,    0,    0,  306,    0,  309,    0,    0,  -36,
  -49,  152,  153,  366,   -6,  158,    0,    0,
};
#define YYTABLESIZE 577
static const short yytable[] = {                         47,
   27,    7,   28,   47,   47,   47,   47,   47,   91,   47,
   41,   10,   91,   91,   91,   91,   91,   44,   91,   81,
   42,   47,   43,   47,   10,   78,  111,   94,   78,   11,
   91,  124,   92,   90,   94,   91,   24,   93,   64,   92,
   90,   94,   91,   78,   93,  134,   92,   90,  150,   91,
   12,   93,   94,   64,  118,   47,  154,   92,   90,  142,
   91,   94,   93,  109,   91,  156,   92,   90,   94,   91,
   80,   93,  161,   92,   90,   94,   91,   78,   93,  193,
   92,   90,   74,   91,  110,   93,   16,   47,  165,   94,
  149,    1,    2,   13,   92,   90,   91,   91,   41,   93,
  164,   14,  133,    3,   18,   44,  121,  180,   42,   78,
   43,  147,  163,   41,   80,   80,   14,   80,   80,   80,
   44,  141,   41,   42,   19,   43,   19,   20,   23,   44,
   94,   30,   42,   80,   43,   92,   90,   94,   91,   15,
   93,  162,   92,   90,   19,   91,   81,   93,   81,   81,
   81,   27,   27,   28,   28,   79,   76,   66,   79,   76,
   16,   31,   77,   10,   81,   77,   74,   80,   46,   48,
  100,   65,   66,   79,   76,   52,   24,   24,   24,   24,
   77,   24,   24,   24,   24,   73,   65,   24,   24,   24,
   14,   69,   24,   50,   69,   24,   24,   47,   81,   80,
   73,  170,  171,   98,   25,   99,   51,   79,   76,   69,
   94,   69,   94,   53,   77,   92,   90,   92,   91,   54,
   93,   75,   93,   23,  184,   74,  185,  186,  187,   77,
   81,  188,  117,  119,   34,   35,   36,   37,   38,   79,
   76,   39,   76,   47,   47,   47,   77,   95,   96,  101,
  102,  104,   91,   91,   91,   40,  103,  105,   78,   79,
  112,  113,  115,   14,  140,   78,   78,   78,    5,  144,
  145,   87,   88,   89,  148,  151,  157,  153,   87,   88,
   89,  152,  158,  155,  160,   87,   88,   89,   80,   23,
  166,  168,  167,  169,  174,  172,   87,   88,   89,  181,
  178,  179,  107,  108,  176,   87,   88,   89,  183,  190,
  192,  194,   87,   88,   89,  195,  197,  198,  200,   87,
   88,   89,   34,   35,   36,   37,   38,  199,  196,   39,
  206,  207,    3,   87,   88,   89,   51,   34,   35,   36,
   37,   38,   62,   40,   39,   57,   34,   35,   36,   37,
   38,   71,   61,   39,   20,   80,   80,   80,   40,   41,
   60,  138,   35,   23,   23,   23,   23,   40,   23,   23,
   23,   23,   36,   18,   87,   88,   23,   20,  205,  116,
  114,   87,   23,   23,   49,    0,   81,   81,   81,    0,
    0,    0,    0,    0,    0,    0,   79,   79,   76,    0,
    0,    0,    0,   77,   77,    0,    0,    0,    5,    5,
    5,    5,    0,    5,    5,    5,    5,    0,   45,    5,
    5,    5,    0,    0,  173,    0,  175,    5,    5,   23,
   23,   23,   23,    0,   23,   23,   23,   23,    0,    0,
   23,   23,   23,   83,   84,   85,   86,    0,   23,   23,
    0,    0,   97,  201,  202,    0,  203,    0,  204,    0,
    0,    0,  106,    0,   55,   56,   57,   58,    0,   59,
   60,   61,   62,    0,    0,    0,    0,   63,    0,    0,
    0,    0,  120,   64,   65,    0,    0,    0,    0,  125,
  126,  127,  128,  129,  130,  131,  132,    0,    0,    0,
    0,    0,    0,  135,  137,    0,  139,    0,    0,    0,
    0,    0,  143,    0,    0,  146,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  159,    0,    0,    0,
    0,    0,    0,    0,    0,  135,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  135,    0,  182,
};
static const short yycheck[] = {                         37,
  125,  278,  125,   41,   42,   43,   44,   45,   37,   47,
   33,  125,   41,   42,   43,   44,   45,   40,   47,   40,
   43,   59,   45,   61,  278,   41,   63,   37,   44,  262,
   59,   41,   42,   43,   37,   45,  125,   47,   44,   42,
   43,   37,   45,   59,   47,   95,   42,   43,   44,   45,
   59,   47,   37,   59,   44,   93,   41,   42,   43,  109,
   45,   37,   47,   40,   93,   41,   42,   43,   37,   45,
   91,   47,   41,   42,   43,   37,   45,   93,   47,   41,
   42,   43,   41,   45,   61,   47,   61,  125,  153,   37,
   93,  262,  263,  123,   42,   43,  125,   45,   33,   47,
  150,   91,  125,  274,   44,   40,   41,  172,   43,  125,
   45,  118,  149,   33,   91,   41,   91,   43,   44,   45,
   40,   41,   33,   43,   40,   45,   41,  278,   12,   40,
   37,  257,   43,   59,   45,   42,   43,   37,   45,   40,
   47,  148,   42,   43,   59,   45,   41,   47,   43,   44,
   45,  276,  277,  276,  277,   41,   41,   44,   44,   44,
   61,  262,   41,  277,   59,   44,  125,   93,   61,   18,
   54,   44,   59,   59,   59,   24,  265,  266,  267,  268,
   59,  270,  271,  272,  273,   44,   59,  276,  277,  278,
   91,   41,  262,   61,   44,  284,  285,  278,   93,  125,
   59,  286,  287,   51,  274,   53,   44,   93,   93,   59,
   37,   61,   37,  262,   93,   42,   43,   42,   45,  125,
   47,   93,   47,  125,  257,   59,  259,  260,  261,   41,
  125,  264,   75,   76,  257,  258,  259,  260,  261,  125,
  125,  264,  278,  281,  282,  283,  125,  123,   41,   40,
   40,   40,  281,  282,  283,  278,  123,   40,  279,  280,
   40,   40,   59,   91,  278,  281,  282,  283,  125,   61,
  257,  281,  282,  283,   44,   41,   41,   59,  281,  282,
  283,  125,   41,  125,   44,  281,  282,  283,   91,  125,
  123,  123,  266,  123,   40,   59,  281,  282,  283,  125,
   41,   41,  279,  280,  276,  281,  282,  283,  125,  277,
   41,  269,  281,  282,  283,   58,  125,  123,  123,  281,
  282,  283,  257,  258,  259,  260,  261,   59,   58,  264,
  125,  125,    0,  281,  282,  283,   59,  257,  258,  259,
  260,  261,   59,  278,  264,   41,  257,  258,  259,  260,
  261,   59,   41,  264,   59,  281,  282,  283,  278,   59,
   41,  103,   59,  265,  266,  267,  268,  278,  270,  271,
  272,  273,   59,  125,  281,  282,  278,   41,  201,   74,
   72,  281,  284,  285,   19,   -1,  281,  282,  283,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  282,  283,  283,   -1,
   -1,   -1,   -1,  282,  283,   -1,   -1,   -1,  265,  266,
  267,  268,   -1,  270,  271,  272,  273,   -1,   16,  276,
  277,  278,   -1,   -1,  166,   -1,  168,  284,  285,  265,
  266,  267,  268,   -1,  270,  271,  272,  273,   -1,   -1,
  276,  277,  278,   41,   42,   43,   44,   -1,  284,  285,
   -1,   -1,   50,  195,  196,   -1,  198,   -1,  200,   -1,
   -1,   -1,   60,   -1,  265,  266,  267,  268,   -1,  270,
  271,  272,  273,   -1,   -1,   -1,   -1,  278,   -1,   -1,
   -1,   -1,   80,  284,  285,   -1,   -1,   -1,   -1,   87,
   88,   89,   90,   91,   92,   93,   94,   -1,   -1,   -1,
   -1,   -1,   -1,  101,  102,   -1,  104,   -1,   -1,   -1,
   -1,   -1,  110,   -1,   -1,  113,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  144,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  153,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  172,   -1,  174,
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
"KEY_STRUCT","KEY_CASE","KEY_DEFAULT","ID","OP_INCREMENT","OP_DECREMENT",
"OP_CMP","OP_LAND","OP_LOR","DIGITAL_WRITE","DELAY","HIGH","LOW",
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
#line 250 "hw2.y"

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
#line 526 "y.tab.cpp"

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
#line 49 "hw2.y"
	{functionDefinitionExists = 1;}
break;
case 35:
#line 100 "hw2.y"
	{int index = symbolTable.lookUp(yystack.l_mark[-2].idName);
				int offset = symbolTable.entries[index].offset;
				fprintf(f_asm, "lwi $r0, [$sp+%d]", (stack_counter-1)*4);
				fprintf(f_asm, "swi $r0, [$sp+%d]", (offset)*4);
				}
break;
case 44:
#line 113 "hw2.y"
	{fprintf(f_asm, "movi $r0, 13\n");
							fprintf(f_asm, "movi $r1, 1\n");
							fprintf(f_asm, "bal digitalWrite\n");
							}
break;
case 45:
#line 117 "hw2.y"
	{fprintf(f_asm, "movi $r0, 13\n");
							fprintf(f_asm, "movi $r1, 0\n");
							fprintf(f_asm, "bal digitalWrite\n");
							}
break;
case 46:
#line 122 "hw2.y"
	{fprintf(f_asm, "lwi $r0, [$sp+%d]", (stack_counter-1)*4);
							fprintf(f_asm, "bal delay\n");
							}
break;
case 64:
#line 155 "hw2.y"
	{int index = symbolTable.install(yystack.l_mark[0].idName, stack_counter, scope);
		stack_counter++;}
break;
case 65:
#line 157 "hw2.y"
	{	/*fprintf(f_asm, "lwi $r0, [$sp+%d]", (stack_counter-1)*4);*/
			/*	stack_counter--;*/
				symbolTable.install(yystack.l_mark[-2].idName, stack_counter-1, scope); stack_counter++; }
break;
case 80:
#line 184 "hw2.y"
	{fprintf(f_asm, "lwi $r1, [$sp+%d]", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "lwi $r0, [$sp+%d]", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "add $r0, $r0, $r1");
					fprintf(f_asm, "swi $r0, [$sp+%d]", stack_counter*4);
					stack_counter++;
					}
break;
case 81:
#line 192 "hw2.y"
	{fprintf(f_asm, "lwi $r1, [$sp+%d]", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "lwi $r0, [$sp+%d]", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "sub $r0, $r0, $r1");
					fprintf(f_asm, "swi $r0, [$sp+%d]", stack_counter*4);
					stack_counter++;
					}
break;
case 82:
#line 201 "hw2.y"
	{fprintf(f_asm, "lwi $r1, [$sp+%d]", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "lwi $r0, [$sp+%d]", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "divsr $r0, $r0, $r1");
					fprintf(f_asm, "swi $r0, [$sp+%d]", stack_counter*4);
					stack_counter++;
					}
break;
case 83:
#line 210 "hw2.y"
	{fprintf(f_asm, "lwi $r1, [$sp+%d]", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "lwi $r0, [$sp+%d]", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "divsr $r0, $r1, $r0, $r1");
					fprintf(f_asm, "swi $r0, [$sp+%d]", stack_counter*4);
					stack_counter++;
					}
break;
case 84:
#line 219 "hw2.y"
	{fprintf(f_asm, "lwi $r1, [$sp+%d]", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "lwi $r0, [$sp+%d]", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "divsr $r1, $r0, $r0, $r1");
					fprintf(f_asm, "swi $r0, [$sp+%d]", stack_counter*4);
					stack_counter++;
					}
break;
case 87:
#line 230 "hw2.y"
	{fprintf(f_asm, "movi $r0, %d\n", yystack.l_mark[0].intVal);
			fprintf(f_asm, "swi $r0, [$sp+%d]", stack_counter*4);
			stack_counter++;}
break;
case 91:
#line 236 "hw2.y"
	{int index = symbolTable.lookUp(yystack.l_mark[0].idName);
		fprintf(f_asm, "lwi $r0, [$sp+%d]", symbolTable.entries[index].offset*4);
		fprintf(f_asm, "swi $r0, [$sp+%d]", stack_counter*4);
		stack_counter++;}
break;
#line 839 "y.tab.cpp"
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
