#include<stdio.h>
//this is tut. of switch statement.the basic rule for it is following.
//switch expression= int or char.
//case value must be a int or char.
//case must come inside the switch.
//break will apply to break the chain ,if we do not want to break the chain we can remove break.


int main()
{
    int age;
    printf("enter your age\n.");    
    scanf("%d",&age);
    switch (age)
    {
        case 3:
        printf("the age 3 is a child age .Go and play\n");
        break;
        //check the code to remove 'break;'word.

        case 15:
        printf("this is teen age .Take kare of yourself\n.");
        break;

        case 35:
        printf("tc of your family\n.");
        break;

        default:
        printf("enjoy your life.\n");
        break;
        
    }
    
    return 0;
}