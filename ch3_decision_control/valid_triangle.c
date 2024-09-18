//valid triangle
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the angles of a triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c==180)
    printf("the triangle is valid");
    else
    printf("the triangle is not valid");
    return 0;
}