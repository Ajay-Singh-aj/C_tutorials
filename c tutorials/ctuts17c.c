#include<stdio.h>
//this is use of goto in loops.
int main(int argc, char const *argv[])
{
    int num,i,j;
      for ( i = 0; i <8; i++)
    {
        printf("%d\n",i);
        for ( j = 0; j <8; j++)
        {
            printf("enter the number.enter 0 to exit\n");
            scanf("%d",&num);
            if (num==0)
            {
                goto end;
            }
            
        }
        
    }
    end:
    return 0;
}
