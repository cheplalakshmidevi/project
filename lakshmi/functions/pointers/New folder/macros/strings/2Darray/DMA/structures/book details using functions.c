#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct book
{
        int bkid;
        char bkname[20];
        char bkauthor[20];
        float bkprice;
}bk;
#define SIZE 3
void accept(bk*);
void display(bk*);
int main()
{
        bk b[SIZE];
        accept(b);
        display(b);
        return 0;
}
void accept(bk *bptr)
{
        int i;
        for(i=0;i<SIZE;i++)
        {

        printf("enter %d  book details id,price,bkname,bkauthor:\n",i+1);
        scanf("%d%f",&bptr[i].bkid,&bptr[i].bkprice);
        while(getchar()!='\n');
        fgets(bptr[i].bkname,20,stdin);
        bptr[i].bkname[strlen(bptr[i].bkname)-1]='\0';
        fgets(bptr[i].bkauthor,20,stdin);
        bptr[i].bkauthor[strlen(bptr[i].bkauthor)-1]='\0';
}
}
void display(bk *bptr
                )
{
        int i;
        printf("book details::\n");
 
        for(i=0;i<SIZE;i++)
        {
        printf("%d %f %s %s\n",(bptr+i)->bkid,(bptr+i)->bkprice,(bptr+i)->bkname,(bptr+i)->bkauthor);
}
}