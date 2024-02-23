#include<stdio.h>
//in this we learn about array.
/*it is used to represent multiple data type by using single name
2D array is a matrix array.*/
//the below is example of 1D array.
//we can put the marks beside int marks this reduce our one for loop
int main()
{
    int marks[4]={ 42,76,98,64};


for ( int i = 0; i < 4; i++)
{
printf("the marks of %d student is %d \n",i,marks[i]);
}
    return 0;
}


