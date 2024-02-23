//this is tutorial about null pointer.
#include<stdio.h>
int main()
{
    int a=34;
    int*ptr=NULL;
    if (ptr!=NULL)
    {
        printf("the value of a is %d\n",*ptr);
    }
    else
    {
          printf("this is null pointer and cannot dereference");
    }
    
    
    return 0;
}