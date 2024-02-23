#include<stdio.h>
#include<string.h>

//this is an exercise to reverse the array we have to make a function.
void arrayrev(int arr[])
{
    // we are swapping the array.
    int temp;
    for (int i = 0; i < 4; i++)
    {
        temp=arr[i];
        arr[i]=arr[6-i];
        arr[6-i]=temp;

    }
    
}

int main()
{
    int arr[] = {11,24,37,74,59,67,74,};
    printf("before reversing:\n");
   for (int i = 0; i < 7; i++)
   {
    
    printf("the value of %d of the array is %d\n",i,arr[i]);
   }
   arrayrev(arr);
   printf("\n after reversing:\n");
   for (int i = 0; i < 7; i++)
   {
    
    printf("the reverse value of %d of the array is %d\n",i,arr[i]);
   }

    return 0;
}