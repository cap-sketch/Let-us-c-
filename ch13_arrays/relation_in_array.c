//checking relation of array if a[0]=a[n-1] and so on......
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n;
   printf("enter the no. of elements in array: ");
   scanf("%d",&n);
   int *x=NULL;
   x=(int*)malloc(n*sizeof(int));
   if(x==NULL)
   {
    printf("allocation failed");
    return 1;
   }
   printf("enter the elements: \n");
   for(int i=0;i<n;i++)
   {
    scanf("%d",&x[i]);
   }
   //checking relation
   int count=0;
   for(int i=0;i<n;i++)
   {
    if (x[i]==x[n-(i+1)])
     count++;
     if(count>=(n/2)){
     printf("relation is there");
     exit(0);}
    
   }
    
     printf("relation is not there");
   free(x);
   return 0;
}