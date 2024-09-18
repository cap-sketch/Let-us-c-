//factorial through functions
#include<stdio.h>
int fact(int);
int main()
{
    int a;
    printf("enter any number: ");
    scanf("%d",&a);
    int d=fact(a);
    printf("the factorial is %d",d);
    return 0;
}
int fact(int a)
{
    int sum=1;
    for(int i=a;i>0;i--)
    {
        sum=sum*i;
    }
    return sum;
}