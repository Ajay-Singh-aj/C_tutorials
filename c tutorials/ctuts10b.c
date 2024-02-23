#include<stdio.h>
//this is the syntax of if else statement.
int main()
{
    int age;
    printf("enter your age\n");

    scanf("%d", &age);
    printf ("you have entered %d as your age.\n",age);
    if (age>18){
        printf("you can vote.");
    }
    else {
        printf(" so sorry!you are child. you can not vote,try next year. ");
    }
//you can run this programme by putting both ages < or > than 18

    
    return 0;
}