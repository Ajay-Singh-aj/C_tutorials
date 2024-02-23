#include<stdio.h>
//passing a  two dimension array into function
int func3(int arr[2][2]){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j< 2; j++)
        {
            printf("the value of array at %d,%d place is %d\n",i,j,arr[i][j]);

        }
        
        
    }
    return 0;
}
int main()
{  
    int arr[2][2] = {{23,43},{76,56}};
    
    func3(arr);
    
    return 0;
}

