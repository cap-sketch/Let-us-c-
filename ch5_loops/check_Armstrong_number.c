//Armstrong number
#include<stdio.h>
int main()
{
    int a;
    int sum=0;
    printf("enter any number: ");
    scanf("%d",&a);
    int n=a;
    while(a>0)
    {
        int r=a%10;
        sum=sum+r*r*r;
        a=a/10;
    }
    if(sum==n)
    printf("armstrong number");
    else
    printf("not an armstrong number");
    return 0;
}