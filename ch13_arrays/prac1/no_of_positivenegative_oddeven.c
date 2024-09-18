//postive,negative or even,odd
#include<stdio.h>
int main()
{
     int x;
     int pos=0,zero=0,neg=0,even=0,odd=0;
    printf("enter the no. of elements in an array: ");
    scanf("%d",&x);
    int a[x];
    printf("enter the elements: ");
    for(int i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<x;i++)
    {
        if(a[i]>0)
        {
            if(a[i]%2==0)
            even++;
            else
            odd++;
            pos++;
        }
        else if(a[i]==0){
        zero++;}
        else {
        neg++;
        }
    }
    printf("positives=%d ,negative=%d ,zero=%d ,even=%d ,odd=%d",pos,neg,zero,even,odd);
}