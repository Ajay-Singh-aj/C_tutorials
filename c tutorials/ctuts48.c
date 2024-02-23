/*this is an exercise on dynamic memory allocation.
ABC pvt lim. manages employe records of other c0mpanies.
employee id can be any lenght and any character.
for 3 employee you have to take 'lenght of employee id ' as input in an integer variable.
then you have to employee id as an input and display on screen .
store employee id in a character array which is allocated dyanamically
you have to create only one character array dynamically.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i=0;
    char*ptr;
    while (i<3)
    {
        printf("enter the no. of character you want in your %d no. employee id:\n",i+1);
        scanf("%d",&n);
        ptr=(char*)malloc((n+1)*sizeof(char));
        printf("enter the employe no %d id :\n",i+1);
        scanf("%s",ptr);
        printf("the employe no. %d id is %s.\n",i+1,ptr);
        printf("\n");
        free(ptr);
        i++;
    }
    
    return 0;
}