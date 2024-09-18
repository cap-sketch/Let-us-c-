//greatest of three numbers using conditional operator
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter any three numbers");
    scanf("%d%d%d",&a,&b,&c);
    (a>b)?(a>c)?(printf("%d is greater",a)):printf("%d is greater",c):(b>c)?(printf("%d is greater",b)):printf("%d is greater",c);
    return 0;
}