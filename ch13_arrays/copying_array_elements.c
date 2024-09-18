//copying the elements of one array into another in reverse order
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
    {
    printf("allocation failed");
    return 1;
    }
    printf("enter the elements: ");
    for(int i=0;i<n;i++)
    {
       scanf("%d",&x[i]);
       fflush(stdin);
    }
    int a[n];
    int *y=NULL;
    y=(int*)malloc(n*sizeof(int));
    if(y==NULL)
    {
    printf("allocation failed");
    return 2;
    }
    //copying elements
    for(int i=0;i<n;i++)
    {
        
        a[i]=x[n-(i+1)];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    free(x);
    free(y);
    return 0;
}

    

    
