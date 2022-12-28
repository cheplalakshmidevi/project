#include "header.h"
void read_file(LL *head,char fname[],FILE *fp)
{
char name[20];
LL *list=head;
fflush(stdin);
fprintf(stdout,"enter file name to read\n");
fgets(fname,20,stdin);
fp=fopen(fname,"r");
if(fp!=NULL)
{
fprintf(stdout2,"error:file not found\n want you continue?(y/n)");
ch=getchar();
if(ch=='y')
{
fp=fopen(fname,"w");
}
else
return;
}
}