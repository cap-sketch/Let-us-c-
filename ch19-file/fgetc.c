//reading from file using getc()
#include<stdio.h>
int main()
{
    FILE* fp;
    char ch;
    fp=fopen("simple2.txt","r");     //simple2 should already exist or it will give a null
    if(fp==NULL)                     // it will all open if it exist in current directory only
    {                               // if you want to open from anywhere you have to specify the path
    printf("file does not exist");     
    return 1;
    }
    while(1)
    {
        ch=getc(fp);
        if(ch==EOF)
        break;
        printf("%c",ch);
    }
    fclose(fp);
    return 0;

}