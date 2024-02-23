
/*you manage a travel agency and you want your drivers to input following details;
1. name
2. driving licence no.
3.route
4.kms

your programe will be able to take n=3 input and your driver will start putting their detail one by one
your prog. should be print detail by using structure. */

#include<stdio.h>
#include<string.h>
struct driver
{
    char name[54];
    int dl;
    char route[54];
    int kms;
};

int main()
{
    /*this is my methode which is only for one data
    struct driver d1,d2,d3;
    d1.dl=2356;
    d2.dl=2354;
    d3.dl=2357;
    strcpy(d1.route,"delhi");
    strcpy(d2.route,"kanpur");
    strcpy(d3.route,"patna");
    strcpy(d1.name,"ajay");
    strcpy(d2.name,"ajeet");
    strcpy(d3.name,"shadab");
    /*do'nt use following
    d2.route='kanpur';
    d3.route='patna';
    d1.name='ajay';
    d2.name='ajeet';
    d3.name='shadab';*/
    /*d1.kms=97;
    d2.kms=95;
    d3.kms=92;

    printf("the name of 1st driver is %s.\n",d1.name);
    printf("the driving licence no. of d1 is %d.\n",d1.dl);
    printf("the route of 1st driver is %s.\n",d1.route);
    printf("the distance covered by 1st driver is %d.\n",d1.kms);

    printf("\nthe name of 2nd driver is %s.\n",d2.name);
    printf("the driving licence no. of d2 is %d.\n",d2.dl);
    printf("the route of 2nd driver is %s.\n",d2.route);
    printf("the distance covered by 2nd driver is %d.\n",d2.kms);

    printf("\nthe name of 3rd driver is %s.\n",d3.name);
    printf("the driving licence no. of d3 is %d.\n",d3.dl);
    printf("the route of 3rd driver is %s.\n",d3.route);
    printf("the distance covered by 3rd driver is %d.\n",d3.kms);*/




    //this is harry's methode
    struct driver s1,s2,s3;
    printf("enter the detail of drivers.\n");
    printf("enter the detail of 1st driver.\n");
    printf("enter the name of 1st driver.\n");
    scanf("%s",&s1.name);

    
    printf("enter the driving licence no. of 1st driver.\n");
    scanf("%d",&s1.dl);
    printf("enter the route of 1st driver.\n");
    scanf("%s",&s1.route);
    printf("enter the distance travelled by of 1st driver.\n");
    scanf("%d",&s1.kms);

    printf("enter the detail of 2nd driver.\n");
    printf("enter the name of 2nd driver.\n");
    scanf("%s",&s2.name);
    printf("enter the driving licence no. of 2nd driver.\n");
    scanf("%d",&s2.dl);
    printf("enter the route of 2nd driver.\n");
    scanf("%s",&s2.route);
    printf("enter the distance travelled by of 2nd driver.\n");
    scanf("%d",&s2.kms);

    printf("enter the detail of 3rd driver.\n");
    printf("enter the name of 3rd driver.\n");
    scanf("%s",&s3.name);
    printf("enter the driving licence no. of 3rd driver.\n");
    scanf("%d",&s3.dl);
    printf("enter the route of 3rd driver.\n");
    scanf("%s",&s3.route);
    printf("enter the distance travelled by of 3rd driver.\n");
    scanf("%d",&s3.kms);

    printf("\n");
    printf("\n");
    printf("\n");
    printf("*****here is the printed detail*******\n");
    printf("the detail of driver s1 is:\n name is %s",s1.name);
    printf("driving licence is %d\n",s1.dl);
    printf("the route taken is %s\n",s1.route);
    printf("distance travelled is %d\n",s1.kms);
    printf("\n");
    printf("the detail of driver s2 is:\n name is %s",s2.name);
    printf("driving licence is %d\n",s2.dl);
    printf("the route taken is %s\n",s2.route);
    printf("distance travelled is %d\n",s2.kms);
    printf("\n");
    printf("the detail of driver s3 is:\n name is %s",s3.name);
    printf("driving licence is %d\n",s3.dl);
    printf("the route taken is %s\n",s3.route);
    printf("distance travelled is %d\n",s3.kms);
    return 0;
}