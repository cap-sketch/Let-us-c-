//prime factors of a number
#include<stdio.h>
void cal();
int main()
{
    int a;
    printf("enter any number: ");
    scanf("%d" ,&a);
    cal(a);
    return 0;
}

void cal(int a)
{
     int d=2;
    while(a>1)
    {
        
        if(a%d==0)
        printf("%d ",d);
    else
        {
            d++;
            continue;
        }
        a=a/d;
    }
}