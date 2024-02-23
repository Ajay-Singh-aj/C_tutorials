#include<stdio.h>
int hoax(int n);
int prime(int n);
int getsum(int n);

int main(int argc, char const *argv[])
{
    int n,m;
    
    scanf("%d",&n);
    prime(n);
    hoax(n);
    // m=hoax(n);

    // if (m==getsum(n))
    // {
    //     printf("YES");
    // }
    // else
    // {
    //     printf("NO");
    // }
    
    
    return 0;
}
int hoax(int n){
    int sum=0;
    for (int i = 2; i < (n/2)+1; i++)
    {
        
        
        if (n%i==0)
        {
            int c;
            
            c=prime(i);
            if (c==1)
            {
                sum=sum+getsum(i);
                
            }
            
        }
        
    }
    printf("%d\n",sum);
    return sum;
    
}
int prime(int n){
    int flag=1;
    for ( int i = 2; i <n/2 ; i++)
    {
        if (n%i==0)
        {
           flag=0;
           break;
        }
        
    }
    printf("%d\n",flag);
    return flag;    
    
}
int getsum(int n){
    int sum;
    sum=0;
    while (n!=0)
    {
        sum=sum+(n%10);
        n=n/10; 
    }
    return sum;
}
