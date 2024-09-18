//writing to a file using putc
#include<stdio.h>
int main()
{
    FILE *fp;
    char str[30];
    fp=fopen("data3.txt","w");
    if(fp==NULL)
    {
        printf("file cannot open");
        return 1;
    }
    printf("enter your name: ");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        fputc(str[i],fp);
    }
    fclose(fp);
    return 0;
}