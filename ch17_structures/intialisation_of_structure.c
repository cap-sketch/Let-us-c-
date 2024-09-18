// intialisation of structure 
#include<stdio.h>
int main()
{
    struct book{
        char name;float price;int page;
    };
    struct book b1,b2,b3;
    printf("enter the name,price and no of pages of a the book: ");
    scanf("%c%f%d",&b1.name,&b1.price,&b1.page);

    printf("the data given is : ");
    {
        printf("%c %.2f %d",b1.name,b1.price,b1.page);
    }
    return 0;

}