#include<stdio.h>
//this is do while loop , it excute atlist one.

int main()
{
    int num,i=0;
    //we can put any other name at place of i.
    printf("enter the value of num\n");
    scanf("%d",&num);

    do
    {
        printf("%d\n", i+1);
        //if want gap of two we write i=i+1
        //if want gap of one we write i=i
        i=i+1;

    } while (i<num);
    
         
    
    
    return 0;
}
