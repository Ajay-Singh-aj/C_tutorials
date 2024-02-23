#include<stdio.h>
/*STATIC VARIABLE: they preserve their value even they go out of scope.
they do not initialise again ,start with their preserve value.
it initialise only wuth constant variable if variable is not assign it start with 0*/
int func1(int b1){
static int myvar=45;
printf("the value of myvar is %d\n",myvar);
myvar++;
return 0;
}

int main()
{
    int b;
    int val= func1(b);
    //here we are calling func1 but after fisrt call func1 remember the value of b is increase by myvar++
    //hence in second call it will print with adding 1 and the agian increase the value by one store it.
    
    val= func1(b);
    val= func1(b);
    val= func1(b);
    val= func1(b);
    
    
    return 0;
}