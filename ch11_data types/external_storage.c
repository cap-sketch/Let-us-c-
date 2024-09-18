//external storage class
#include<stdio.h>
int i;
void increment();
void decrement();
int main()
{
  printf("%d\n",i);
  increment();
  increment();
  decrement();
  decrement();
  return 0;
}

void increment()
{
    i++;
    printf("%d\n",i);
}

void decrement()
{
    i--;
    printf("%d\n",i);
}