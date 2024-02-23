/*this is tutorial is for generate random no.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    /*srand is the func. of stdlib,and in its we put time ,if we put in it a constant no. it will show 
    randomally a fixed no.*/
    printf("the random no. between o and 100 is %d\n",rand()%100);
    
    return 0;
}


/*or we can do by a generate function*/
/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int generaterandomnumber(int n){
    srand(time(NULL));
    return rand()%6;

}
int main()
{
    printf("the random no. between o and 6 is %d\n",generaterandomnumber(6));
    
    return 0;
}*/