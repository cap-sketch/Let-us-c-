//overtime pay of  employees
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
int e;
int hr;
printf("enter the no of employees: ");
scanf("%d",&e);
while(e>0)
{
    printf("for employee number %d\n",abs(11-e));
    printf("enter the no of hours worked: ");
    scanf("%d",&hr);
    int d=hr-40;
    if(d>0)
    printf("your overtime pay is %d\n",d*120);
    else
    printf("no overtime pay\n");
    e--;
}
return 0;
}