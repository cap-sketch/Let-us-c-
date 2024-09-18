//uppercase,lowercase,or digits
#include<stdio.h>
int main()
{
    char a;
    printf("enter the character: ");
    scanf("%c",&a);
    if(a>=65 && a<=90)
    printf("uppercase letter");
    else if(a>=97 && a<=112)
    printf("lowercase letter");
    else if(a>=48 && a<=57)
    printf("digit");
    return 0;
}