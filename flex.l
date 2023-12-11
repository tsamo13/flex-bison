%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "bison.tab.h"
    

    void yyerror(const char* err);
    char str_buf[200];

%}

%option noyywrap
%option yylineno
%x COMMENT


integer       [-+]?([0-9])+
string        (\\.|[^\"])*                   

%%

"\n"          {printf("\n");}
"\t"          {printf("\t");}
" "           {printf(" ");}

"<"                 {return LESS_THAN;}
">"                 {return GREATER_THAN;}
":"                 {return COLON;}
"/"                 {return SLASH;}
"="                 {return ASSIGN;}   
"\""

"LinearLayout"      {return LINEAR_LAYOUT;}
"RelativeLayout"    {return RELATIVE_LAYOUT;}
"TextView"          {return TEXT_VIEW;}
"ImageView"         {return IMAGE_VIEW;}
"Button"            {return BUTTON;}
"RadioButton"       {return RADIO_BUTTON;}
"RadioGroup"        {return RADIO_GROUP;} 
"ProgressBar"       {return PROGRESS_BAR;}

"android"           {return ANDROID;}
"layout_width"      {return LAYOUT_WIDTH;}
"layout_height"     {return LAYOUT_HEIGHT;}
"orientation"       {return ORIENTATION;}
"id"                {return ID;}
"text"              {return TEXT;}
"src"               {return SRC;}
"padding"           {return PADDING;}
"max"               {return MAX;}
"progress"          {return PROGRESS;}
"textColor"         {return TEXT_COLOR;}
"checkedButton"     {return CHECKED_BUTTON;}
"amount"            {return AMOUNT;}

\"{integer}\"       {sscanf(yytext, "\"%d\"", &(yylval.intval)); return INT;}
\"{string}\"        {  yylval.strval=strdup(yytext); return STRING;}


"<!--"              {printf("Comment found in line %d.\n",yylineno); strcpy(str_buf,""); BEGIN(COMMENT);}
<COMMENT>"-->"      {BEGIN(INITIAL); printf("%s\n",str_buf); }
<COMMENT>"--"       {yyerror("Comment has -- without >");}
<COMMENT>.          {strcat(str_buf,yytext);}


<<EOF>>             { printf("\n\n\t\tSuccess.\n");return 0;}

%%


void yyerror(const char* err)
{
    fprintf(stderr,"[ERROR - LINE %d] %s\n",yylineno, err);
    exit(EXIT_FAILURE);
}