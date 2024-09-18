//going beyond the limit of an array
#include<stdio.h>
int main()
{
    int a[5];
    printf("%u",&a);
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    } 
    return 0;
}


//going beyond the limit of an array causes undefined behavior
//so you can use dynamic memory allocation.