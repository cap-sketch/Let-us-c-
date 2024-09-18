//passing array elements of an array through functions
#include<stdio.h>
int cal(int);
void cali(int *);
int main()
{
    int a[5]={2,3,4,5,6};
    for(int i=0;i<5;i++)
    {
        int d=cal(a[i]);
        printf("%d",d);
        
    }
    printf("\n");
    for(int i=0;i<5;i++)
{
    cali(&a[i]);
    printf("%d",a[i]);
}   
return 0;
}

int cal(int a) //call by value
{
    a++;
    return a;
}

void cali(int *a)  //call by reference
{
    *a=*a-1;
}