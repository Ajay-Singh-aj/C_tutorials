#include<stdio.h>
//this is for how to use switch in a switch.

int main()
{
    int age, marks;
    printf("enter your age\n.");    
    scanf("%d",&age);

    //printf("enter your marks\n");
    //scanf("%d",&marks);

    switch (age)
    {
        case 3:
        printf("the age 3 is a child age .Go and play\n");
        //remove column 10 and 11 and remove // of column 18 & 19 and then try to run code.
       // printf("enter your marks\n");
        //scanf("%d",&marks);
        

        switch (marks)
        {
            case 45:
            printf("you have scored good marks.\n");
            
            
            break;

            default:
            printf("better luck next time.");

        }

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