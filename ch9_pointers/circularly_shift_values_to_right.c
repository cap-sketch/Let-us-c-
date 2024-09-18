//circularly shift values to right
#include<stdio.h>
void shift(int*,int*,int*);
int main()
{
    int x,y,z;
    printf("enter values of x,y,z: ");
    scanf("%d%d%d",&x,&y,&z);
    shift(&x,&y,&z);
    printf("the values of x=%d , y=%d ,z=%d",x,y,z);
    return 0;
}

void shift(int* a,int *b,int*c)
{
    int k=*c;
    *c=*b;
    *b=*a;
    *a=k;
}