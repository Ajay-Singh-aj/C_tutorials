#include<stdio.h>
/*
this is a problem which i have to solve,the problem is
print multiplicationtable of a number by the user in pretty form

example:
input 
enter the no you want multiplication table of:
6

output
table of 6:
6 *1=6
6 *2=12
6 *3=18
6 *4=24
6 *5=30
6 *6=36
6 *7=42
6 *8=48
6 *9=54
6 *10=60

*/
int main()
{
    int num;
    printf("enter the value that you want multiplication of\n");
    scanf("%d",&num);
    printf("multi. table of %d is follow\n",num);
    printf("%d * 1 = %d\n",num,num*1);
    printf("%d * 2 = %d\n",num,num*2);
    printf("%d * 3 = %d\n",num,num*3);
    printf("%d * 4 = %d\n",num,num*4);
    printf("%d * 5 = %d\n",num,num*5);
    printf("%d * 6 = %d\n",num,num*6);
    printf("%d * 7 = %d\n",num,num*7);
    printf("%d * 8 = %d\n",num,num*8);
    printf("%d * 9 = %d\n",num,num*9);
    printf("%d * 10 = %d\n",num,num*10);
    return 0;
}


