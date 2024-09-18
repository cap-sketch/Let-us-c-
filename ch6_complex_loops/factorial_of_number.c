#include<stdio.h>
int main()
{
    int a;
    printf("enter any number");
    scanf("%d",&a);
    int sum=1;
    for(int i=a;i>0;i--)
    {
      sum=sum*i;

    }
    printf("the factorial of %d is %d",a,sum);
    return 0;
}