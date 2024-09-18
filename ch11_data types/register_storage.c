//register storage class
#include<stdio.h>
int main()
{
    register int i;
    for(i=0;i<5;i++)
    {
        printf(" %d",i+1);
    }
    return 0;
}