#include<stdio.h>
//passing a array into function
int func1(int array[]){
    for (int i = 0; i < 4; i++)
    {
        printf("the value of array at %d place is %d\n",i,array[i]);
    }
    array[0]=456;
    
}
int main()
{  
    int arr[] = {23,43,76,56};
    printf("the value of 0th place of the array is %d\n",arr[0]);
    func1(arr);/*after calling the function in main all thing go according to our func1 that why firstly print
    the value of arr[0] which is from main ,but after calling the func1 it takes the add. of array.*/

    printf("the value of 0th place of the array is %d\n",arr[0]);
    
    return 0;
}