//array of structures
#include<stdio.h>
int main()
{
    struct book{char name;float price;int page;};
    struct book a[10];
    for(int i=0;i<2;i++)
    {
        printf("enter the name,price and no.of pages in a book: ");
        scanf("%c%f%d",&a[i].name,&a[i].price,&a[i].page);
        fflush(stdin);
    }
    for(int i=0;i<2;i++)
    {
        printf("the details for book%d is %c %.1f %d\n",i+1,a[i].name,a[i].price,a[i].page);
    }
    return 0;


}