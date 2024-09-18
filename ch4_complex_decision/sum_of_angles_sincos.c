//sum of angles
#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("enter any angle in degress: ");
    scanf("%d",&a);
    // conversion in radians
    float rad=a*3.14/180;
    int d=pow(sin(rad),2)+pow(cos(rad),2);
    if(d==1)
    printf("equal");
    else
    printf("not equal");
    return 0;
}