//this is tutorial to find upper case or lower case.
#include<stdio.h>
int main()
{
    char ch;
    printf("enter character :\n");
    scanf("%c",&ch);
    //compiler have fixed integer value about latter so we can write it
    //ch>='A' & ch>=65  ,both are same.
    if (ch>='A' & ch<='Z'){
        printf("upper case");
    }
    else if(ch>='a' & ch<='z'){
        printf("lower case");
    }
    else{
        printf("invalid charcter");
    }
    return 0;
}