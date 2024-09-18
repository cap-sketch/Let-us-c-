//simple sorting(bubble) 
#include<stdio.h>
int main()
{
    int a[6]={1,3,2,5,4,0};
    int n=6;
    for(int j=0;j<n;j++)
    {
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            int k=a[i];
            a[i]=a[i+1];
            a[i+1]=k;
        }
    }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}