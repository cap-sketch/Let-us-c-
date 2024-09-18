//calcualtion of simple interest
#include<stdio.h>
int main()
{
  int pri,time;
  float rate,sim;
  printf("enter the principal amount: ");
  scanf("%d",&pri);
  printf("enter the rate of interest: ");
  scanf("%f",&rate);
  printf("enter the time taken: ");
  scanf("%d",&time);
  sim=pri*rate*time/100;
  printf("the simple interest is %.2f",sim);
  return 0;
}