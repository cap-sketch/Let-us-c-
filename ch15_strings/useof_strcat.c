//use of strcat()
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[]="anmol";
   char new[]="pratap";
    strcat(ch,new);
    printf("%s\n",new);
    printf("%s\n",ch);
    return 0;
}