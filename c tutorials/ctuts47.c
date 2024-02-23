/*this is tutorial for dyanamic memori allocation :

In dynamic memory allocation the memory is allocted at runtime from heap.
we have four function thhat help us to achieve this task
1. malloc
2.calloc
3.realloc
4.free*/

/*MALLOC:
it stand for memory allocation
it reseve a block of memory with the given amount of bytes
return value is void pointer to allocated space.
all the value at allocated memory are initialised with garbage value.
SYNTAX IS:
ptr=(ptr-type*) malloc(size_in_bytes);
*/
/*CALLOC:
It stand for contigious memory allocation.
the return value is avoid pointer to allocated space.
it reserve n blocks of memory with given amount of bytes.
all value at allocated memory are initilised to 0.
SYNTAX:
ptr=(ptr-type*)calloc(n, size_in_bytes);
*/

/*
REALLOC
re allocation.
if dynamically allocated memory is insufficient we can change the size of previously allocated memory by relloc
SYNTAX:
ptr=(ptr-type*)realloc(ptr, new size_in_bytes);
*/
/*FREE:
used to free all allocated memory that is store in heap .
SYNTAX:
free(ptr);
*/
//use of malloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("enter the value of the array you want to create ");
    scanf("%d",&n);
    ptr=(int *)malloc(n * sizeof(int));
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