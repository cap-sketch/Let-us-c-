//smallest domination of notes
#include<stdio.h>
int main()
{
    int n;
    int one,two,five,ten,fifty,hund;
    printf("enter the amount: ");
    scanf("%d",&n);
    hund=n/100;
    n=n%100;
    fifty=n/50;
    n=n%50;
    ten=n/10;
    n=n%10;
    five=n/5;
    n=n%5;
    two=n/2;
    n=n%2;
    one=n/1;
    n=n%1;
    printf("the notes of Rs.100 are %d\n",hund);
    printf("the notes of Rs.50 are %d\n",fifty);
    printf("the notes of Rs.10 are %d\n",ten);
    printf("the notes of Rs.5 are %d\n",five);
    printf("the notes of Rs.2 are %d\n",two);
    printf("the notes of Rs.1 are %d\n",one);
       return 0;



}