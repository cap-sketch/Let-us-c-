//printing of string using pointers
#include<stdio.h>
int main()
{
    char a[]="anmol";
    char *ptr=a;
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}