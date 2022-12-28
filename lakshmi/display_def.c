//definition file for display command

#include"display.h"

void displaylist()
{
        int line_no;
        struct node *tmp;
        if(stnode == NULL)
        {
                printf(" list is empty.");
        }
        else
        {
                tmp = stnode;
                while(tmp != NULL)
                {
                        printf("data = %d\n",tmp->line_no);
                        tmp = tmp->nextptr;
                }
        }
}