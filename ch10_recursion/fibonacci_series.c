//fibonacci series
#include<stdio.h>
int  fibo(int);
int main()
{
    int x=0;
    int count=25;
    for(int i=0;i<count;i++)
    {
        printf("%d ",fibo(x));
        x++;
    }
    
}

int fibo(int x)
{
    if(x==0 || x==1)
    return x;
    else
    return (fibo(x-1)+fibo(x-2));
}