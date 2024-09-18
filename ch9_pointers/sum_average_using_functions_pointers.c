//sum and average of two numbers using functions through pointers
#include<stdio.h>
void  cal(int *,int *);
int main()
{
   int a,b;
   printf("enter any two numbers: ");
   scanf("%d%d",&a,&b);
   cal(&a,&b);
   return 0;
}

void cal(int *a,int *b)
{
    int sum= (*a)+(*b);
    int product=(*a)*(*b);
    printf("the value of sum is %d\n",sum);
    printf("the value of product is %d",product);
}