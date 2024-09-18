//RGB TO CMYK FORMAT
#include<stdio.h>
int main()
{
    float r,g,b;
    float max;
    float c,m,y,k;
    printf("enter the values of red,green and blue(0 to 255): ");
    scanf("%f%f%f",&r,&g,&b);
    if(r==0 && g==0 && b==0)
    {
        c=m=y=0;
        k=1;
    }
    r=r/255;
    g=g/255;
    b=b/255;
    if(r>g && r>b)
    max=r;
    else if(g>r && g>b)
       max=g;
    else
       max=b;

    float w=max;
    c=(w-max)/w;
    m=(w-g)/w;
    y=(w-b)/w;
    k=1-w;
    printf("the value of cmyk is %f %f %f %f ",c,m,y,k);
    return 0;

}