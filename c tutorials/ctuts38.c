#include<stdio.h>
//this is tutorial of typedef ,it is a keyworld  used to give alternative name according to the user .
int main()
{
    //here we change the name of int to integer ,but that does not mean now we cannot use int .we can we use both.
    typedef int integer;
    integer a=4;
    int b=2;
    printf(" the value of a is %d\n",a);
    printf(" the value of b is %d\n",b);
    
    return 0;
}