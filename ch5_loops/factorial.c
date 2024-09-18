//factorial of any number
#include<stdio.h>
int main()
{
    int n;
    int sum=1;
    printf("enter any number : ");
    scanf("%d",&n);
    int a=n;
    while(n>0)
    {
        sum=sum*n;
        n--;
    }
    printf("the factorial of the %d is %d",a,sum);
    return 0;
}