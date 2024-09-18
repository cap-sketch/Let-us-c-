//converesion of temperature
#include<stdio.h>
int main()
{
    int temp;
    printf("enter the temperatue in farenhite: ");
    scanf("%d",&temp);
    int c=(temp-32)*5/9;
    printf("temperature in celcius is %d",c);
    return 0;
}