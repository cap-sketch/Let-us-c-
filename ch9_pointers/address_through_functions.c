//printing address through function
#include<stdio.h>
void cal(int);
int main()
{
    int a=5;
    printf("the value of a is %d\n",a);
    printf("the address of a is %u\n",&a);
    cal(a); //call by value case (the values are copied to a new address)
    return 0;
}

void cal(int a)
{
    printf("the address of a in function is %u\n",&a);
}
