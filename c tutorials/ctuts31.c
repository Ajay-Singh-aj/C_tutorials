/* CALL OF A FUNCTION TWO TYPES
1. CALL BY VALUE:- it means we are passing the value of the argument which are copied into the formal parameter
of the function. the original value remain unchanged.

2. CALL BY REFRENCE:- in which copied the add. of argument ,and hence we can change value of actual parameter
the following is example of call by references parameter we generally use pointer in this type.*/
#include<stdio.h>


    /*function is for swap the value of a and b*/
    void swap( int* x,int* y){
    int temp;
    temp=*x;
    //save the value of add x
    *x=*y; //put y into x
    *y=temp;
    return;
    }
  
  int main()
  {
    int a=34,b=74;
    printf("%d and %d\n",a,b);
    swap(&a,&b);
    printf("%d and %d\n",a,b);
    
  
    return 0;
} 
//this is also another example of code by reference.
/*#include<stdio.h>

void changevalue(int*a){
    *a=354;
}
int main()
{
    int a=34;
    printf("the value of is a is %d\n",a);
    changevalue(&a);
    printf("the value of a now is %d\n",a);

    return 0;
}*/