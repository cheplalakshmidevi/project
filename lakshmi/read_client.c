#include "read.h"
int main()
{
        FILE *fp=NULL;
        char fname[20];
        DLL *head=NULL;
        char ch;
        head=(DLL*)malloc(sizeof(DLL));
        head->next=head->prev=NULL;
        head->line_no=0;

                switch(ch)
                {
                        case READ:
                                read_file(head,fname,fp);
                                break;
                        case EXIT:
                                exit(0);
                }

}