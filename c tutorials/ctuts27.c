#include<stdio.h>
//this tells us about arthematics of pointer.
//if we add ,sub. from ptra it will add, sub. space taken by int=a respectively.

int main()
{
    int a=3;
    int *ptra=&a;
    printf("%d\n",ptra);
    printf("%d\n",ptra+1);
    printf("%d\n",ptra+2);
    printf("%d\n",ptra-2);
    // same we can done with char.
    //we can also use %p or %x at the place of %d.
    return 0;
}