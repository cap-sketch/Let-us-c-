//Armstrong number between 1 and 500
#include<stdio.h>
int main()
{
    int a;
  
    for(int i=1;i<=500;i++)
    {
    int n=i;
    a=i;
      int sum=0;
    while(a>0)
    {
        int r=a%10;
        sum=sum+r*r*r;
        a=a/10;
    }
    if(sum==n)
    printf("%d\n",sum);
    }

    return 0;
}