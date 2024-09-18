//use of strcpy()
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[]="anmol pratap";
    char new[25];
    strcpy(new,ch);
    printf("%s\n",ch);
    printf("%s\n",new);
    return 0;
}