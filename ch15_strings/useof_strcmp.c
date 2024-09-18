//strcmp() as a function
#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="anmol";
    char b[]="anmol";
    int i=strcmp(a,b);
    int j=strcmp(a,"boy");
    printf("%d %d",i,j);
    return 0;
}