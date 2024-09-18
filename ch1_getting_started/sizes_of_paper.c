//sizes of paper
#include<stdio.h>
int main()
{
    int a=1189;
    int b=841;
    printf("the dimensions of A0 size is %d*%d\n",a,b);
    for(int i=1;i<=8;i++)
    {
    if(a>b)
    {
        a=a/2;
        b=b;
        printf("the dimensions of A%d size is %d*%d\n",i,b,a);
    }
    else
    { 
        a=a;
        b=b/2;
        printf("the dimensions of A%d size is %d*%d\n",i,a,b);
    }
    }
    return 0;
}
