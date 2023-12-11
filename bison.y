%{
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
%}
%define parse.error verbose

%union{
    int intval;
    char *strval;
    char charval;
 };


%token LESS_THAN
%token GREATER_THAN 
%token COLON 
%token SLASH
%token ASSIGN 


%token <intval> INT 
%token <strval> STRING 

%token LINEAR_LAYOUT 
%token RELATIVE_LAYOUT 
%token TEXT_VIEW 
%token IMAGE_VIEW 
%token BUTTON
%token RADIO_BUTTON
%token RADIO_GROUP 
%token PROGRESS_BAR 
%token ANDROID 
%token LAYOUT_WIDTH 
%token LAYOUT_HEIGHT 
%token ORIENTATION 
%token ID 
%token TEXT 
%token SRC 
%token PADDING 
%token MAX 
%token PROGRESS 
%token TEXT_COLOR 
%token CHECKED_BUTTON 
%token AMOUNT


%%

//GRAMMAR RULES
    
xml : linear_layout | relative_layout;


child_plus: child | child_plus child;
child: text_view | image_view | button | radio_group | progress_bar | linear_layout  | relative_layout | STRING ; 
radio_button_plus: radio_button | radio_button_plus radio_button ;


str_or_int:   STRING {printf("%s",yylval.strval); if(strcmp(yylval.strval,"\"wrap_content\"")!=0 && strcmp(yylval.strval,"\"match_parent\"")!=0) 
                                                  yyerror("In layout_width and layout_height only match_parent and wrap_content attributes are available strings.\n"); } 
            | INT {printf("\"%d\"",yylval.intval); if(yylval.intval<=0) 
                                                   yyerror("In layout_width and layout_height a strictly positive number is required.\n");} ;

       
linear_layout: LESS_THAN LINEAR_LAYOUT {printf("<LinearLayout"); } linear_attributes  GREATER_THAN {printf(">");  
                                                                                                   if(!has_layout_height || !has_layout_width) 
                                                                                                       yyerror("layout_width and layout_height are required attributes.\n"); 

                                                                                                   has_layout_width=false; has_layout_height=false; }
               child_plus LESS_THAN SLASH LINEAR_LAYOUT GREATER_THAN {printf("</LinearLayout>"); }
  
linear_attributes: linear_attribute | linear_attribute linear_attributes;

linear_attribute: ANDROID COLON {printf("android:");} linear_attribute_name ; 

linear_attribute_name:   LAYOUT_WIDTH {has_layout_width=true;} ASSIGN   {printf("layout_width=");  } str_or_int 
                       | LAYOUT_HEIGHT {has_layout_height=true;} ASSIGN {printf("layout_height=");} str_or_int
                       | ORIENTATION ASSIGN STRING {printf("orientation="); printf("%s",yylval.strval);}
                       | ID ASSIGN STRING {printf("id="); printf("%s",yylval.strval); id_unique(yytext);} ;


relative_layout: LESS_THAN RELATIVE_LAYOUT {printf("<RelativeLayout");} relative_attributes GREATER_THAN {printf(">");
                                                                                                         if(!has_layout_height || !has_layout_width) 
                                                                                                             yyerror("layout_width and layout_height are required attributes.\n");

                                                                                                         has_layout_height=false; has_layout_width=false;  }
                 child_plus LESS_THAN SLASH RELATIVE_LAYOUT GREATER_THAN {printf("</RelativeLayout>");};

relative_attributes: relative_attribute | relative_attribute relative_attributes;

relative_attribute: ANDROID COLON {printf("android:");} relative_attribute_name ;

relative_attribute_name:  LAYOUT_WIDTH {has_layout_width=true;} ASSIGN  {printf("Layout_width=");} str_or_int
                        | LAYOUT_HEIGHT {has_layout_height=true;} ASSIGN {printf("Layout_height=");} str_or_int
                        | ID ASSIGN STRING {printf("id="); printf("%s",yylval.strval); id_unique(yytext);}  ;


text_view: LESS_THAN TEXT_VIEW {printf("<TextView");} text_attributes SLASH GREATER_THAN {printf("/>");
                                                                                         if(!has_layout_height || !has_layout_width || !has_android_text)  
                                                                                             yyerror("layout_width, layout_height and text are required attributes.");

                                                                                         has_layout_height=false; has_layout_width=false ; has_android_text=false; }
           

text_attributes: text_attribute | text_attribute text_attributes;

text_attribute: ANDROID COLON {printf("android:");} text_attribute_name

text_attribute_name:  LAYOUT_WIDTH {has_layout_width=true;} ASSIGN  {printf("layout_width=");} str_or_int
                    | LAYOUT_HEIGHT {has_layout_height=true;} ASSIGN {printf("layout_height=");} str_or_int
                    | TEXT {has_android_text=true;} ASSIGN STRING {printf("text="); printf("%s",yylval.strval);}
                    | ID  ASSIGN STRING  {printf("id="); printf("%s",yylval.strval); id_unique(yytext);}
                    | TEXT_COLOR ASSIGN STRING  {printf("textColor="); printf("%s",yylval.strval);};


image_view: LESS_THAN IMAGE_VIEW {printf("<ImageView");} image_view_attributes SLASH GREATER_THAN {printf("/>");
                                                                                                  if(!has_layout_height || !has_layout_width || !has_android_src) 
                                                                                                      yyerror("layout_width, layout_height and src are required attributes.\n"); 

                                                                                                  has_layout_height=false; has_layout_width=false; has_android_src=false; } ;

image_view_attributes: image_view_attribute | image_view_attribute image_view_attributes;

image_view_attribute: ANDROID COLON {printf("android:");} image_view_attribute_name

image_view_attribute_name: LAYOUT_WIDTH {has_layout_width=true;} ASSIGN {printf("layout_width=");} str_or_int
                        | LAYOUT_HEIGHT {has_layout_height=true;} ASSIGN {printf("layout_height=");} str_or_int
                        | SRC {has_android_src=true;} ASSIGN STRING {printf("src="); printf("%s",yylval.strval);}
                        | ID ASSIGN STRING {printf("id="); printf("%s",yylval.strval); id_unique(yytext);}
                        | PADDING ASSIGN INT {printf("padding="); printf("\"%d\"",yylval.intval);   if(yylval.intval<=0) 
                                                                                                    yyerror("Padding attribute must be a strictly positive number.\n"); };
 
button:  LESS_THAN BUTTON {printf("<Button");} button_attributes SLASH GREATER_THAN {printf("/>");
                                                                                    if((!has_layout_height || !has_layout_width) || !has_android_text)
                                                                                        yyerror("layout_width, layout_height  and text are required attributes.\n");

                                                                                    has_layout_width=false; has_layout_height=false; has_android_text=false; } ;

button_attributes: button_attribute | button_attribute button_attributes;

button_attribute: ANDROID COLON {printf("android:");} button_attribute_name ;

button_attribute_name: LAYOUT_WIDTH {has_layout_width=true;} ASSIGN {printf("layout_width=");} str_or_int
                    | LAYOUT_HEIGHT {has_layout_height=true;} ASSIGN {printf("layout_height=");} str_or_int
                    | TEXT {has_android_text=true;} ASSIGN STRING {printf("text="); printf("%s",yylval.strval);}
                    | ID  ASSIGN STRING {printf("id="); printf("%s",yylval.strval); id_unique(yytext);}
                    | PADDING ASSIGN INT {printf("padding="); printf("\"%d\"",yylval.intval);     if(yylval.intval<=0) 
                                                                                                   yyerror("In padding, a strictly positive number is required.\n");} ;



radio_group:  LESS_THAN RADIO_GROUP {printf("<RadioGroup"); checkedButton_equal=0;} radio_group_attributes  GREATER_THAN {printf(">");  
                                                                                      if(!has_layout_height || !has_layout_width || !has_android_amount) 
                                                                                          yyerror("layout_width, layout_height and amount are required attributes.\n"); 

                                                                                      has_layout_width=false; has_layout_height=false; } 
              radio_button_plus LESS_THAN SLASH RADIO_GROUP GREATER_THAN {printf("</RadioGroup>"); 
                                                                                 if(existed_id_value==false && strcmp(checkedButton_id[0],"\0")!=0  && strcmp(checkedButton_id[1],"\0")!=0) 
                                                                                     yyerror("The checkedButton attribute is not similar with any id from RadioButton\n");

                                                                                 memset(checkedButton_id,'\0',sizeof(checkedButton_id)); existed_id_value=false; amount_checked=1;  //all array elements are set to zero
                                                                                 
                                                                                 if(checkedButton_amount!=checkedButton_equal)
                                                                                     yyerror("The amount of RadioButton is not equal to the amount attribute of RadioGroup.\n");};  
                                                                           

radio_group_attributes: radio_group_attribute | radio_group_attribute radio_group_attributes;

radio_group_attribute: ANDROID COLON {printf("android:");} radio_group_attribute_name;

radio_group_attribute_name:   LAYOUT_WIDTH {has_layout_width=true;} ASSIGN {printf("layout_width=");} str_or_int
                            | LAYOUT_HEIGHT {has_layout_height=true;} ASSIGN {printf("layout_height=");} str_or_int
                            | ID ASSIGN STRING {printf("id="); printf("%s",yylval.strval); id_unique(yytext);} 
                            | CHECKED_BUTTON ASSIGN STRING {printf("checkedButton="); printf("%s",yylval.strval);  checkedButton_existed(yytext); }
                            | AMOUNT {has_android_amount=true;} ASSIGN INT {printf("amount="); printf("\"%d\"",yylval.intval);   if(yylval.intval<0) 
                                                                                                                                     yyerror("Amount attribute must be a positive integer.\n"); 
                                                                                                                               
                                                                                                                                 amount_equal(yylval.intval); } ;


radio_button: LESS_THAN RADIO_BUTTON {printf("<RadioButton"); checkedButton_equal++;} radio_button_attributes SLASH GREATER_THAN {printf("/>");
                                                                                        if((!has_layout_height || !has_layout_width) || !has_android_text) 
                                                                                            yyerror("layout_width, layout_height and text are required attributes.\n");
                                                                                        
                                                                                        has_layout_width=false; has_layout_height=false; has_android_text=false;} 

radio_button_attributes: radio_button_attribute | radio_button_attribute radio_button_attributes

radio_button_attribute: ANDROID COLON {printf("android:");} radio_button_attribute_name ;

radio_button_attribute_name:  LAYOUT_WIDTH {has_layout_width=true;} ASSIGN {printf("layout_width=");} str_or_int
                            | LAYOUT_HEIGHT {has_layout_height=true;} ASSIGN {printf("layout_height=");} str_or_int
                            | TEXT {has_android_text=true;} ASSIGN STRING {printf("text="); printf("%s",yylval.strval);}
                            | ID ASSIGN STRING {printf("id="); printf("%s",yylval.strval); id_unique(yytext); id_checkedButton(yytext); } ;


progress_bar: LESS_THAN PROGRESS_BAR {printf("<ProgressBar");} progress_bar_attributes SLASH GREATER_THAN {printf("/>");
                                                                                                          if(!has_layout_height || !has_layout_width) 
                                                                                                              yyerror("layout_width and layout_height are required attributes.\n");

                                                                                                          has_layout_width=false; has_layout_height=false;has_android_text=false; 

                                                                                                          if(max_existed==true && progress_existed==true)
                                                                                                          {
                                                                                                            if(max_progress[0]<max_progress[1]) 
                                                                                                            yyerror("The progress  attribute must be less or equal with max attribute.\n");
                                                                                                          } 
                                                                                                        };

progress_bar_attributes: progress_bar_attribute | progress_bar_attribute progress_bar_attributes

progress_bar_attribute: ANDROID COLON {printf("android:");} progress_bar_attribute_name

progress_bar_attribute_name:  LAYOUT_WIDTH {has_layout_width=true;} ASSIGN  {printf("layout_width=");} str_or_int
                            | LAYOUT_HEIGHT {has_layout_height=true;} ASSIGN {printf("layout_height=");} str_or_int;
                            | ID ASSIGN STRING {printf("id="); printf("%s",yylval.strval); id_unique(yytext);}
                            | MAX ASSIGN INT {printf("max"); printf("\"%d\"",yylval.intval);
                                                             max_progress[0]=yylval.intval; max_existed=true; }
                            | PROGRESS ASSIGN INT {printf("progress="); printf("\"%d\"",yylval.intval); 
                                                  if(yylval.intval<0) 
                                                      yyerror("Progress attribute must be a positive integer\n");

                                                  max_progress[1]=yylval.intval; progress_existed=true; }  ;


%%     


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
