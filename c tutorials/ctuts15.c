#include<stdio.h>
//this is for loop. 
//there is three expresion in for loop, syntax of for loop is following
//for (size_t i = 0; i < count; i++)
//{
    /* code */
//}
//the exp 1 in for loop say what size we want of i,it give initial part for looping and after taking the value of exp 1 is not used again.
//the exp 2 is important and use for condition that end the loop.
//exp 3 is say the operation we want.
//exp 1and 3 are optional because we can put exp 1 in int part also, and exp 3 injust down line of code part of for loop
//we can use two variable also.
int main()
{
    int i;
    for ( i = 0; i <9; i++)
    {
        printf("%d\n",i);
    }
    
    
    return 0;
}

