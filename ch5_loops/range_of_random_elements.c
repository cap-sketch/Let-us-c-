//find range of random numbers in an array
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of elements in an array: ");
    scanf("%d",&n);
    int a[n];
    printf("enter elements in an array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(int i=0;i<n;i++)
{
   if(a[i]>max)
   max=a[i];
}
printf("max element is %d\n",max);
int min=a[0];
for(int i=0;i<n;i++)
{
    if(a[i]<min)
    min=a[i];
}
printf("min element is %d\n",min);
printf("range of given elements is  %d ",max-min);
return 0;
}