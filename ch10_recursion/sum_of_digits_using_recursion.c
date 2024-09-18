//sum of digits using recursion
#include<stdio.h>
int cal(int );
int main()
{
    int a;
    printf("enter any number: ");
    scanf("%d",&a);
    int d=cal(a);
    printf("%d",d);
}

int cal(int a)
{ 
    int d=0;
    if(a!=0)
    {
        int r=a%10;
        int d=r+cal(a/10);
    
    return d;
    }
    else
       return 0;
}