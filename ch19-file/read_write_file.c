//writing and reading from the file
#include<stdio.h>
int main()
{
    FILE *fp;
    int emp;
    char ename[30];
    float sal;
    fp=fopen("hello.txt","w");
    printf("enter details of employee(no,name,sal): ");
    scanf("%d%s%f",&emp,ename,&sal);
    fprintf(fp,"%d %s %f",emp,ename,sal);
    fclose(fp);
    //now reading from file
    fp=fopen("hello.txt","r");
    fscanf(fp,"%d%s%f",&emp,ename,&sal);                //here hello.txt is being created and 
    printf("%d\n%s\n%f\n",emp,ename,sal);               //stored in the directory.somewhere...
    fclose(fp);
    return 0;
}