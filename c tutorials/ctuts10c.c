#include<stdio.h>
//this is the syntax of if else if ladder statement.
int main()
{
    int age;
    printf("enter your age\n");

    scanf("%d", &age);
    printf ("you have entered %d as your age.\n",age);
    if (age>18){
        printf("you can vote.");
    }
    else if (age>10){
        printf("you are a teenager ,wait few years for vote.");
    }
    else if (age>=3){
        printf("this is time to play.");
    }

    else {
        printf(" so sorry!you are child. you can not vote. ");
    }
//you can run this programme by putting both ages < or > than 18 and also a num between 10-18.
//we can also create the ladder by adding else if and condition.

    
    return 0;
}