/* this is tutorial of void pointer 
1. it is not possible to dereference void pointer .
2. pointer arimatic is not allowed in void pointer.
*/
#include<stdio.h>
int main()
{
    int a=45;
    float b=8.6;
    void*ptr;
    //here  in void pointer we can add int also and float also.
    ptr=&b;
    //here we can not dereference void pointer directly to take value of float we use *(float*)ptr)
    //at the place of *ptr similarly with int a.
    printf("the value of b is %f\n",( *(float*)ptr) );
    ptr=&a;
    printf("the value of a is %d\n",( *(int*)ptr) );


    return 0;
}