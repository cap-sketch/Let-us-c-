//linear search
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
    }
    int y;
    printf("enter the element you wish to search: \n");
    scanf("%d",&y);
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(x[i]==y)
        {
            printf("the element exist at %d position.\n",i+1);
            count ++;        
        }
    }
    printf("the total times no. found is %d\n",count);
    free(x);
    return 0;
}