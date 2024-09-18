//use of calloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
    //creating memory dynamically
    int n;
    printf("enter the integers you wish to add: ");
    scanf("%d",&n);


    int*ptr;
    ptr=(int*)calloc(n,sizeof(int));  //memory allocation of n integers
    for(int i=0;i<n;i++)             //creating a loop to give n integers
    {
        printf("enter %d element of array: \n",i+1);
        scanf("%d",&ptr[i]);      //saving n elements in an array at address of ptr
    }
    //transversing array
    for(int i=0;i<n;i++)
    {
        printf("%d element is %d\n",i+1,ptr[i]);
    }
return 0;
}