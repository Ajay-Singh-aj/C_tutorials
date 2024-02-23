#include<stdio.h>
#include<stdlib.h>
/*this is very usefull concept which tells us enter key is valid statement for scanf function.
in this if we remove getchar() it will not print the value of a, because as we scan character and press enter
scanf automatically takes the value enter for a 
to avoid this we use getchar() which absorb the value of enter.*/
int main()
{
    int n,i=0;
    char a,b;
    char*ptr;
    while (i<3)
    {
        printf("enter the no. of character you want in your %d no. employee id:\n",i+1);
        scanf("%d",&n);
        getchar();
        printf("enter the vaue of a:\n");
        scanf("%c",&a);
        getchar();
        printf("enter the vaue of b:\n");
        scanf("%c",&b);
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