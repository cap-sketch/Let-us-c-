//gross salary
#include<stdio.h>
int main()
{
    int s;
    int hra,da;
    printf("the basic salary of employee is : ");
    scanf(
        "%d",&s
    );
    if(s<1500)
{
   hra=s*10/100;
   da=s*90/100;
   printf("the gross salary is %d",hra+da+s);
}
else if(s>=1500)
{
    hra=500;
    da=s*98/100;
    printf("the gross salary is %d",hra+da+s);
}
return 0;
}
