//this is tutorial for matrix multiplication

#include<stdio.h>
#include<stdlib.h>
int main()
{   
    int m,n,sum=0;
    int a[3][4],b[4][2];
    printf("Enter the matrix A is\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
           printf("The value of matrix A at position %d %d is:",i,j);
           scanf("%d",&a[i][j]);
        }
    }
    
    printf("\nEnter the matrix B is\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value of matrix at position %d %d is:",i,j);
           scanf("%d",&b[i][j]);
        }
    }
    printf("\nThe matrix A is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t",a[i][j]);
           
        }
        printf("\n");
    }
    printf("\nThe matrix B is :\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <2; j++)
        {
            printf("%d\t",b[i][j]);
           
        }
        printf("\n");
    }
    printf("The  matrix C :\n");
    for ( int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int k;
            for (int k = 0; k< 4; k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            printf("%d\t",sum);
            sum=0;
           
        }
        printf("\n");
    }
    

    
    
    return 0;
}
