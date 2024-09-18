//sum of digits
#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("enter any number: ");
    scanf("%d",&n);
    while(n>0)
{
    int r=n%10;
    sum=sum+r;
    n=n/10;

}
printf("the sum of digits is equal to %d",sum);
return 0;
}