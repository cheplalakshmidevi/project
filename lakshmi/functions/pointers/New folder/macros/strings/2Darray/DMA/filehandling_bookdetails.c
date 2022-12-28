#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Book{
        int book_id,edition;
        char book_name[20],publisher_name[20],author_name[20];
        float price;
};

int main(){
        FILE *fptr;
        struct Book bk;
        int i;
        fptr=fopen("book_detail.txt","w");
        if(fptr==NULL){
                printf("\nFile not available");
                exit(0);
        }
        do{
                printf("\nEnter book_id,book_name,publisher_name,edition,author_name,price:");
                scanf("%d%s%s%d%s%f",&bk.book_id,bk.book_name,bk.publisher_name,&bk.edition,bk.author_name,&bk.price)
;
                fprintf(fptr,"%d,%s,%s,%d,%s,%f",bk.book_id,bk.book_name,bk.publisher_name,bk.edition,bk.author_name,bk.price);
                printf("\nDo you want to continue(0/1):");
                scanf("%d",&i);
        }while(i!=0);
        fclose(fptr);
        fptr=fopen("book_detail.txt","r");
        if(fptr==NULL){
                printf("\nCannot open the file");
                exit(0);
        }
        while(fscanf(fptr,"%d,%s,%s,%d,%s,%f",&bk.book_id,bk.book_name,bk.publisher_name,&bk.edition,bk.author_name,&bk.price) != -1)
                printf("\n%d,%s,%s,%d,%s,%f",bk.book_id,bk.book_name,bk.publisher_name,bk.edition,bk.author_name,bk.price);
        fclose(fptr);
        return 0;
}