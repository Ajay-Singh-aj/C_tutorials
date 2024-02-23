#include<stdio.h>
//this tutorial for use break statement in do while or for loop,
//we have already learn about break statement in swich.

int main(int argc, char const *argv[])
{
    int i,age;
    for ( i = 0; i < 9; i++)
    {
        printf("%d enter your age\n",i);
        scanf("%d",&age);
        if(age>10){
            break;
        }
    }
    
    return 0;
}
