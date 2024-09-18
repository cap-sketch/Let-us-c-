//grace marks of a student using switch statement
#include<stdio.h>
int main()
{
    int c;
    printf("enter your class(1,2 or 3): ");
    scanf("%d",&c);
    int n;
    printf("enter the no of subject you have failed: ");
    scanf("%d",&n);
    switch(c)
    {
        case 1:
        if(n>3)
        printf("you don't get any grace");
        else if(n<=3)
        printf("you get a grace of 5 marks");
        break;
        
        case 2:
        if(n>2)
        printf("you don't get any grace");
        else if (n<=2)
        printf("grace is of 4 marks");
        break;
         
        case 3:
        if(n>1)
        printf("you don't get any grace");
        else if(n<=1)
        printf("grace is 5 marks");
        break;

        default:
        printf("enter your details correctly");
    }
    return 0;
}

