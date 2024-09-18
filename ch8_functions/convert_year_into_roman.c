//convert year into roman equivalent
#include<stdio.h>
int cal(int,int,char);
int main()
{
   int yr;
   printf("enter any year: ");
   scanf("%d",&yr);
   yr=cal(yr,1000,'m');
   yr=cal(yr,500,'d');
   yr=cal(yr,100,'c');
   yr=cal(yr,50,'l');
   yr=cal(yr,10,'x');
   yr=cal(yr,5,'v');
   yr=cal(yr,1,'i');
   
  return 0;
}

int cal(int yr,int num,char a)
{
        int d=yr/num;
        for(int i=1;i<=d;i++)
        {
            printf("%c",a);
        }
        return (yr%num);

    
}