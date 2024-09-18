//operations on pointers
#include<stdio.h>
int main()
{
    int a=4;
    int c=5;
    int* d=&c;
    int* b=&a;
    printf("%u\n",b);
    b=b+1;              //addition of a number to a pointer
    int *x=b;
    printf("%u\n",b);
    b=b-1;              //substraction of a number from a pointer
    int *y=b;
    printf("%u\n",b);
    int z=x-b;          //substraction of one pointer from another
    printf("%d\n",z);
     if(b==y)            //comparison of two pointers
    printf("true");
    else
    printf("false");
}