// one number raised to another
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    printf("enter any two numbers: ");
    scanf("%d%d",&a,&b);
    printf("the %d raised to the power %d is %.0f",a,b,pow(a,b));
    return 0;
}