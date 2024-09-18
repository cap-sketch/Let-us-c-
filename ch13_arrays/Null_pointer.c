//NULL pointer
#include<stdio.h>
#include<stdlib.h>
int main()
{

    int *p3; 
    p3=(int*)malloc(10*sizeof(int));
    if(p3==NULL)
    {
        printf("memory allocation failed");
        return 1;
    }
    else
    printf("memory allocation successful");
    free(p3);
    return 0;
}