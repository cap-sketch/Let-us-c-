//weight in gm,ton,pound
#include<stdio.h>
void cal(int,float*,float*,float* );
int main()
{ 
    int w;
    float gm,tn,pd;
    printf("enter of a commodity (kg): ");
    scanf("%d",&w);
    cal(w,&gm,&tn,&pd);
    printf("the weight in gm ,tn and pound is %.2f, %.2f , %.2f ",gm,tn,pd);
    return 0;
}

void cal(int w,float* gm,float*tn,float*pd)
{
     *gm=w*1000;
     *tn=w/1000;
     *pd=w*2.204;
}