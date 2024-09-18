//division in marks
#include<stdio.h>
int main()
{
    int a,b,c,d,e,per;
    printf("enter your marks in five subjects: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    per=(a+b+c+d+e)/5;
    if(per>=60)
    printf("first division");
    else if(per<59 && per>50)
    printf("second divison");
    else if(per<49 && per>40)
    printf("third division");
    else if(per<40)
    printf("fail");
    return 0;
}