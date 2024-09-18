//passing an array to a function
#include<stdio.h>
void val(int,int*);
void cal(int,int*);
int main()
{
    int n;
    printf("enter the no. of elements in total: ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    cal(n,&a[0]);
    val(n,&a[0]);
    return 0;
}

void cal(int a,int *p)
{
    for(int i=0;i<a-1;i++)
    {
        printf("%d ",*p);
        p++;
    }
    printf("\n");
}

void val(int a,int b[])
{
    for(int i=0;i<a-1;i++)
    {
        printf("%d ",b[i]);
    }
}