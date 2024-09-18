//interchange the numbers
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter any two numbers: ");
    scanf("%d%d",&a,&b);
    int c=b;
    b=a;
    a=c;
    printf("the interchange digits are %d %d",a,b);
    return 0;
}