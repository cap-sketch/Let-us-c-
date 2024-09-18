//finding smallest number in an array
//sorting of an array
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
   // bubble sorting
     for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) 
        {
            if (x[j] > x[j + 1]) 
            {
                int temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
     }
    for(int i=0;i<n;i++)
    {
        printf(" %d",x[i]);
    }
    printf("\n");
    printf("the smallest element is %d",x[0]);
    free(x);
    return 0;
}