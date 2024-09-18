//positive,negative and zeroes
#include<stdio.h>
int main()
{
    int a,i;
    int x=0,y=0,z=0;
    printf("enter the total numbers: ");
    scanf("%d",&a);
    int n[a]; 
     printf("enter the number: ");
    while(a>0)
    {
       
        scanf("%d",&n[i]);
        if(n[i]>0)
          x++;
         else if(n[i]<0)
          y++;
         else if(n[i]==0)
          z++; 
          a--;
    }
    printf("total positive numbers are %d",x);
    printf("total negative numbers are %d",y);
    printf("total zeroes are %d",z);
    return 0;

}