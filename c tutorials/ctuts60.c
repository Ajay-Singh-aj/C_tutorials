//this is tutorial for macros 
#include<stdio.h>
#include<stdlib.h>
//here are some defined macros.
int main()
{
    printf("File name is %s\n",__FILE__);
    printf("Today's date is %s\n",__DATE__);
    printf("Time now is %s\n",__TIME__);
    printf("Line no. is %s\n",__LINE__);
    //below line will execute when we comment out all above code.
    printf("ANSI: %d\n",__STDC__);
    return 0;
}