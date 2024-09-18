//void pointer
#include<stdio.h>
int main()
{
    int a=5;
    void* b=&a;
    int*x=b;                       //typecasting is neccesary for compiler to allocate how many bits of storage 
    printf("%d\n",*(int*)b);      //for any given data(int,float,char)
    printf("%d",*x);
    return 0;
}