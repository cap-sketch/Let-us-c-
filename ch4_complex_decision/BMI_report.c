//BMI report
#include<stdio.h>
int main()
{
   float h,w;
   printf("enter your height(metre):");
   scanf("%f",&h);
   printf("enter your weight(kg):");
   scanf("%f",&w);
   float bmi=w/(h*h);
   if(bmi<15)
   printf("starvation");
   else if(bmi >=15.1 && bmi <=17.5)
   printf("anorexic");
   else if(bmi >=17.6 && bmi <=18.5)
   printf("underweight");
   else if(bmi >=18.6 && bmi <=24.9)
   printf("ideal");
   else if(bmi >=25 && bmi <=25.9)
   printf("overweight");
   else if(bmi >=30 && bmi <=30.9)
   printf("obese");
   else if(bmi >=40)
   printf("morbidly obese");
   else
   printf("invalid data");
   return 0;
}