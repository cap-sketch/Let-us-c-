//accessing string using pointer
#include<stdio.h>
int main()
{
    char a[]="anmol";
    char *ptr;
    ptr=a;
    int i=0;
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
}
