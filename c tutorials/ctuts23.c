#include<stdio.h>
//in this we learn about array.
/*it is used to represent multiple data type by using single name
2D array is a matrix array.*/
//the below is example of 1D array.
int main()
{
    int marks[4],i;
for (int i = 0; i < 4; i++)
{
    printf("enter the value of %d element of the array.\n",i);
    scanf("%d",&marks[i]);
}
for ( i = 0; i < 4; i++)
{
printf("the marks of %d student is %d \n",i,marks[i]);
}
    return 0;
}


