//area of triangle 
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float area;
    printf("enter length of three sides of a triangle : ");
    scanf("%f%f%f",&a,&b,&c);
    float s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of triangle is %.2f",area);
}