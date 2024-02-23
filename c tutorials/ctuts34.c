#include<stdio.h>
//string is null terminated character array
// this is about concept of array to creating string.
//by string we can take data from user that what we have to print
//for string we need one more space that we need to print
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
    char str[]={'a','j','a','y','\0'};//or we can write bellow line instead of this line 
    //char str[]="ajay";
    /*but we should remember that we should keep the []blank or if we want to fill in this[]we should
    take the no. greater than 4 because str need one space for \0 which end the string.*/
    printstr(str);

    return 0;
}