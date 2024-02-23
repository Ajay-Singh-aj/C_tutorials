//THIS IS TUT. FOR FILE I/O IN C

/*this is for opening a file in current program and read,write,or add something to file by the help of program
fisrtly we open a file by following syntax:
ptr=fopen("filename","mode")
here mode for writing is 'w',
here mode for reading is 'r'
here mode for adding is 'a'
but in writing mode we loose all content of the file .but in adding mode we can add in the content of file.

READING A FILE: in this we use fscanf function.
WRITING A FILE: we use fprintf func.

there is need for close file by syntax
fclose(fptr);

*/
#include<stdio.h>
int main()
{
    //*****for reading this file*****
    //FILE *ptr=NULL;
    //char string[34];
    //ptr=fopen("ctuts64.txt","r");
    //fscanf(ptr,"%s",string);//this is the syntax for fscanf
    //printf("the content of this file is %s\n",string);

    //******for adding*******
    FILE *ptr=NULL;
    char string[84]="this is created by ctuts.c program";
    ptr = fopen("ctuts64.txt","a");
    fprintf(ptr,"%s",string);//this is the syntax for fscanf
    printf("the content of this file is %s\n",string);
    fclose(sptr);
    return 0;
}