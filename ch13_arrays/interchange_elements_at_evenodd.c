//interchanges elements at odd and even position
#include<stdlib.h>
#include<stdio.h>
int main()
{
    int n;
    printf("enter the total elements in an array: ");
    scanf("%d",&n);
    fflush(stdin);
    int *x=NULL;
    x=(int*)malloc(n*sizeof(int));
    if(x==NULL)
    printf("allocation failed");
    printf("enter the elements: ");
    for(int i=0;i<n;i++)
    {
       scanf("%d",&x[i]);
    }
    for(int i=0;i<n-1;i=i+2)
    {
        int k=x[i];
        x[i]=x[i+1];
        x[i+1]=k;
    }
    printf("the elements are \n");
    for(int i=0;i<n;i++)
    {
        printf("%d",x[i]);
    }

    free(x);
    return 0;
}