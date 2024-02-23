#include<stdio.h>
// the is a multiplication table code by loops.
int main(int argc, char const *argv[])
{
    int num,i;
    printf("the multi. of value entered");
    scanf("%d",&num);
    for ( i = 1; i < 11; i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }
    
    
    return 0;
}
