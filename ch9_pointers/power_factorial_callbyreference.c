//power and factorial through call by reference
#include<stdio.h>
#include<math.h>
void cal(int,int,int,int*,int*);
int main()
{
    int down,up,fact,ans;
    printf("enter the number and its power: ");
    scanf("%d%d",&down,&up);
    printf("enter any number for factorial: ");
    scanf("%d",&fact);
    cal(down,up,fact,&ans,&fact);
     printf("the %d power %d is %d\n",down,up,ans);
     printf("the factorial of number is %d",fact);
     return 0;
}

void cal(int a,int b,int fact,int *x,int *y)
{
    *x=pow(a,b);
    int count=1;
    for(int i=fact;i>1;i--)
    {
        count=count*i;
    }
    *y=count;
}