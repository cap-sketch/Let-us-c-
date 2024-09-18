//trignometric ratios
#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    printf("enter any angle: ");
    scanf("%f",&a);
    //convert into radians
    a=(a*M_PI)/180;
   float  b=tan(a);
    float  c=cos(a);
    float d=sin(a);
    printf("the trignometric ratios in sin,cos,tan are as follows \n %f %f %f",d,c,b);
    return 0;
}