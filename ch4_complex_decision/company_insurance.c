//company insurance
#include<stdio.h>
int main()
{
    int age;
    char sex,m;
    printf("enter your age: ");
    scanf(" %d",&age);
    printf("enter your sex(M/F) :");
    scanf(" %c",&sex);
    printf("enter your marital status(M/U): ");
    scanf(" %c",&m);
    if((m=='M') || (m=='U' && sex=='M' && age>30) || (m=='U' && sex=='F' && age>25))
    printf("the driver is insured");
    else
    printf("the driver is not isured");
    return 0;

}