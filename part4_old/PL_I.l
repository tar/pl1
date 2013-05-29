%{
#include <stdio.h>
#include <string.h>
#define YYSTYPE char *
#include "./PL_I.tab.h"
extern YYSTYPE yylval;
%}
%option yylineno
%%
":"                  {
//                       printf("\n***lex: term=%s;\n", yytext);
                       return ':';
                     }
"("                  {
//                       printf("\n***lex: term=%s;\n", yytext);
                       return '(';
                     }
")"                  {
//                       printf("\n***lex: term=%s;\n", yytext);
                       return ')';
                     }
";"                  {
//                       printf("\n***lex: term=%s;\n", yytext);
                       return ';';
                     }

"="                  {
//                       printf("\n***lex: term=%s;\n", yytext);
                       return '=';
                     }

[+-]                 {
//                       printf("\n***lex: term=%s;\n", yytext);
                       yylval=strdup(yytext); return ZNK;
                     }
                     
"!!"                 {
//                       printf("\n***lex: term=%s;\n", yytext);
                       yylval=strdup(yytext); return CONCAT;
                     }

"'"[0-9]*"'B"       {
//                       printf("\n***lex: term=%s;\n", yytext);
                       int ind = 0;
                       int i = 0;
                       char str[255];
                       for (; i < strlen(yytext); i++) {
                        if ((yytext[i] != '\'') && (yytext[i] != 'B')) {
                            str[ind++] = yytext[i];
                        }
                       }
                       str[ind] = 0x00;
                       yylval=strdup(str);
                       return VAL;
                    }

[a-zA-Z][a-zA-Z0-9]* {
//                       printf("\n***lex: term=%s;\n", yytext);
                       if (!memcmp(yytext,"proc", 4)) return PROC;
                       if (!memcmp(yytext,"options", 7)) return OPTIONS;
                       if (!memcmp(yytext,"main", 4)) return MAIN;
                       if (!memcmp(yytext,"end", 3)) return END;
                       if (!memcmp(yytext,"dcl", 3)) return DCL;
                       if (!memcmp(yytext,"bin", 3)) return BIN;
                       if (!memcmp(yytext,"bit", 3)) return BIT;
                       if (!memcmp(yytext,"fixed", 5)) return FIXED;
                       if (!memcmp(yytext,"init", 4)) return INIT;
                       if (!memcmp(yytext,"substr", 6)) return SUBSTR;
                       yylval=strdup(yytext); return IDENT;
                     }
[0-9][0-9]*          {
//                       printf("\n***lex: term=%s;\n", yytext);
                       yylval=strdup(yytext); return NUM;
                     }
[ \t\n]+             {
//                      printf("\n***lex: token is WightSpace\n");
                     }
%%
