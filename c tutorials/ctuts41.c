#include<stdio.h>
//this is an exersise on parser.
//void parser
//the solution is in ctuts43.c
int main()
{
    char string[]="<h1> this is the heading <h1>";
    parser(string);
    
    return 0;
}
/*
input:
<h1> this is the heading <h1>

output:
this is the heading 

input:
<span> this is heading2 <span>

output:
this is heading2
*/