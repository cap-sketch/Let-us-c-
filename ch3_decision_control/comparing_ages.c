//comparing ages
#include<stdio.h>
int main()
{
    int r,s,a;
    printf("enter the age of ram, shayam and ajay: ");
    scanf("%d%d%d",&r,&s,&a);
    if(r<s && r<a)
    printf("ram is youngest");
    else if(s<r && s<a)
    printf("shyam is youngest");
    else 
    printf("ajay is youngest");
    return 0;
}