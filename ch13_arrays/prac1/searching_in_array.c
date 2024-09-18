//searching in array
#include<stdio.h>
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
    int n;
    int count=0;
    printf("enter the element you wish to search: ");
    scanf("%d",&n);
    for(int i=0;i<x;i++)
    {
         if(n==a[i])
         count++;
    }
    printf("no of times element exist is %d",count);
    return 0;
    
}