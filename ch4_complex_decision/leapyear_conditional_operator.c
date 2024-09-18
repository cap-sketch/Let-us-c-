//conditional operator leap year
#include<stdio.h>
int main()
{
    int y;
    printf("enter any year: ");
    scanf("%d",&(y));
    (y%4==0)?((y%100!=0)?(printf("leap year")):((y%400==0)?(printf("leap year")):printf("not a leap year"))):printf("not a leap year");
    return 0;
}