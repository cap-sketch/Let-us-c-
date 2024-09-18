//find nautical distances
#include<stdio.h>
#include<math.h>
int main()
{
    float l1,l2,g1,g2;
    printf("enter the latitude and longitude of 1st place: ");
    scanf("%f%f",&l1,&g1);
    printf("enter the latitude and longitude of 2nd place: ");
    scanf("%f%f",&l2,&g2);
    // converion of degree to radian is needed for the required calculation
    l1=(l1*3.14)/180;
    l2=(l2*3.14)/180;
    g1=(g1*3.14)/180;
    g2=(g2*3.14)/180;

    float d=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
    printf("the distance in nautical miles is %f",d);
    return 0;

}