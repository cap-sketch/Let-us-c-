//auto storage class
#include<stdio.h>
int main()
{
    auto int i=1;
    {
        auto int i=2;
        {                                 //each value of i has different scope
            auto int i=3;
            printf("%d",i);
        }
        printf("%d",i);
    }
    printf("%d",i);
    return 0;
}