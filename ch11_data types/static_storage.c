//static storage class
#include<stdio.h>
void increment();
int main()
{
    increment();
    increment();
    increment();
    return 0;
}

void increment()

{
    auto int i=5;
    static int a=5;
    printf("%d %d\n",i,a);
    a++;
}