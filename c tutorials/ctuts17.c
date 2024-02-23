#include<stdio.h>
//this is tut. for go to statement,
//go to statement is preferable whenwe need to break multiple loop by single statement.

int main(int argc, char const *argv[])
{
    //this is an infinite loop,because we  command go to label again after print .  
    label:
    printf("we are doing a good job.");
    goto label;
    return 0;
}
