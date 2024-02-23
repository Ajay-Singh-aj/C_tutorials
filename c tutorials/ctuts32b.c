#include<stdio.h>
//passing a array into function
int func2(int *ptr){
    for (int i = 0; i < 4; i++)
    {
        printf("the value of array at %d place is %d\n",i,*(ptr+i));//we can also use *(ptr+i) at place of ptr.
    }
    *(ptr+2)=234;
    
}
int main()
{  
    int arr[] = {23,43,76,56};
    
    func2(arr);/*when we call func2 it print firstall the value of arr acordind to main func,and also afterthat
                it change the value of *(ptr+2) and thats why when we call the func2 again the value of ptr+2 
                changed.*/
    func2(arr);
    
    return 0;
}