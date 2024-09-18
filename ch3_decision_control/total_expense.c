//total expense
#include<stdio.h>
int main()
{
    int price, quantity;
    int d=0;
    printf("enter the price of an item: ");
    scanf("%d",&price);
    printf("enter the quantity of item: ");
    scanf("%d",&quantity);
    if(quantity>1000)
{
     d=price*10/100;
}
int total=price*quantity-d;
printf("the total expense is %d",total);
return 0;
}