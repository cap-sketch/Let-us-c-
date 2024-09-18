//print address of a variable
#include<stdio.h>
int main()
{
    int a=5;
    int *b=&a;
    printf("value of a %d\n",a);
    printf("address of a is %u\n",&a);
    printf("address of a is %d\n",b);
    printf("value of a %d\n",*(&a));
    printf("value of a %d\n",*b);
    return 0;
}
