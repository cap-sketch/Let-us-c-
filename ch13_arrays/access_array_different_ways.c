//accessing array elements in different ways 
#include<stdio.h>
int main()
{
    int a[]={2,3,4,5,6};
    int *b=a;
    for(int i=0;i<5;i++)
    {
        printf("address=%u ",&a[i]);
        printf("element=%d %d ",a[i],*(a+i));
        printf("%d %d \n",*(i+a),i[a]);
    }
}