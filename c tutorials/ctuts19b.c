#include<stdio.h>
//this is a funcyion code with argument and without return value.
//in this we take return value from int main func. not from voidstar.

void printstar( int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c",'*');
    }
    
  

}
int main(int argc, char const *argv[])
{
    //the below printstar is written because we call the func. in int main function,
    printstar(100);
    //printf("hello world ,this is c tutorial .");
    
    return 0;
}
