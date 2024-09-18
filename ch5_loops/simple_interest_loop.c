//calculation of simple interest for 3 sets of p,r,t
#include<stdio.h>
int main()
{
    int p,t;
    float r,sim;
    int count =1;
    while(count<=3)
    {
        printf("enter the principal amount: ");
        scanf("%d",&p);
        printf("enter the time taken: ");
        scanf("%d",&t);
        printf("enter the rate of interst: ");
        scanf("%f",&r);
        sim=p*r*t/100;
        printf("the simple interest is %f\n",sim);
        count++;
       continue;
    }
    return 0;
}