//taking multi string array as input from scanf
#include<stdio.h>
int main()
{
    char ch[25];
    printf("enter your name: ");
    scanf("%[^\n]s",ch); //takes input until \n is encountered
    printf("%s",ch);
    return 0;

}