//factorial using recursion
#include<stdio.h>
int fact(int);
int main()
{
    int n;
    printf("enter any number: ");
    scanf("%d",&n);
    printf("factorial is %d",fact(n));
    return 0;
}

int fact(int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}