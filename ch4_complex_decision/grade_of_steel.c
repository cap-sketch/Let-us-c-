//grade of steel
#include<stdio.h>
int main()
{
    int hard,ten;
    float car;
    printf("the hardness is : ");
    scanf("%d",&hard);
    printf("the carbon content  is : ");
    scanf("%f",&car);
    printf("the tensile strength is : ");
    scanf("%d",&ten);
    if(hard > 50 && car < 0.7 && ten > 5600)
    printf("grade is 10");
    else if(hard>50 && car<0.7)
    printf("grade is 9");
    else if(car<0.7 && ten >5600)
    printf("grade is 8");
    else if(hard>50 && ten >5600)
    printf("grade is 7");
    else if(hard>50 || car<0.7 || ten>5600)
    printf("grade is 6");
    else
    printf("grade is 5");

return 0;
}