//this is for structure in c 
//it is user type variables .
//example with synatax.
#include<stdio.h>
struct employee
{
    int id;
    float marks;
};
int main()
{
    struct employee e1;
    e1.id=12;
    e1.marks=34.14;
    //or we can write in one line that is following
    // struct employee e1={12,34.14};
    printf("the id of e1 is %d",e1.id);
    return 0;
}