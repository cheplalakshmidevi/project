#include <stdio.h>
#include <stdlib.h>
#include <string.h>,



struct node
{
        int line_no;
        struct node *nextptr;
}*stnode;


void displaylist();