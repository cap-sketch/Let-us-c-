// point lies on cartesian plane
#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the points on cartesian plane: ");
    scanf("%d%d",&x,&y);
    if(x==0 && y==0)
    printf("the points lies on the origin");
    else if(x==0 && y!=0)
    printf("the points lies on y axis");
    else if(x!=0 && y==0)
    printf("the point lies on x axis");
    else
    printf("the point neither lies on axis nor on origin");
    return 0;
}