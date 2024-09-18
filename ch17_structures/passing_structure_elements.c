//passing stucture elements
#include<stdio.h>
#include<string.h>
struct book{
    char name[25];char author[25];int pages;
};
void display1(char*,char*,int);
void display2(struct book);
void display3(struct book*);
int main()
{
    struct book b1={"happiness","vincent",254};
    display1(b1.name,b1.author,b1.pages);
    display2(b1);
    display3(&b1);
   return 0;
}

void display1(char* a,char* b,int c)
{
printf("%s %s %d\n",a,b,c);
}

void display2(struct book a)
{
    printf("%s %s %d\n",a.name,a.author,a.pages);
}
void display3(struct book *b)
{
    printf("%s %s %d\n",b->name,b->author,b->pages);
}