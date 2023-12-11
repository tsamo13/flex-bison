# FLEX-BISON
## A project using a scanner and a parser in which we put an XML file as an input and it shows us if it's syntactically correct. 


### In this project, we implemented a subset of the XML notation used when developing android applications, to implement elements related to the user interface.

>We started with BNF, then moved on to FLEX and finally to BISON.

For bnf, the assumption we made was that comments can be located before the start tag, within the content of an element (if not empty), after the end tag (if present), or even in the self-closing tag. We also consider that a comment cannot appear between the attributes of an item.


In FLEX, we declared the options **%option noyywrap** and **%option yylineno** which respectively say that we are only reading 1 file and that we let FLEX count the line we are on.
We've declared a sub-verbal parser (conditionally firing a rule) to detect comments. More specifically, FLEX is in the INITIAL state and the **COMMENT** state is declared in the definitions section (%x COMMENT). When we see the phrase ***&lt;!--***, we execute the BEGIN(COMMENT) function, so that then the conditional rules (those preceded by < COMMENT >) are active. When we see the phrase ***“-->”***, we exit the sub-verbal parser with the **BEGIN(INITIAL)** function and return to the initial state. If while in the sub-parser we find the phrase “**--**” (which means we found -- inside a comment which is not allowed), yyerror is called which prints an appropriate message and states on which line the error was found.

Also, we've declared a str_buf[] array that takes what's inside the comment (with strcat) and when **BEGIN(INITIAL)** is executed, the comment is printed. When we enter the sub-verbal analyzer the table is "cleaned" (we did this because we want it to appear on the screen exactly as the XML file is).

Additionally, we define the **yyerror** function which prints an appropriate message depending on the err parameter each time.

Finally, every time we reach the end of the file, the **EOF** rule is called (which means there was no syntax error or the program would have terminated already), and then the **Success** message is printed.

The files named "erwtima_error" try to remark some errors based on the questions of the 