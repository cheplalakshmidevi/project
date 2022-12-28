#include "read.h"

DLL *read_file(DLL *head,char fname[20],FILE *fp)
{
        char ch;
        DLL *temp=NULL;
        if(fp!=NULL)
        {
        fprintf(stdout,"enter file name to read\n.");
        fgets(stdin,"%s",fname);
        fp=fopen(fname,"r");

        elseif(fp==NULL);
                {
                        fprintf(stdout,"error:file not found");
                         close_file(fp,head);
                }
        }
        else
        {
        return;
        }
char * extract_file_name(char *path)
{
    int i;
    int len = strlen(path);
    int flag=0;
    printf("\nlength of %s : %d",path, len);

    
    for(int i=len-1; i>0; i--)
    {
        if(path[i]=='\\' || path[i]=='//' || path[i]=='/' )
        {
            flag=1;
            path = path+i+1;
            break;
        }
    }
    return path;
}


}