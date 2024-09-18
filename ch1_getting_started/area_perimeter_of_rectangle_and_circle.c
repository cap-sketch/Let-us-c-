//calculations of rectangle and circle
#include<stdio.h>
int main()
{
    int l,b,r;
    printf("enter length and breath of rectangle: ");
    scanf("%d%d",&l,&b);
    printf("enter the radius of circle : ");
    scanf("%d",&r);
    float ar=l*b;
    float per=l+b;
    float car=3.14*r*r;
    float cper=2*3.14*r;
    printf("the area and circumference of rectangle are %.2f and %.2f respectively\n",ar,per);
    printf("the area and circumference of circle are %.2f and %.2f respecively\n",car,cper);
    return 0;
}