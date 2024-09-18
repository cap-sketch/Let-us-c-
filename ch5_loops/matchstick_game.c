//Matchstick game
#include<stdio.h>
int main()
{
    int n=21,a;
    while(n>1){
    printf("choose any number(from 1,2,3,4): ");
    scanf("%d",&a);
    int r=n-a;
    printf("the remaining is %d\n",r);
    printf("the computer chooses %d\n",(5-a));
    n=r-(5-a);
    printf("the remainder is %d\n",n);
    }
    if(n==1)
    {
    printf("only one is left hence ");
    printf("computer wins");
        }    return 0;
}