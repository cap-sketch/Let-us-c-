//equilateral ,scalene or right angled triangle
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the lengths of three sides of a triangle: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a==b && b==c)
    printf("equilateral triangle");
    else if(a>b && a>c || b>a && b>c || c>b && c>a)
        {  
        if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==b*b+a*a)
        {
            printf("right angled triangle");
        }
        else
        printf("scalene triangle");
        }
   
return 0;
}