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
	int label_counter = 0;
	int scope = 0;
	int if_L0 = 0, if_L_else_end = 0;
	FILE* f_asm = fopen("assembly", "w");
#line 53 "y.tab.cpp"

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
    0,    0,    0,    4,    4,    6,    5,    8,   10,   10,
   11,   12,   12,   14,   14,   14,   14,   14,   13,   13,
    9,    9,    3,   15,   15,   17,   17,   16,   16,   19,
   19,   20,   20,   20,   20,   20,   21,   21,   21,   21,
   21,   21,   21,   21,   21,   21,   21,   21,   22,   22,
    1,    1,    1,   18,   18,    2,    2,   26,   26,   27,
   27,   27,   27,   24,   24,   29,   29,   29,   29,   29,
   28,   28,   25,   25,   30,   23,   23,    7,    7,    7,
    7,    7,    7,    7,    7,    7,    7,    7,    7,    7,
    7,    7,    7,    7,    7,    7,    7,    7,    7,    7,
    7,
};
static const short yylen[] = {                            2,
    3,    5,    0,    5,    4,    4,    4,   11,    7,    9,
    8,    4,    5,    1,    1,    1,    1,    1,    3,    0,
    1,    0,    2,    1,    0,    2,    3,    1,    0,    1,
    2,    2,    1,    1,    1,    1,    3,    4,    4,    3,
    1,    1,    2,    2,    2,    6,    6,    4,    3,    4,
    2,    3,    1,    2,    3,    5,    5,    1,    0,    5,
    4,    3,    2,    1,    3,    1,    3,    2,    6,    5,
    3,    4,    1,    3,    3,    1,    3,    3,    3,    3,
    2,    3,    3,    3,    3,    3,    2,    2,    1,    1,
    1,    1,    1,    1,    1,    3,    2,    2,    4,    3,
    2,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,   51,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   52,    0,    1,    0,    0,    0,    0,   24,    0,    0,
    0,    0,   58,   89,   94,   90,   91,   92,   95,    0,
    0,    0,    0,    0,    0,    0,    0,   65,    0,    0,
    0,   54,    0,    0,    0,    0,    0,    0,    0,    0,
   41,   42,    0,    0,    0,   33,    0,    0,   34,   35,
   36,   23,   28,    0,    0,    0,    0,    0,   56,   87,
   88,    0,    0,  101,    0,   97,   98,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   57,    0,   74,
   55,    2,    0,    0,    0,    0,    0,    0,   44,   45,
    0,    0,    0,    0,    0,    0,    0,   31,   32,   27,
   72,    0,    0,    0,  100,    0,    0,   96,    0,    0,
    0,    0,    0,   84,   85,   86,   70,    0,    0,    0,
    0,    0,    0,    0,   40,    0,    0,    0,    0,    0,
    0,    0,   61,    0,    0,    0,   99,   69,    0,    0,
    0,    6,    0,   39,    0,    0,   48,    0,    0,   60,
   50,   77,    0,    0,    0,    0,    0,    0,    4,    0,
    0,    0,    0,    0,   46,   47,    0,    9,    0,   15,
   16,   17,   18,   14,    0,    0,    0,    0,    0,    0,
    0,   11,    0,   10,    0,   19,    0,   13,    8,
};
static const short yydgoto[] = {                          4,
    5,    6,   26,   66,   67,   68,  126,   69,  140,   70,
   71,  184,  197,  195,   27,   72,   28,   29,   73,   74,
   75,   84,  127,    8,   21,   32,   33,   17,    9,   22,
};
static const short yysindex[] = {                       -79,
 -276, -252, -207,    0,   24,  -31,  128,    0,   50,   63,
 -145,  -79, -157, -114, -101,  104,  111,  -99, -101,  115,
    0,  142,    0,  -99,  -69,   74,  238,    0,  145,  108,
  -68,  172,    0,    0,    0,    0,    0,    0,    0,  -20,
  104,  104,  104,  104,   53,   91,  -40,    0,  175,  104,
 -145,    0, -145,  -79,  178,  181,  105,  184,  189,  104,
    0,    0,  124,  190,  196,    0,  -29,  118,    0,    0,
    0,    0,    0,  238,  185, -157,  152,   10,    0,    0,
    0,  104,   66,    0,  120,    0,    0,   -9,  104,  104,
  104,  104,  104,  104,  104,  104,   81,    0,   53,    0,
    0,    0,  104,  104, -157,  104,  -25,   53,    0,    0,
   89,  104,  186,   -8,  104,  127, -157,    0,    0,    0,
    0, -101,  204,   -2,    0,    5,  211,    0,  180,  120,
   73,  150,  150,    0,    0,    0,    0,  131,   53,  198,
   16,  133,   25,  218,    0,  221,   53,  104,  219,   32,
 -157,  139,    0, -101,  174,  104,    0,    0,  104,  143,
    1,    0,  146,    0,   53,  -96,    0,  147,    0,    0,
    0,    0,  209, -157,  231,   -1,  235,  237,    0,  104,
  154,  104,  -26,    9,    0,    0,  241,    0,   39,    0,
    0,    0,    0,    0,  227,  232,  164,  168,  233, -157,
 -157,    0, -157,    0,   -1,    0,  169,    0,    0,
};
static const short yyrindex[] = {                       293,
    0,    0,    0,    0,    0,  242,  -32,    0,  243,    0,
    0,  293,  281,    0,  255,    0,   60,    0,  255,    0,
    0,  244,    0,    0,    0,    0, -107,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -28,
    0,    0,    0,    0,   64,    0,  -32,    0,    0,    0,
    0,    0,    0,  293,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -102,    0,  212,  137,  256,    0,    0,
    0,    0,    0,    0,  101,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   68,    0,
    0,    0,  246,    0,  281,    0,    0,  247,    0,    0,
    0,    0,    0,    0,    0,    0,  281,    0,    0,    0,
    0,    0,  259,    0,    0,  -38,    0,    0,   87,  112,
  114,   95,  107,    0,    0,    0,    0,    0,  -30,    0,
    0,    0,    0,    0,    0,    0,  250,    0,    0,    0,
  281,    0,    0,    0,  -37,    0,    0,    0,  246,    0,
    0,    0,    0,    0,  251,    0,    0,    0,  158,    0,
    0,    0,    0,  281,    0,    0,    0,    0,    0,  271,
    0,    0,    0,  188,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  260,
  281,    0,  281,    0, -100,    0,    0,    0,    0,
};
static const short yygindex[] = {                        48,
    0,    0,    8,    0,    0,    0,  359,    0,  -95,    0,
    0,  123,    0,    0,    0,    0,  240,    0,  245,    0,
    0,  -62,  -67,  117,  -14,  298,  -76,  125,    0,    0,
};
#define YYTABLESIZE 566
static const short yytable[] = {                         49,
  113,    7,   76,   49,   49,   49,   49,   49,   93,   49,
   21,   66,   93,   93,   93,   93,   93,   29,   93,   83,
   16,   49,   30,   49,   12,   10,   66,   96,   21,  138,
   93,  128,   94,   92,   96,   93,  100,   95,  101,   94,
   92,   96,   93,  146,   95,  153,   94,   92,  156,   93,
   14,   95,   96,  122,   11,   49,  160,   94,   92,   23,
   93,   96,   95,  173,   93,  162,   94,   92,   96,   93,
   82,   95,  167,   94,   92,   96,   93,  170,   95,  199,
   94,   92,   12,   93,  187,   95,   76,   49,  172,   96,
  155,   13,  171,   18,   94,   92,   93,   93,   41,   95,
   14,  102,   19,   68,   24,   44,  125,   67,   42,   96,
   43,   75,  142,   41,   94,   92,   25,   93,   68,   95,
   44,   41,   67,   42,  152,   43,   75,   80,   44,  145,
   80,   42,   20,   43,   48,   82,   41,   82,   82,   82,
   52,   81,   30,   44,   81,   80,   42,   83,   43,   83,
   83,   83,   79,   82,   78,   79,   96,   78,  168,   81,
   31,   94,   92,  111,   93,   83,   95,   15,   29,   29,
   79,   46,   78,   30,   30,   50,   12,   71,   47,   80,
   71,  181,    1,    2,  112,   51,   96,   82,   16,  177,
  178,   94,   53,   81,    3,   71,   95,   71,   54,   83,
   77,  121,  123,   76,   79,  137,   78,  205,  206,   78,
  207,   80,   79,   97,   82,   98,   96,  103,   14,   82,
  104,   94,   92,  106,   93,   81,   95,  105,  107,  114,
  190,   83,  191,  192,  193,  115,   79,  194,   78,  116,
  117,   49,   14,  119,   49,   49,  148,  154,  149,  151,
   93,  157,  144,   93,   93,  158,  159,  161,  163,   80,
   81,  164,  166,  169,   82,  174,  175,  180,  176,   89,
  182,  179,   90,   91,  183,  185,   89,  186,  188,   90,
   91,  198,    5,   89,  200,  196,   90,   91,  202,  201,
  203,  204,    3,  209,   89,   59,   63,   90,   91,   62,
   53,   64,   73,   89,   22,   43,   90,   91,   37,   38,
   89,   22,   20,   90,   91,  120,   49,   89,  118,    0,
   90,   91,   34,   35,   36,   37,   38,  208,    0,   39,
    0,   89,    0,    0,   90,   91,   26,   34,   35,   36,
   37,   38,    0,   40,   39,   34,   35,   36,   37,   38,
    0,   89,   39,    0,   90,    0,    0,    0,   40,    0,
   34,   35,   36,   37,   38,   80,   40,   39,   80,   80,
    0,    0,    0,   82,   45,    0,   82,   82,    0,    0,
    0,   40,   81,   81,   25,   83,    0,    0,   83,   83,
    0,    0,    0,   79,   79,    0,   78,    0,   89,   85,
   86,   87,   88,  109,  110,   25,    0,    0,   99,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  108,    0,
    0,    0,    5,    5,    5,    5,    7,    5,    5,    5,
    5,    0,    0,    5,    5,    5,    0,    0,    0,    0,
  124,    5,    5,    0,    0,    0,    0,  129,  130,  131,
  132,  133,  134,  135,  136,    0,    0,    0,    0,    0,
    0,  139,  141,    0,  143,    0,    0,    0,    0,    0,
  147,    0,    0,  150,    0,    0,   26,   26,   26,   26,
    0,   26,   26,   26,   26,    0,    0,   26,   26,   26,
    0,    0,    0,    0,    0,   26,   26,    0,    0,    0,
    0,    0,   55,   56,   57,   58,  165,   59,   60,   61,
   62,    0,    0,    0,    0,   63,    0,  139,    0,    0,
    0,   64,   65,    0,   25,   25,   25,   25,    0,   25,
   25,   25,   25,    0,    0,   25,   25,   25,  139,    0,
  189,    0,    0,   25,   25,   25,   25,   25,   25,    0,
   25,   25,   25,   25,    0,    0,    0,    0,   25,    0,
    0,    0,    0,    0,   25,   25,
};
static const short yycheck[] = {                         37,
   63,  278,   41,   41,   42,   43,   44,   45,   37,   47,
   41,   44,   41,   42,   43,   44,   45,  125,   47,   40,
   61,   59,  125,   61,  125,  278,   59,   37,   59,   97,
   59,   41,   42,   43,   37,   45,   51,   47,   53,   42,
   43,   37,   45,  111,   47,  122,   42,   43,   44,   45,
   91,   47,   37,   44,  262,   93,   41,   42,   43,   12,
   45,   37,   47,  159,   93,   41,   42,   43,   37,   45,
   91,   47,   41,   42,   43,   37,   45,  154,   47,   41,
   42,   43,   59,   45,  180,   47,  125,  125,  156,   37,
   93,  123,  155,   44,   42,   43,  125,   45,   33,   47,
   91,   54,   40,   44,  262,   40,   41,   44,   43,   37,
   45,   44,  105,   33,   42,   43,  274,   45,   59,   47,
   40,   33,   59,   43,  117,   45,   59,   41,   40,   41,
   44,   43,  278,   45,   18,   41,   33,   43,   44,   45,
   24,   41,  257,   40,   44,   59,   43,   41,   45,   43,
   44,   45,   41,   59,   41,   44,   37,   44,  151,   59,
  262,   42,   43,   40,   45,   59,   47,   40,  276,  277,
   59,   61,   59,  276,  277,   61,  277,   41,  278,   93,
   44,  174,  262,  263,   61,   44,   37,   93,   61,  286,
  287,   42,  262,   93,  274,   59,   47,   61,  125,   93,
   93,   77,   78,   59,   93,  125,   93,  200,  201,  278,
  203,  125,   41,  123,   91,   41,   37,   40,   91,  125,
   40,   42,   43,   40,   45,  125,   47,  123,   40,   40,
  257,  125,  259,  260,  261,   40,  125,  264,  125,  269,
  123,  279,   91,   59,  282,  283,   61,   44,  257,  123,
  279,   41,  278,  282,  283,  125,   59,  125,   41,  280,
  281,   41,   44,  125,   91,  123,  266,   59,  123,  279,
   40,  125,  282,  283,  276,   41,  279,   41,  125,  282,
  283,   41,  125,  279,   58,  277,  282,  283,  125,   58,
  123,   59,    0,  125,  279,   41,   41,  282,  283,   41,
   59,   59,   59,  279,   59,   59,  282,  283,   59,   59,
  279,   41,  125,  282,  283,   76,   19,  279,   74,   -1,
  282,  283,  257,  258,  259,  260,  261,  205,   -1,  264,
   -1,  279,   -1,   -1,  282,  283,  125,  257,  258,  259,
  260,  261,   -1,  278,  264,  257,  258,  259,  260,  261,
   -1,  279,  264,   -1,  282,   -1,   -1,   -1,  278,   -1,
  257,  258,  259,  260,  261,  279,  278,  264,  282,  283,
   -1,   -1,   -1,  279,   16,   -1,  282,  283,   -1,   -1,
   -1,  278,  282,  283,  125,  279,   -1,   -1,  282,  283,
   -1,   -1,   -1,  282,  283,   -1,  283,   -1,  279,   41,
   42,   43,   44,  280,  281,  125,   -1,   -1,   50,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   60,   -1,
   -1,   -1,  265,  266,  267,  268,  269,  270,  271,  272,
  273,   -1,   -1,  276,  277,  278,   -1,   -1,   -1,   -1,
   82,  284,  285,   -1,   -1,   -1,   -1,   89,   90,   91,
   92,   93,   94,   95,   96,   -1,   -1,   -1,   -1,   -1,
   -1,  103,  104,   -1,  106,   -1,   -1,   -1,   -1,   -1,
  112,   -1,   -1,  115,   -1,   -1,  265,  266,  267,  268,
   -1,  270,  271,  272,  273,   -1,   -1,  276,  277,  278,
   -1,   -1,   -1,   -1,   -1,  284,  285,   -1,   -1,   -1,
   -1,   -1,  265,  266,  267,  268,  148,  270,  271,  272,
  273,   -1,   -1,   -1,   -1,  278,   -1,  159,   -1,   -1,
   -1,  284,  285,   -1,  265,  266,  267,  268,   -1,  270,
  271,  272,  273,   -1,   -1,  276,  277,  278,  180,   -1,
  182,   -1,   -1,  284,  285,  265,  266,  267,  268,   -1,
  270,  271,  272,  273,   -1,   -1,   -1,   -1,  278,   -1,
   -1,   -1,   -1,   -1,  284,  285,
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
"if_else_statement : if_condition_true KEY_ELSE '{' compound_statement '}'",
"if_else_statement : if_condition '{' compound_statement '}'",
"if_condition : KEY_IF '(' expression ')'",
"if_condition_true : if_condition '{' compound_statement '}'",
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
#line 384 "hw2.y"

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
#line 531 "y.tab.cpp"

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
#line 53 "hw2.y"
	{functionDefinitionExists = 1;}
break;
case 4:
#line 56 "hw2.y"
	{
										fprintf(f_asm, ".L%d:\n", if_L_else_end);
									}
break;
case 5:
#line 59 "hw2.y"
	{
								fprintf(f_asm, ".L%d:\n", if_L0);
							}
break;
case 6:
#line 63 "hw2.y"
	{
						if_L0 = label_counter++;
						if_L_else_end = label_counter++;
						fprintf(f_asm, "lwi $r0, [$sp+%d]\n", (stack_counter-1)*4);
						stack_counter--;
						fprintf(f_asm, "beqz $r0, L%d\n", if_L0);
					}
break;
case 7:
#line 71 "hw2.y"
	{
									fprintf(f_asm, "j\t.L%d\n", if_L_else_end);
									fprintf(f_asm, ".L%d:\n", if_L0);
								}
break;
case 37:
#line 121 "hw2.y"
	{int index = symbolTable.lookUp(yystack.l_mark[-2].idName);
				int offset = symbolTable.entries[index].offset;
				fprintf(f_asm, "lwi $r0, [$sp+%d]\n", (stack_counter-1)*4);
				stack_counter--;
				fprintf(f_asm, "swi $r0, [$sp+%d]\n", (offset)*4);
				}
break;
case 46:
#line 135 "hw2.y"
	{fprintf(f_asm, "movi $r0, 13\n");
							fprintf(f_asm, "movi $r1, 1\n");
							fprintf(f_asm, "bal digitalWrite\n");
							}
break;
case 47:
#line 139 "hw2.y"
	{fprintf(f_asm, "movi $r0, 13\n");
							fprintf(f_asm, "movi $r1, 0\n");
							fprintf(f_asm, "bal digitalWrite\n");
							}
break;
case 48:
#line 144 "hw2.y"
	{fprintf(f_asm, "lwi $r0, [$sp+%d]\n", (stack_counter-1)*4);
							stack_counter--;
							fprintf(f_asm, "bal delay\n");
							}
break;
case 66:
#line 178 "hw2.y"
	{int index = symbolTable.install(yystack.l_mark[0].idName, stack_counter, scope);
		stack_counter++;}
break;
case 67:
#line 180 "hw2.y"
	{/*fprintf(f_asm, "lwi $r0, [$sp+%d]", (stack_counter-1)*4);*/
			/*	stack_counter--;*/
				symbolTable.install(yystack.l_mark[-2].idName, stack_counter-1, scope);
				 }
break;
case 78:
#line 204 "hw2.y"
	{
				
						int L5 = label_counter;
						label_counter++;
						int L6 = label_counter;
						label_counter++;
						int L7 = label_counter;
						label_counter++;
						
						fprintf(f_asm, "lwi $r0, [$sp+%d]\n", (stack_counter-1)*4);
						stack_counter--;
						fprintf(f_asm, "bnez\t$r0, .L%d\n", L5);
						fprintf(f_asm, "lwi $r0, [$sp+%d]\n", (stack_counter-1)*4);
						stack_counter--;
						fprintf(f_asm, "beqz\t$r0, .L%d\n", L6);
						fprintf(f_asm, ".L%d:\n", L5);
						fprintf(f_asm, "movi\t$r0, 1\n");
						fprintf(f_asm, "j\t.L%d\n", L7);
						fprintf(f_asm, ".L%d:\n", L6);
						fprintf(f_asm, "movi\t$r0, 0\n");
						fprintf(f_asm, ".L%d:\n", L7);
						fprintf(f_asm, "swi $r0, [$sp+%d]\n", stack_counter*4);
						stack_counter++;
					}
break;
case 79:
#line 228 "hw2.y"
	{
						int L3 = label_counter;
						label_counter++;
						int L4 = label_counter;
						
						label_counter++;
						fprintf(f_asm, "lwi $r0, [$sp+%d]\n", (stack_counter-1)*4);
						stack_counter--;
						fprintf(f_asm, "beqz\t$r0, .L%d\n", L3);
						fprintf(f_asm, "lwi $r0, [$sp+%d]\n", (stack_counter-1)*4);
						stack_counter--;
						fprintf(f_asm, "beqz\t$r0, .L%d\n", L3);
						fprintf(f_asm, "movi\t$r0, 1\n");
						fprintf(f_asm, "j\t.L%d\n", L4);
						fprintf(f_asm, ".L%d:\n", L3);
						fprintf(f_asm, "movi\t$r0, 0\n");
						fprintf(f_asm, ".L%d:\n", L4);
						fprintf(f_asm, "swi $r0, [$sp+%d]\n", stack_counter*4);
						stack_counter++;

					}
break;
case 80:
#line 249 "hw2.y"
	{
						std::string op = yystack.l_mark[-1].cmpStr;
						if(op == "<"){
							fprintf(f_asm, "lwi $r1, [$sp+%d]\n", (stack_counter-1)*4);
							stack_counter--;
							fprintf(f_asm, "lwi $r0, [$sp+%d]\n", (stack_counter-1)*4);
							stack_counter--;
							fprintf(f_asm, "slts $r0, $r1, $r0\n");
							fprintf(f_asm, "zeb $r0, $r0\n");
							fprintf(f_asm, "swi $r0, [$sp+%d]\n", stack_counter*4);
							stack_counter++;
						}
						else if(op == "<="){
							fprintf(f_asm, "lwi $r0, [$sp+%d]\n", (stack_counter-1)*4);
							stack_counter--;
							fprintf(f_asm, "lwi $r1, [$sp+%d]\n", (stack_counter-1)*4);
							stack_counter--;
							fprintf(f_asm, "slts $r0, $r1, $r0\n");
							fprintf(f_asm, "xori $r0, $r0, 1\n");
							fprintf(f_asm, "zeb $r0, $r0\n");
							fprintf(f_asm, "swi $r0, [$sp+%d]\n", stack_counter*4);
							stack_counter++;
						}
						else if(op == ">"){
							fprintf(f_asm, "lwi $r0, [$sp+%d]\n", (stack_counter-1)*4);
							stack_counter--;
							fprintf(f_asm, "lwi $r1, [$sp+%d]\n", (stack_counter-1)*4);
							stack_counter--;
							fprintf(f_asm, "slts $r0, $r1, $r0\n");
							fprintf(f_asm, "zeb $r0, $r0\n");
							fprintf(f_asm, "swi $r0, [$sp+%d]\n", stack_counter*4);
							stack_counter++;
						}
						else if(op == ">="){
							fprintf(f_asm, "lwi $r1, [$sp+%d]\n", (stack_counter-1)*4);
							stack_counter--;
							fprintf(f_asm, "lwi $r0, [$sp+%d]\n", (stack_counter-1)*4);
							stack_counter--;
							fprintf(f_asm, "slts $r0, $r1, $r0\n");
							fprintf(f_asm, "xori $r0, $r0, 1\n");
							fprintf(f_asm, "zeb $r0, $r0\n");
							fprintf(f_asm, "swi $r0, [$sp+%d]\n", stack_counter*4);
							stack_counter++;
						}
						else if(op == "=="){
							fprintf(f_asm, "lwi $r1, [$sp+%d]\n", (stack_counter-1)*4);
							stack_counter--;
							fprintf(f_asm, "lwi $r0, [$sp+%d]\n", (stack_counter-1)*4);
							stack_counter--;
							fprintf(f_asm, "xor $r0, $r1, $r0\n");
							fprintf(f_asm, "slti $r0, $r0, 1\n");
							fprintf(f_asm, "zeb $r0, $r0\n");
							fprintf(f_asm, "swi $r0, [$sp+%d]\n", stack_counter*4);
							stack_counter++;
						}
						else if(op == "!="){
							fprintf(f_asm, "lwi $r1, [$sp+%d]\n", (stack_counter-1)*4);
							stack_counter--;
							fprintf(f_asm, "lwi $r0, [$sp+%d]\n", (stack_counter-1)*4);
							stack_counter--;
							fprintf(f_asm, "xor $r0, $r1, $r0\n");
							fprintf(f_asm, "movi\t$r1, 0\n");
							fprintf(f_asm, "slt $r0, $r1, $r0\n");
							fprintf(f_asm, "zeb $r0, $r0\n");
							fprintf(f_asm, "swi $r0, [$sp+%d]\n", stack_counter*4);
							stack_counter++;
						}
					}
break;
case 82:
#line 318 "hw2.y"
	{fprintf(f_asm, "lwi $r1, [$sp+%d]\n", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "lwi $r0, [$sp+%d]\n", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "add $r0, $r0, $r1\n");
					fprintf(f_asm, "swi $r0, [$sp+%d]\n", stack_counter*4);
					stack_counter++;
					}
break;
case 83:
#line 326 "hw2.y"
	{fprintf(f_asm, "lwi $r1, [$sp+%d]\n", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "lwi $r0, [$sp+%d]\n", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "sub $r0, $r0, $r1\n");
					fprintf(f_asm, "swi $r0, [$sp+%d]\n", stack_counter*4);
					stack_counter++;
					}
break;
case 84:
#line 335 "hw2.y"
	{fprintf(f_asm, "lwi $r1, [$sp+%d]\n", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "lwi $r0, [$sp+%d]\n", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "mul $r0, $r0, $r1\n");
					fprintf(f_asm, "swi $r0, [$sp+%d]\n", stack_counter*4);
					stack_counter++;
					}
break;
case 85:
#line 344 "hw2.y"
	{fprintf(f_asm, "lwi $r1, [$sp+%d]\n", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "lwi $r0, [$sp+%d]\n", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "divsr $r0, $r1, $r0, $r1\n");
					fprintf(f_asm, "swi $r0, [$sp+%d]\n", stack_counter*4);
					stack_counter++;
					}
break;
case 86:
#line 353 "hw2.y"
	{fprintf(f_asm, "lwi $r1, [$sp+%d]\n", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "lwi $r0, [$sp+%d]\n", (stack_counter-1)*4);
					stack_counter--;
					fprintf(f_asm, "divsr $r1, $r0, $r0, $r1\n");
					fprintf(f_asm, "swi $r0, [$sp+%d]\n", stack_counter*4);
					stack_counter++;
					}
break;
case 89:
#line 364 "hw2.y"
	{fprintf(f_asm, "movi $r0, %d\n", yystack.l_mark[0].intVal);
			fprintf(f_asm, "swi $r0, [$sp+%d]\n", stack_counter*4);
			stack_counter++;}
break;
case 93:
#line 370 "hw2.y"
	{int index = symbolTable.lookUp(yystack.l_mark[0].idName);
		fprintf(f_asm, "lwi $r0, [$sp+%d]\n", symbolTable.entries[index].offset*4);
		fprintf(f_asm, "swi $r0, [$sp+%d]\n", stack_counter*4);
		stack_counter++;}
break;
#line 998 "y.tab.cpp"
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
