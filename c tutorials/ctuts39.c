//union is a user defined data type(very similar to structure).
/*the diff. between structure and union is that storage takes space for each member while union takes space
of only one member at a time.and share this space for other member.*/
//the single shared memory location is equal to its biggest size og its largest data member.
//union cannot handle all member at once.
#include<stdio.h>
#include<string.h>
 union student{
    int id;
    int marks;
    char fav_char;
    char name[54];
 };

int main()
{
    union student s1;
    //jo sabse niche hoga union use hi shi print karega baaki galat.
    s1.id=1;
    s1.fav_char='a';
    strcpy(s1.name,"ajay");
    s1.marks=45;

    printf("the id of s1 is %d\n",s1.id);
    printf("the name of student s1 is %s\n",s1.name);
    printf("the fav. char of s1 is %c\n",s1.fav_char);
    printf("the marks of s1 student is %d\n",s1.marks);
    
    return 0;
}