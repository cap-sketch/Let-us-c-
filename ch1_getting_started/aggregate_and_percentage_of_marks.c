//aggregate and percentage marks of students
#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,total;
    float per;
    printf("enter marks in subject 1 : ");
    scanf("%d",&s1);
    printf("enter marks in subject 2 : ");
    scanf("%d",&s2);
    printf("enter marks in subject 3 : ");
    scanf("%d",&s3);
    printf("enter marks in subject 4 : ");
    scanf("%d",&s4);
    printf("enter marks in subject 5 : ");
    scanf("%d",&s5);
    total=s1+s2+s3+s4+s5;
    per=total/5;
    printf("the aggregate marks is %d\n percentage is %f",total,per);
    return 0;
}
