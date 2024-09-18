//profit or loss
#include<stdio.h>
int main()
{
    int cp,sp;
    printf("enter the cost price for an item: ");
    scanf("%d",&cp);
    printf("enter the selling price for an item : ");
    scanf("%d",&sp);
    if( cp > sp)
    printf("the loss is %d",cp-sp);
    else if(sp >cp)
    printf("the profit is %d",sp-cp);
    else
    printf("no profit or loss");
    return 0;

}