/*
take data from user 0 for triangular star pattern and 1 for revesrse triangular star pattern.
*
**
***
****  -> triangular star pattern

****
***
**
*     -> reverse triangular star pattern
*/
#include<stdio.h>
void ajay1(int n)
{
    for (int i = 0; i <n; i++)
    { 
        for (int j = 0; j<=i; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
}
void ajay2(int n){
    for (int i = n; i>0 ; i--)
    {
        for (int j = 0; j <i; j++)
        {
            printf("*");
        }
        printf("\n");
       
    }
    
}
int main()
{
    int num;
    printf("type 0 for triangular star and 1 for reverse\n");
    scanf("%d",&num);
    switch (num)
    {
    case 0:
        printf(" no.the coloumn you want to print\n");
        scanf("%d",&num);
        ajay1(num);
        break;
    
    default:
        break;
    }
    switch (num)
    {
    case 1:
        printf(" no.the coloumn you want to print\n");
        scanf("%d",&num);
        ajay2(num);
        break;
    
    default:
    printf("you have intered a invalid no.");
        break;
    }
    return 0;
}