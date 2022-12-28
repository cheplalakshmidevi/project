//allocating memory for 2D array when row and col size both are unknown
#include<stdio.h>
#include<stdlib.h>



int main()
{
   int row,col;
   int i,j;
   int **arr;  


   printf("\nEnter row and col:: ");
   scanf("%d%d",&row,&col);
   
   
   arr = (int**)calloc(row, sizeof(int*) );
   
   
   
   for(i=0;i<row;i++)
   {
       arr[i] = (int*)calloc(col, sizeof(int) );
   }
   
   printf("\nEnter %d values:: ",row*col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
           scanf("%d",&arr[i][j]);
    }
    
    
    printf("\nElements::\n");
    for(i=0;i<row;i++)
    {
         for(j=0;j<col;j++)
             printf("%d  ",arr[i][j]);
        printf("\n");
    }
    
    
    for(i=0;i<row;i++)
          free(arr[i]);    
      
     free(arr);
   
    return 0;
}









