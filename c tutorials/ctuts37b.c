#include<stdio.h>
#include<string.h>
/*this is for structure of c,it is a type of function in which we can store user type variable
in this we can store int ,char,float etc.*/
struct student{
    int id;
    int marks;
    char fav_char;
    char name[54];
};

int main()
{
    struct student s1,s2,s3;
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
    
    return 0;
}