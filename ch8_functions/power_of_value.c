//program to calculate power of a value
#include<stdio.h>
#include<math.h>
int power(float,int);
int main()
{
    float x;
    int y;
    printf("enter any number: ");
    scanf("%f",&x);
    printf("enter its power: ");
    scanf("%d",&y);
    int d=power(x,y);
    printf("%f power %d is %d",x,y,d);
    return 0;
}
int power(float a, int b)
{
    float p=1;
    for(int i=1;i<=b;i++)
    {
         p=p*a;
    }
    return p;
}