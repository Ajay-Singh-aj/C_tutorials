#include<stdio.h>
//this is use of 'goto end'
int main(int argc, char const *argv[])
{
    label:
    printf("we are inside label.\n");
    goto end;
    printf("hello world");
    goto label;
    end:
    printf("we are at end.");
//by this we can jump the code of column 8 i.e. hellow world and direct go to the end .

    return 0;
}
