#include<stdio.h>
#include<stdlib.h>
//for calloc
int main()
{
    int *ptr;
    int n;
    printf("enter the value of the array you want to create ");
    scanf("%d",&n);
    ptr=(int *)calloc(n , sizeof(int));
    for (int i = 0; i <n; i++)
    {
        printf("enter the value no. of %d array\n ",i);
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
         printf(" the value at no.  %d of array is %d\n ",i,ptr[i]);
    }
    free(ptr);
    
    return 0;
}