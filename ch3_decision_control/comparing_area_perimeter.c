//comparing area and perimeter
#include<stdio.h>
int main()
{
    int l,b;
    printf("enter the length of rectangle: ");
    scanf("%d",&l);
    printf("enter the breath of rectangle: ");
    scanf("%d",&b);
    float area=l*b;
    float peri=2*(l+b);
    if(area>peri)
    printf("the area is greater");
    else
    printf("the perimeter is greater");
    return 0;
}