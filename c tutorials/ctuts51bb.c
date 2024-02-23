/*lets create a game of rock, paper and scissor
player 1: rock
player 2(computer): scissors ----> player 1 gets 1 point

write a C program to allow user to play this game three times with this computer . log the score of computer
and the player,display the name of the player at the end 
take user name as an input from user.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int genRandomNo(int n){
    srand(time(NULL));
    return rand() % n;
}
int greater(char c1,char c2){
if ((c1=='r')&&(c2=='s'))
{
    return 1;
}
else if (c1==c2)
{
    return -1;
}
else if ((c2=='r')&&(c1=='s'))
{
    return 0;
}
else if ((c1=='p')&&(c2=='r'))
{
    return 1;
}
else if ((c2=='p')&&(c1=='r'))
{
    return 0;
}
else if ((c1=='p')&&(c2=='s'))
{
    return 1;
}
else if ((c2=='p')&&(c1=='s'))
{
    return 0;
}

}
int main()
{
    int p1score=0,comscore=0,temp;
    char p1char,comchar;
    char dict[]={'r','p','s'};
    printf("welcome\n");
    for (int i = 0; i < 3; i++)
    {
        printf("player 1's turn:\n");
        printf("choose 1 for rock,2 for paper,3 for scissor\n");
        scanf("%d",&temp);
        getchar();
        p1char=dict[temp-1];
        printf("you chose %c\n\n",p1char);

        printf("computer's turn:\n");
        printf("choose 1 for rock,2 for paper,3 for scissor\n");
        temp=genRandomNo(3)+1;
        comchar=dict[temp-1];
        printf("computer chose %c\n",comchar);

        if (greater(comchar,p1char)==1){
            comscore += 1;
            printf("Computer got it.\n");
        }
        else if (greater(comchar,p1char)==-1){
            comscore += 1;
            p1score += 1;
            printf("this a draw chance.\n");
        }
        else
        {
            p1score += 1;
             printf("you got it.\n");
        }
        printf("Your Score: %d\nComp Score: %d\n\n",p1score,comscore);

    }
     if (p1score>comscore)
    {
       printf("Congrats! You won.\n");
    }
    else if(p1score<comscore)
    {
      printf("Sorry! You lost.\n");  
    }
    else
    {
        printf("Draw");
    }
     return 0;
}
