//CALCULATE SALARY
#include<stdio.h>
int main()
{
    char gen,qual;
    int year;
    int salary;
    printf("enter your gender(M/F): \n enter your qualifications(P/G):  ");
    scanf(" %c %c",&gen,&qual);
    printf("enter years of service: ");
    scanf(" %d",&year);
    if((gen=='M' && year>=10 && qual=='P'))
    salary=11000;
    else if((gen=='M' && year>=10 && qual=='G'))
    salary=10000;
    else if((gen=='M' && year<10 && qual=='P'))
    salary=10000;
    else if((gen=='M' && year<10 && qual=='G'))
    salary=7000;
    else if((gen=='F' && year>=10 && qual=='P'))
    salary=12000;
    else if((gen=='F' && year>=10 && qual=='G'))
    salary=9000;
    else if((gen=='F' && year<10 && qual=='P'))
    salary=10000;
    else if((gen=='F' && year<10 && qual=='G'))
    salary=6000;
    printf("the salary is %d",salary);
    return 0;
   

}