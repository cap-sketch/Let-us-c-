//check if a number is prime
#include<stdio.h>
int main()
{
    int a;
    printf("enter any number: ");
    scanf("%d",&a);
     for(int i=2;i<a;i++)
     {
        if(a%i==0){
        printf(" not a prime number");
        break;}
        else
        {
        printf("prime number");
        break;
             }     }
     return 0;
}