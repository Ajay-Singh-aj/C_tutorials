#include<stdio.h>
//this is the syntax of if statement
int main()
{
    int age;
    printf("enter your age\n");

    scanf("%d", &age);
    printf ("you have entered %d as your age.\n",age);
    if (age>18){
        printf("you can vote.");
    }
//you can run this programme by putting value < or > than 18. and see what happens.

    
    return 0;
}