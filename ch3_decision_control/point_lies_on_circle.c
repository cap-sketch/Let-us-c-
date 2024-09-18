//point lies inside, outside, or on the circle
#include<stdio.h>
#include<math.h>
int main()
{
    int r,x,y,a,b;
    printf("enter the centre of circle: ");
    scanf("%d%d",&x,&y);
    printf("enter the radius of circle: ");
    scanf("%d",&r);
    printf("enter the point coordinates: ");
    scanf("%d%d",&a,&b);
    int d=(pow((x-a),2)+pow((y-b),2));
    printf("value of d is %d\n",d);
    if(d==r)
    printf("the point lies on the circle");
    else if (d<r)
    printf("the point lies inside the circle");
    else if(d>r)
    printf("the point lis outside the circle");
    return 0;
}