//menu driven programs
#include<stdio.h>
#include<stdlib.h>
int main()
{
    while(1)
    {
   printf("what do you choose to find: \n");
   printf("factorial of a number(choose 1): \n");
   printf("check prime or not(choose 2):\n ");
   printf("check odd or even(choose 3): \n");
   printf("exit the program(choose 4):\n ");
   int n; 
   int a;
   int sum;
   scanf("%d",&n);
  switch(n)
  {
    case 1:
     sum=1;
     printf("enter any number");
    scanf("%d",&a);
    for(int i=a;i>0;i--)
    {
      sum=sum*i;

    }
    printf("the factorial of %d is %d\n\n",a,sum);
    break;
     
     case 2:
    printf("enter any number: \n");
    scanf("%d",&a);
     for(int i=2;i<a;i++)
     {
        if(a%i==0){
        printf(" not a prime number\n");
        break;}
        else
        {
        printf("prime number\n");
        break;
        } 
      break;

    }
    break;
    case 3:
    printf("enter any number: \n");
    scanf("%d",&a);
    if(a%2==0)
    printf("even number\n");
    else
    printf("odd number\n");
    break;
     
     case 4:
     printf("you choose to exit the program\n");
     exit(1);

     default:
     printf("wrong choice");
  }
    }
    return 0;
     
}