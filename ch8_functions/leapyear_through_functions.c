//leap year through functions
#include<stdio.h>
void cal(int);
int main()
{
    int a;
    printf("enter any year: ");
    scanf("%d",&a);
    cal(a);
    return 0;
}

void cal(int a)
{
    if(a%4==0)
    {
        if( a%100==0 && a%400==0)
        {
            printf("leap year");
        }
        else if(a%100!=0)
        {
            printf("leap year");
        }
        else
        printf("not a leap year");
    }
    else
    {
        printf("not a leap year");
    }
}