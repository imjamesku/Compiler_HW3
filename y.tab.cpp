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
#line 25 "hw2.y"
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
	FILE* f_asm;
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
#define SIGN_PRECEDENCE 284
#define ARR_IDX 285
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    0,    4,    4,    6,    8,    8,    9,   10,
   10,   12,   12,   12,   12,   12,   11,   11,    7,    7,
    3,   13,   13,   15,   15,   14,   14,   17,   17,   18,
   18,   18,   18,   18,   19,   19,   19,   19,   19,   19,
   19,   19,   19,   20,   20,    1,    1,    1,   16,   16,
    2,    2,   24,   24,   25,   25,   25,   25,   22,   22,
   27,   27,   27,   27,   27,   26,   26,   23,   23,   28,
   21,   21,    5,    5,    5,    5,    5,    5,    5,    5,
    5,    5,    5,    5,    5,    5,    5,    5,    5,    5,
    5,    5,    5,    5,    5,    5,
};
static const short yylen[] = {                            2,
    3,    5,    0,   11,    7,   11,    7,    9,    8,    4,
    5,    1,    1,    1,    1,    1,    3,    0,    1,    0,
    2,    1,    0,    2,    3,    1,    0,    1,    2,    2,
    1,    1,    1,    1,    3,    4,    4,    3,    1,    1,
    2,    2,    2,    3,    4,    2,    3,    1,    2,    3,
    5,    5,    1,    0,    5,    4,    3,    2,    1,    3,
    1,    3,    2,    6,    5,    3,    4,    1,    3,    3,
    1,    3,    3,    3,    3,    2,    3,    3,    3,    3,
    3,    2,    2,    1,    1,    1,    1,    1,    1,    1,
    3,    2,    2,    4,    3,    2,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,   46,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   47,    0,    1,    0,    0,    0,    0,   22,    0,    0,
    0,    0,   53,   84,   89,   85,   86,   87,   90,    0,
    0,    0,    0,    0,    0,    0,    0,   60,    0,    0,
    0,   49,    0,    0,    0,    0,    0,    0,    0,    0,
   39,   40,    0,   31,   32,   33,   34,   21,   26,    0,
    0,    0,    0,    0,   51,   82,   83,    0,    0,   96,
    0,   92,   93,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   52,    0,   69,   50,    2,    0,    0,
    0,    0,    0,    0,   42,   43,    0,    0,    0,   29,
   30,   25,   67,    0,    0,    0,   95,    0,    0,   91,
    0,    0,    0,    0,    0,   79,   80,   81,   65,    0,
    0,    0,    0,    0,    0,    0,   38,    0,    0,    0,
   56,    0,    0,    0,   94,   64,    0,    0,    0,    0,
    0,   37,    0,   55,   45,   72,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    7,    0,
    0,   13,   14,   15,   16,   12,    0,    0,    0,    0,
    0,    0,    0,    0,    9,    0,    8,    0,    0,   17,
    0,    0,   11,    6,    4,
};
static const short yydgoto[] = {                          4,
    5,    6,   26,   64,  118,   65,  132,   66,   67,  167,
  179,  177,   27,   68,   28,   29,   69,   70,   71,   80,
  119,    8,   21,   32,   33,   17,    9,   22,
};
static const short yysindex[] = {                       -13,
 -166, -159, -126,    0,  103,   41,   -1,    0,  124,  131,
  -85,  -13, -105,  -84,  -68,   88,  143,  -50,  -68,  171,
    0,  190,    0,  -50,  -21,  118,  -57,    0,  181,  154,
  -30,  210,    0,    0,    0,    0,    0,    0,    0,  -20,
   88,   88,   88,   88,   39,  129,    3,    0,  217,   88,
  -85,    0,  -85,  -13,  222,  223,  141,  225,  229,   88,
    0,    0,  114,    0,    0,    0,    0,    0,    0,  -57,
  211, -105,  184,    2,    0,    0,    0,   88,   66,    0,
   87,    0,    0,   -9,   88,   88,   88,   88,   88,   88,
   88,   88,  -22,    0,   39,    0,    0,    0,   88,   88,
 -105,   88,    4,   39,    0,    0,   75,   88,  215,    0,
    0,    0,    0,  -68,  233,   -2,    0,    5,  237,    0,
  175,   87,   80,  144,  144,    0,    0,    0,    0,  158,
   39,  230,   16,  159,   25,  249,    0,  250,   39,   88,
    0,  -68,  201,   88,    0,    0,   88,  170,   29,  173,
  177,    0,   39,    0,    0,    0,  235, -105,  261, -105,
   26,   88,  178,   88,  179,  -34,   33,  264,    0,   32,
   40,    0,    0,    0,    0,    0,  253,  254,  191,  194,
  259,  196, -105, -105,    0, -105,    0, -105,   26,    0,
  203,  204,    0,    0,    0,
};
static const short yyrindex[] = {                       331,
    0,    0,    0,    0,    0,  278,   36,    0,  279,    0,
    0,  331,  160,    0,  299,    0,   45,    0,  299,    0,
    0,  282,    0,    0,    0,    0,  -74,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -28,
    0,    0,    0,    0,   82,    0,   36,    0,    0,    0,
    0,    0,    0,  331,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -70,
    0,  -88,  115,  301,    0,    0,    0,    0,    0,    0,
  104,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  102,    0,    0,    0,  284,    0,
  160,    0,    0,  291,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  310,    0,    0,  -40,    0,    0,
  -15,  106,  108,   94,   99,    0,    0,    0,    0,    0,
   46,    0,    0,    0,    0,    0,    0,    0,  295,    0,
    0,    0,  -37,    0,    0,    0,  284,    0,    0,    0,
    0,    0,  296,    0,    0,    0,    0,  160,    0,  160,
    0,  315,    0,    0,    0,    0,  232,    0,    0,    0,
  132,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  146,  160,    0,  160,    0,  160, -122,    0,
    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                        42,
    0,    0,   12,    0,  399,    0,  -64,    0,    0,  169,
    0,    0,    0,    0,  287,    0,  290,    0,    0,  -51,
    7,  142,  -26,  344, -112,   28,    0,    0,
};
#define YYTABLESIZE 563
static const short yytable[] = {                         44,
   71,  141,   10,   44,   44,   44,   44,   44,   88,   44,
   41,  109,   88,   88,   88,   88,   88,   44,   88,   79,
   42,   44,   43,   44,   96,   75,   97,   92,   75,  154,
   88,  120,   90,   88,   92,   89,   24,   91,   15,   90,
   88,   92,   89,   75,   91,  114,   90,   88,  144,   89,
   27,   91,   92,   23,   28,   44,  148,   90,   88,   16,
   89,   92,   91,   16,   88,  150,   90,   88,   92,   89,
   78,   91,  181,   90,   88,   92,   89,   75,   91,   61,
   90,   88,  157,   89,   71,   91,   19,   44,   63,   14,
  143,  155,   14,   14,   61,   98,   88,  168,   41,  130,
  113,  115,  129,   63,   19,   44,  117,   41,   42,   75,
   43,    7,  134,  138,   44,  137,   92,   42,   10,   43,
   41,   90,   88,   92,   89,   62,   91,   44,   90,   88,
   42,   89,   43,   91,   77,   11,   77,   77,   77,   78,
   62,   78,   78,   78,   76,   70,   74,   76,   73,   74,
  156,   73,   77,  107,   10,   66,   24,   78,   66,   48,
   70,   12,   76,   13,   74,   52,   73,   18,   25,  163,
   19,  165,   30,   66,  108,   66,   24,   24,   24,   24,
   92,   24,   24,   24,   24,   90,   77,   24,   24,   24,
   91,   78,   20,   31,  189,  190,   76,  191,   74,  192,
   73,   27,   27,   46,   78,   28,   28,   55,   56,   57,
   58,   92,   59,   60,   61,   62,   90,   88,   77,   89,
   63,   91,  172,   78,  173,  174,  175,   47,   76,  176,
   74,   50,   73,   51,   34,   35,   36,   37,   38,   72,
   53,   39,   54,   44,   44,   44,   73,   74,    1,    2,
   75,   93,   88,   88,   88,   40,    5,   94,   76,   77,
    3,   99,  100,  101,  102,   75,   75,   75,  103,  111,
   23,   85,   86,   87,   14,  140,  142,  145,   85,   86,
   87,  136,  146,  149,   23,   85,   86,   87,  147,  151,
  152,   78,  158,  162,  159,  160,   85,   86,   87,  161,
  164,  166,  169,  171,  180,   85,   86,   87,  182,  178,
  183,  184,   85,   86,   87,  185,  186,  187,  188,   85,
   86,   87,   34,   35,   36,   37,   38,  194,  195,   39,
    3,   34,   35,   36,   37,   38,   48,   59,   39,   54,
   68,   58,   20,   40,   34,   35,   36,   37,   38,   41,
   57,   39,   40,   35,   36,   20,   18,  193,  112,  110,
   85,   86,   49,    0,    0,   40,    0,   85,    0,    0,
    0,    0,    0,    0,   77,   77,   77,    0,    0,   78,
   78,   78,    0,    0,    0,   76,   76,   74,   74,    0,
   73,    0,  105,  106,    0,    0,    5,    5,    5,    5,
    0,    5,    5,    5,    5,    0,    0,    5,    5,    5,
   23,   23,   23,   23,   45,   23,   23,   23,   23,    0,
    0,   23,   23,   23,   23,   23,   23,   23,    0,   23,
   23,   23,   23,    0,    0,    0,    0,   23,    0,   81,
   82,   83,   84,    0,    0,    0,    0,    0,   95,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  104,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  116,    0,    0,    0,
    0,    0,    0,  121,  122,  123,  124,  125,  126,  127,
  128,    0,    0,    0,    0,    0,    0,  131,  133,    0,
  135,    0,    0,    0,    0,    0,  139,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  153,    0,
    0,    0,    0,    0,    0,  131,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  131,    0,  170,
};
static const short yycheck[] = {                         37,
   41,  114,  125,   41,   42,   43,   44,   45,   37,   47,
   33,   63,   41,   42,   43,   44,   45,   40,   47,   40,
   43,   59,   45,   61,   51,   41,   53,   37,   44,  142,
   59,   41,   42,   43,   37,   45,  125,   47,   40,   42,
   43,   37,   45,   59,   47,   44,   42,   43,   44,   45,
  125,   47,   37,   12,  125,   93,   41,   42,   43,   61,
   45,   37,   47,   61,   93,   41,   42,   43,   37,   45,
   91,   47,   41,   42,   43,   37,   45,   93,   47,   44,
   42,   43,  147,   45,  125,   47,   41,  125,   44,   91,
   93,  143,   91,   91,   59,   54,  125,  162,   33,   93,
   73,   74,  125,   59,   59,   40,   41,   33,   43,  125,
   45,  278,  101,  107,   40,   41,   37,   43,  278,   45,
   33,   42,   43,   37,   45,   44,   47,   40,   42,   43,
   43,   45,   45,   47,   41,  262,   43,   44,   45,   41,
   59,   43,   44,   45,   41,   44,   41,   44,   41,   44,
  144,   44,   59,   40,  277,   41,  262,   59,   44,   18,
   59,   59,   59,  123,   59,   24,   59,   44,  274,  158,
   40,  160,  257,   59,   61,   61,  265,  266,  267,  268,
   37,  270,  271,  272,  273,   42,   93,  276,  277,  278,
   47,   93,  278,  262,  183,  184,   93,  186,   93,  188,
   93,  276,  277,   61,   91,  276,  277,  265,  266,  267,
  268,   37,  270,  271,  272,  273,   42,   43,  125,   45,
  278,   47,  257,  125,  259,  260,  261,  278,  125,  264,
  125,   61,  125,   44,  257,  258,  259,  260,  261,   59,
  262,  264,  125,  281,  282,  283,   93,  278,  262,  263,
   41,  123,  281,  282,  283,  278,  125,   41,  279,  280,
  274,   40,   40,  123,   40,  281,  282,  283,   40,   59,
  125,  281,  282,  283,   91,   61,   44,   41,  281,  282,
  283,  278,  125,  125,  125,  281,  282,  283,   59,   41,
   41,   91,  123,   59,  266,  123,  281,  282,  283,  123,
   40,  276,  125,  125,   41,  281,  282,  283,  269,  277,
   58,   58,  281,  282,  283,  125,  123,   59,  123,  281,
  282,  283,  257,  258,  259,  260,  261,  125,  125,  264,
    0,  257,  258,  259,  260,  261,   59,   59,  264,   41,
   59,   41,   59,  278,  257,  258,  259,  260,  261,   59,
   41,  264,  278,   59,   59,   41,  125,  189,   72,   70,
  281,  282,   19,   -1,   -1,  278,   -1,  281,   -1,   -1,
   -1,   -1,   -1,   -1,  281,  282,  283,   -1,   -1,  281,
  282,  283,   -1,   -1,   -1,  282,  283,  282,  283,   -1,
  283,   -1,  279,  280,   -1,   -1,  265,  266,  267,  268,
   -1,  270,  271,  272,  273,   -1,   -1,  276,  277,  278,
  265,  266,  267,  268,   16,  270,  271,  272,  273,   -1,
   -1,  276,  277,  278,  265,  266,  267,  268,   -1,  270,
  271,  272,  273,   -1,   -1,   -1,   -1,  278,   -1,   41,
   42,   43,   44,   -1,   -1,   -1,   -1,   -1,   50,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   60,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   78,   -1,   -1,   -1,
   -1,   -1,   -1,   85,   86,   87,   88,   89,   90,   91,
   92,   -1,   -1,   -1,   -1,   -1,   -1,   99,  100,   -1,
  102,   -1,   -1,   -1,   -1,   -1,  108,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  140,   -1,
   -1,   -1,   -1,   -1,   -1,  147,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  162,   -1,  164,
};
#define YYFINAL 4
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 285
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
"OP_CMP","OP_LAND","OP_LOR","SIGN_PRECEDENCE","ARR_IDX","illegal-symbol",
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
#line 236 "hw2.y"

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
	return 0;
}
#line 512 "y.tab.cpp"

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
#line 48 "hw2.y"
	{functionDefinitionExists = 1;}
break;
case 35:
#line 99 "hw2.y"
	{int index = symbolTable.lookUp(yystack.l_mark[-2].idName);
				int offset = symbolTable.entries[index].offset;
				fprintf(f_asm, "lwi $r0, [$sp+%d]", (stack_counter-1)*4);
				fprintf(f_asm, "swi $r0, [$sp+%d]", (offset)*4);
				}
break;
case 61:
#line 142 "hw2.y"
	{int index = symbolTable.install(yystack.l_mark[0].idName, stack_counter, scope); stack_counter++;}
break;
case 62:
#line 143 "hw2.y"
	{	/*fprintf(f_asm, "lwi $r0, [$sp+%d]", (stack_counter-1)*4);*/
			/*	stack_counter--;*/
				symbolTable.install(yystack.l_mark[-2].idName, stack_counter-1, scope); stack_counter++; }
break;
case 77:
#line 170 "hw2.y"
	{fprintf(f_asm, "lwi $r1, [$sp+%d]", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "lwi $r0, [$sp+%d]", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "add $r0, $r0, $r1");
					fprintf(f_asm, "swi $r0, [$sp+%d]", stack_counter*4);
					stack_counter++;
					}
break;
case 78:
#line 178 "hw2.y"
	{fprintf(f_asm, "lwi $r1, [$sp+%d]", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "lwi $r0, [$sp+%d]", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "sub $r0, $r0, $r1");
					fprintf(f_asm, "swi $r0, [$sp+%d]", stack_counter*4);
					stack_counter++;
					}
break;
case 79:
#line 187 "hw2.y"
	{fprintf(f_asm, "lwi $r1, [$sp+%d]", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "lwi $r0, [$sp+%d]", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "divsr $r0, $r0, $r1");
					fprintf(f_asm, "swi $r0, [$sp+%d]", stack_counter*4);
					stack_counter++;
					}
break;
case 80:
#line 196 "hw2.y"
	{fprintf(f_asm, "lwi $r1, [$sp+%d]", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "lwi $r0, [$sp+%d]", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "divsr $r0, $r1, $r0, $r1");
					fprintf(f_asm, "swi $r0, [$sp+%d]", stack_counter*4);
					stack_counter++;
					}
break;
case 81:
#line 205 "hw2.y"
	{fprintf(f_asm, "lwi $r1, [$sp+%d]", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "lwi $r0, [$sp+%d]", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "divsr $r1, $r0, $r0, $r1");
					fprintf(f_asm, "swi $r0, [$sp+%d]", stack_counter*4);
					stack_counter++;
					}
break;
case 84:
#line 216 "hw2.y"
	{fprintf(f_asm, "movi $r0, %d\n", yystack.l_mark[0].intVal);
			fprintf(f_asm, "swi $r0, [$sp+%d]", stack_counter*4);
			stack_counter++;}
break;
case 88:
#line 222 "hw2.y"
	{int index = symbolTable.lookUp(yystack.l_mark[0].idName);
		fprintf(f_asm, "lwi $r0, [$sp+%d]", symbolTable.entries[index].offset*4);
		fprintf(f_asm, "swi $r0, [$sp+%d]", stack_counter*4);
		stack_counter++;}
break;
#line 804 "y.tab.cpp"
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
