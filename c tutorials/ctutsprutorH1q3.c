#include <stdio.h>

int main () {
    int side,a,b;
    scanf("%d",&side);
    a=(3*side)%100;b=(4*side)%100;

    //here %02 means we want only two digit of answer of answer is in one digit then it will give 02.
    printf("  /\\\n /%02d\\\n/~~~~\\\n\n",a);
    printf("|~~~~|\n|~%02d~|\n|~~~~|\n",b);
    return 0;

}