//conversion of distance
#include<stdio.h>
int main()
{
    int d;
    printf("enter distance (kilo) : ");
    scanf("%d",&d);
    int met=d*1000;
    int cent=d*10e5;
    int feet=cent*30.48;
    int inch=cent*3.54;
    printf("distance in kilometers is %d\n",d);
    printf("distance in meters is %d\n",met);
    printf("distance in centrimeters is %d\n",cent);
    printf("distance in feet is %d\n",feet);
    printf("distance in inches is %d\n",inch);
  return 0;
  }