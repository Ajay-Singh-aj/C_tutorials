#include<stdio.h>
//there is three methode to print string
void printstr(char str[]){
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;

    }
}
int main()
{
    char str[34];
    gets(str);
    // the first methode is using call of printstr function that is following.
    //for this methode we need to define function
    printf("by using printstr:\n");
    printstr(str);
    printf("\n");
    //the second methode is using printf that is following.
    //for this methode we need not to define above printstr func.
    printf(" by using printf : %s\n",str);
    //the third is by using puts
    //for this methode also we need not to define above printstr func. 
    printf("by using puts method:");
    puts(str);
    return 0;
}