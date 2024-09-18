//change value (call by reference)
#include<stdio.h>
void cal(int*);
int main()
{
    int a=4;
    cal(&a);
    printf("the value of a after function is %d",a);
    return 0;
}

void cal(int *a)
{
    *a=*a *(10);
}