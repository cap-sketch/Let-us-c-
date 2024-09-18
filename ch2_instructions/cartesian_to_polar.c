//cartesian to polar coordinates
#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    float r,s;
    printf("enter the cartesian coordinates: ");
    scanf("%d%d",&x,&y);
    r=sqrt(x*x+y*y);
    s=atan2(y,x);
    printf("the polar coordinates are %.2f and %.2f",r,s);
    return 0;

}