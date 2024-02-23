#include<stdio.h>
int main()
{
    int arr[]={ 311,52,4,65,5};
    //following are two methods to find add. of an array.
    printf("the address of first element of the array is %d\n.",&arr[0]);
    printf("the address of first element of the array is %d\n.",arr);
    printf("the address of first element of the array is %d\n.",&arr[1]);
    printf("the address of first element of the array is %d\n.",arr+1);


//following are the three methods to find the value of array
    printf("the value of add of first element of the array is %d\n.",*(&arr[0]));
    printf("the value of add of first element of the array is %d\n.",arr[0]);
    printf("the value of add of first element of the array is %d\n.",*(arr));
    printf("the value of add of first element of the array is %d\n.",*(&arr[1]));
    printf("the value of add of first element of the array is %d\n.",arr[1]);
    printf("the value of add of first element of the array is %d\n.",*(arr+1));
    return 0;
    //arr is constant quantity so we cant do arr++ or arr--
    //we can add with pointer only ex.- if we represent int*arrptr,then we can write arrptr++ which give add. 
}