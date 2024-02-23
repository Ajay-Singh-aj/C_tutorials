#include<stdio.h>
//in this we learn about array.
/*it is used to represent multiple data type by using single name
2D array is a matrix array.*/
//the below is example of 2D array.
int main()
{
    int marks[2][4] ={{34,45,67,89}, 
                      {34,67,12,45}};
for (int i = 0; i < 2; i++)
{
    
    for ( int j= 0; j < 4; j++)

    {
printf("the marks of %d ,%d student is %d \n",i,j,marks[i][j]);
}
}
    return 0;
}


