//wap for struct book
#include<stdio.h>
#include<string.h>
typedef struct
{
        int bk_id;
        char bk_name[20];
        float bk_price;
        char bk_author[20];
}book;
int main()
{
        book b1;
        printf("enter details of book\n");
        scanf("%d%f",&b1.bk_id,&b1.bk_price);
        while(getchar()!='\n');
        fgets(b1.bk_name,20,stdin);
        fgets(b1.bk_author,20,stdin);
        b1.bk_name[strlen(b1.bk_name)-1]='\0';
        b1.bk_author[strlen(b1.bk_author)-1]='\0';
        printf("\n book deatails :: %d %s %f %s\n",b1.bk_id,b1.bk_name,b1.bk_price,b1.bk_author);
        return 0;
}                                                                                                                                                                          ~                      