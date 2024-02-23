// this is exercise for pelindrome no.

#include <stdio.h>
#include <stdlib.h>
int pelindrome(int num)
{
    int reverse = 0;
    /*int originalnum=num;here we preserve intial value of num by originalnum
    if we make above function comment out then we need not to make another function telltruth
    */
    while (num != 0)
    {
        reverse = reverse * 10 + num % 10;
        num = num / 10;
    }
    return reverse;
}
//if we donot wanted to make telltruth function we can also preserve the value of num.
int telltruth(int n)
{
    if (n == pelindrome(n))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    printf("Enter number:\n");
    scanf("%d", &n);
    pelindrome(n);
    printf("the reverse no. is %d\n", pelindrome(n));
    telltruth(n);
    if (telltruth(n) == 1)
    {
        printf("the no. is a pelindrome.");
    }
    else
    {
        printf("the no. is not a pelindrome.");
    }

    return 0;
}