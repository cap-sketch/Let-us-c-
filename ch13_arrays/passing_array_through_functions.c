//passing array through functions
#include<stdio.h>
void modify(int,int*);
int main()
{
    int a[8]={1,2,3,4,5,6,7,8};
    int n=8;
    modify(n,a);
    for(int i=0;i<n;i++){
    printf(" %d",a[i]);
    }
    return 0;
}

void modify(int n,int a[])
{
    for(int i=0;i<n;i++)
    {
        a[i]=a[i]*3;
    }
    
}
