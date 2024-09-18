//REVERSE A NUMBER
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter any number: ");
    scanf("%d",&n);
    while(n>0)
{
    int r=n%10;
    sum=sum*10+r;
    n=n/10;
}
printf("the reverse of number is %d",sum);
return 0;

}