//copy one array into another in reverse order
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[]={2,5,6,4,7};
    //checking total no of elements
    int total=sizeof(a)/sizeof(a[0]);
    int b[total];
    for(int i=total-1,j=0;i>=0;i--,j++)
    {
        
    {
        b[i]=a[j];
    }
    }
    for(int k=0;k<total;k++)
    {
        printf("%d ",b[k]);
    }
    return 0;
}