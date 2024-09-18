//passing an array to a function
#include<stdio.h>
void cal(int*,int);
void cali(int [],int);
int main()
{
     int a[4]={1,2,3,4};
    int n=4;
    cal(&a[0],n);
    cali(&a[0],n);
    return 0;
}

void cal(int *a, int n)        //using pointer
{
    for(int i=0;i<n;i++)
    {
        printf("%d",*a);
        a++;
    }
    printf("\n");
}
  
void cali(int a[], int n)       //using subscript
{
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}  