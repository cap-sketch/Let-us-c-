//size of 2d string and string pointer
#include<stdio.h>
int main()
{
    char *mess[]={"hammer and tongs","tooth and nail","spit and polish","you and c"};
    char guess[][20]={"hammer and tongs","tooth and nail","spit and polish","you and c"};
    int a=sizeof(mess);
    int b=sizeof(guess);
    printf("%d\n",a);
    printf("%d",b);
    return 0;
}