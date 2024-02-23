#include<stdio.h>
//this is tutorial for recursive function.
//examples of that is : tower of hanoi,fibonacci series,factorial findig etc.
//the case which does not occur is called base func. of rec. func.
//for factorial calc. base case is 0and 1.

    int factorial(int number)
{   
    
    if (number ==0|| number == 1)
    {
        return 1;
    }
    else
    {
        return (number * factorial (number-1));

    }
    
}
int main()
{
    int num;
    label:
    printf(" enter the no. that factorial you want:\n");
    scanf("%d",&num);
    printf(" the factorial of %d is %d",num,factorial(num));
    goto label;
    return 0;
}
