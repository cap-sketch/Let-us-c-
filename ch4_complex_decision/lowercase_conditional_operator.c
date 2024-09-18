//lowercase using conditional operator
#include<stdio.h>
int main()
{
    char a;
    printf("enter any character: ");
    scanf("%c",&a);
    (a>=97 && a<=122) ? printf("lowercase") : printf("not a lowercase");
    return 0;
}