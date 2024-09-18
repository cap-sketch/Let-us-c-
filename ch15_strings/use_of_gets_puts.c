//use of gets() and puts()
//use for multi-strigs
#include<stdio.h>
int main()
{
    char a[50];
    puts("enter your name: ");  //same as printf function
    gets(a);                    //same as scanf function but it does not uses %c/%s
    puts("your name is : ");
    puts(a);
    return 0;
}