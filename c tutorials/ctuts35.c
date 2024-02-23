//this is tutorial oflibrary <string.h>
//as stdio contain printf,scanf,gets etc.
//string also contain some function this are following,
//1. strcat() -  this function is used to combine string.
//2. strlen() -  this function is used to show lenght of string,in this null character will not count.
//3. strrev() -  this function is used to revesre the string.
//4. strcpy() -  this function is used to copy one string to another
//5. strcmp() -  this function is used to show ASCII difference.
// lets start the code.

//1.
/*#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]= "harry";
    char s2[]="ajay";
    puts(strcat(s1,s2));
    return 0;
}*/

//2.
/*#include<stdio.h>
#include<string.h>
int main()
{
     char s1[]= "harry";
    char s2[]="ajay";
    printf("the lenght of s1 string is %d\n",strlen(s1));
    printf("the lenght of s2 string is %d\n",strlen(s2));
    return 0;
}*/

//3.
/*#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]= "harry";
    char s2[]="ajay";
    puts(strrev(s1));
    puts(strrev(s2));

    return 0;
}*/

//4.
/*#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]= "harry";
    char s2[]="ajay";
    char s3[56];
    strcpy(s3,strcat(s1,s2));
    puts(s3);
    return 0;
}*/

//5.
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]= "harry";
    char s2[]="ajay";
    //in c strcmp return 0 ,1,-1 according to first letter difference.
    printf("the strcmp of s1 and s2 is %d",strcmp(s1,s2));
    return 0;
}
