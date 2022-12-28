// read command header file
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define READ 'read'
#define EXIT 'exit'
//struct DLL to read file with given filename and loads its content in text buffer

typedef struct doubly_LL
{
        char buffer_l[1000];      //declaring buffer size
        int line_no;              //declaring line number
        struct doubly_LL *prev,*next;
}DLL;
DLL *read_file(DLL *,FILE*,char*[]);  //function to read file