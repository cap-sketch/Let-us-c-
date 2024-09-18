//check if three points lies on a straight line
#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    printf("enter first node: ");
    scanf("%d%d",&x1,&y1);
    printf("enter second node: ");
    scanf("%d%d",&x2,&y2);
    printf("enter third node: ");
    scanf("%d%d",&x3,&y3);
    int a=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    int b=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
    int c=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
    if(a==b+c || b==c+a || c==a+b)
{
    printf("the points fall on straight line");
}
else
 printf("the points does not lie on straight line");
 return 0;



}