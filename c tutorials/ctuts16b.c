#include<stdio.h>
//this is continue statemaent for loops.
//it is mainly use for a condition so that we can skip some line of code for a particular condition.

int main(int argc, char const *argv[])
{
    int i,age;
    for ( i = 0; i < 10; i++)
    {
        printf("%d enter your age.\n ",i);
        scanf("%d",&age);
        if (age>12)
        {
            continue;
        }
        printf("ajay is an engineer.\n");
        printf("ajay is a student.\n");
        printf("ajay is an iitian.\n");

    }
    
    return 0;
}
