//wind chill factor
#include<stdio.h>
#include<math.h>
int main()
{
    int t,v;
    printf("enter the value of temperature: ");
    scanf("%d",&t);
    printf("enter the value of wind velocity: ");
    scanf("%d",&v);
    float wcf=35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);
    printf("the wind-chill factor is %.2f",wcf);
    return 0;

}