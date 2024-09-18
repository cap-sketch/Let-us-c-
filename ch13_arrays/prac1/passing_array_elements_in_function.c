//passing array elements to a function through call by value or reference
#include<stdio.h>
void cal(int,int*);
int main()
{
    int a[]={2,4,6,35,6};
    for(int i=0;i<5;i++)
    {
        cal(a[i],&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

void cal(int a,int *b)
{
    printf("%d \n",a);
    *b=a+1;
}