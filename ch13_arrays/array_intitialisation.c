//array intitialisation
#include<stdio.h>
int main()
{
    int n;
    printf("enter the no. of students in a class: ");
    scanf("%d",&n);
    int a[n];
    int sum=0;
    printf("enter the marks of students: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    int avg=sum/n;
    printf("the avg is %d",avg);
    return 0;
}