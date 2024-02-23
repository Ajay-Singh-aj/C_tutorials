#include<stdio.h>
#include<string.h>
/*using typedef we change here struct student{}to std.*/

    typedef struct student{
    int id;
    int marks;
    char fav_char;
    char name[54];
}std;

int main()
{
    std s1,s2,s3;
    s1.id=1;
    s2.id=2;
    s3.id=3;
    s3.marks=54;
    s2.marks=64;
    s1.marks=34;
    s1.fav_char='a';
    s2.fav_char='g';
    s3.fav_char='h';
    printf("s1 got %d marks\n",s1.marks);
    strcpy(s1.name,"his name is ajay.");
    printf("%s",s1.name);
    typedef 
    return 0;
}
