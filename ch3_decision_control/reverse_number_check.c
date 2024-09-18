//reverse a number and check
#include<stdio.h>
int main()
{
    int a,sum=0;
    printf("enter any number: ");
    scanf("%d",&a);
    int n=a;
    while(a>0)
    {
        int r=a%10;
        sum=sum*10+r;
        a=a/10;
    }
    printf("the reversed number is %d",sum);
    if(n==sum)
    printf(" the numbers are equal ");
else
printf("the numbers are not equal");
return 0;
}