//pointer to pointer
#include<stdio.h>
int main()
{
    int a=5;
    int *b=&a;
    int **c=&b;
    printf("the address of a is %u\n",&a);
    printf("the address of b is %u\n",&b);
    printf("the address of c is %u\n",&c);
    printf("the value of a is %d\n",(*b));
    printf("the value of a is %d\n",(**c));
    printf("the address of a is %d",(*c));
    return 0;

}