#include<stdio.h>
//this is func.code without argument and with return value.

int ajay()
{
    int i;
    printf("enter a number.\n");
    scanf("%d",&i);
    return i;


}
int main()
{
    int c;
    c=ajay();
    printf("you have entered. %d",c);
    
    return 0;
}
