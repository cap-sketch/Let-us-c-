//access array elements using pointers
#include<stdio.h>
int main()
{
    int a[4]={1,2,3,4};
    int *b=&a[0];
    for(int i=0;i<4;i++)
    {
        printf("%d",*b);
        b++;
    }
    return 0;
}