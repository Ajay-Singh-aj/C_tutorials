//this is tutorial for terminary operater.
//this is use for escape many line that we will use in if statement.
#include<stdio.h>
int main()
{
    int age;
    printf("enter the age:\n");
    scanf("%d",&age);
    age>=18 ? printf(" adult") : printf("not adult");
//here'?' stand for check the statement and ':' stand for otherwise,no semicolon in middle statement.
    return 0;
}