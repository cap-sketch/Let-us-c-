//interchange adjacent element of an array
#include<stdio.h>
void cal(int ,int*);
int main()
{
    int x;
    printf("enter the no. of elements in an array: ");
    scanf("%d",&x);
    int a[x];
    printf("enter the elements: ");
    for(int i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    cal(x,&a[0]);
    return 0;
}

void cal(int n,int a[])
{
    int k;
    for(int i=0;i<n-1;)
    {
        k=a[i];
        a[i]=a[i+1];
        a[i+1]=k;
        i=i+2;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}