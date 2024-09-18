//prime factors using recursion
#include<stdio.h>
void factorise(int,int);
int main()
{
  int a;
  printf("enter any number: ");
  scanf("%d",&a);
  int i=2;
  factorise(a,i);
  return 0;
}

void factorise(int a,int i)
{
  if(a>=i)
  {
    if(a%i==0)
    {
      printf("%d ",i);
      a=a/i;
    }
    else
    i++;
    factorise(a,i);
  }
  
}