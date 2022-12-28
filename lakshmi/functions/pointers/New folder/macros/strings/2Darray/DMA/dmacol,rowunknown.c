#include<stdio.h>
#include<stdlib.h>

int main()
{
int row;
int col;
int i,j;
int **arr;

printf("\nenter row and column:");
scanf("%d%d",&row,&col);
arr=(int**)calloc(row,sizeof(int*));
for(i=0;i<row;i++)
{
    arr[i]=(int*)calloc(col,sizeof(int));
}
printf("\n enter %d values:",row*col);
for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    scanf("%d",&arr[i][j]);
}
printf("\nelements::\n");
for(i=0;i<row;i++)
{
    for(j=0;i<col;j++)
    printf("%d",arr[i][j]);
    printf("\n");
}
for(i=0;i<row;i++)
free(arr[i]);
free(arr);
return 0;
    
}
