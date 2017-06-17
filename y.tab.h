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
extern YYSTYPE yylval;
