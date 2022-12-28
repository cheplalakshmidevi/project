#include "header.h"
void raed_file(DLL *head,char fname[20],FILE *fp)
{
char ch;
DLL *list=head;
if(fp!=NULL)
{
fprintf(stdout,"Error:there is another file open it will be close\n want u continue?(Y/n)");
ch=getchar();
if(ch=='n' || ch=='N')
{
return;
}
else
{
close_file(fp,head);
}
}
system("clear");
fflush(stdin);
fprintf(stdout,"enter file name to read\n");
fscanf(stdin,"%s",fname);
fp=fopen(fname,"r");
if(fp==NULL)
{
fprintf(stdout,"Error:file not found");
exit(0);
}

clear_list(head);

}