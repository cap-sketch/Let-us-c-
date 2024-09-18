//function which returns sum,average and standard deviation
#include<stdio.h>
#include<math.h>
void cal(int*,int*,double*);
int main()
{
    int sum,avg;
    double stdv;
    cal(&sum,&avg,&stdv);
    printf("the sum is %d\n",sum);
    printf("the avg is %d\n",avg);
    printf("the stdv is %lf\n",stdv);
    return 0;
}

void cal(int *sum,int*avg,double*stdv)
{
    int a[5];
    printf("enter the elements: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int con=0;
    for(int i=0;i<5;i++)
    {
        con=con+a[i];
    }
    *sum=con;
    int total=sizeof(a)/sizeof(a[0]);
    printf("the total number of elements is %d\n",total);
    *avg=*sum/total;
    //standard deviation
    int cons=0;
    for(int i=0;i<total;i++)
        cons=cons+pow(a[i]-(*avg),2);
   double x=sqrt(cons/total);
    *stdv=x;
}