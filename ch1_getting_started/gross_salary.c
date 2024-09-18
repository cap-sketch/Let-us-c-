//calculation of gross salary
#include<stdio.h>
int main()
{
    int bas,allow,rent,gross;
    printf("enter basic salary: ");
    scanf("%d",&bas);
    allow=bas*40/100;
    rent=bas*20/100;
    gross=bas+allow+rent;
    printf("the gross salary is %d",gross);
    return 0;
}