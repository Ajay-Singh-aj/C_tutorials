#include<stdio.h>
//pointer store addresses of other variable ,in this exam we store int =a in ptra.
int main()
{
    printf("let's learn about pointer.");
    int a=76;
    int *ptra=&a;
    printf("the address of pointer to a is %d\n",&ptra);
    //at place of p if we write x then we get adress of 6 no.
    printf("the address of a is %p\n",&a);
    printf("the address of a is %p\n",ptra);
    printf("the value of a is %d\n",*ptra);
    printf("the value of a is %d\n",a);
    return 0;
}