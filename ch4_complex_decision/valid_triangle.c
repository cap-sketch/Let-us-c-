//VALID TRIANGLE
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter length of sides of a triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
{
    if(a>c)
    {
        if(a<b+c)
        printf("valid traingle");
        else
        printf("invalid triangle");
    }
    else
{
    if(c<b+a)
    printf("valid triangle");
    else
    printf("invalid triangle");
}
}
else
{
    if(b>c)
{
    if(b<c+a)
    printf("valid triangle");
    else
    printf("invalid triangle");
}
else
{
    if(c>b)
{
    if(c<b+a)
    printf("valid triangle");
    else 
    printf("invalid triangle");
}
}
}
return 0;
}
