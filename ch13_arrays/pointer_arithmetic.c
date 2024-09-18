//pointer arithmetic
#include<stdio.h>
int main()
{
    int x=1,*a;
    float y=2.3,*b;
    char z='a',*c;
    printf("%d %.1f %c\n",x,y,z);
    a=&x;b=&y;c=&z;
    printf("%u %u %u\n",a,b,c);
    a++;b++;c++;
    printf("%u %u %u",a,b,c);
return 0;
}