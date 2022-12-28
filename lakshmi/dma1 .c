//using array of pointers to allocate memory for 2D array
//when row is fixed and column size is unknown
#include<stdio.h>
#include<stdlib.h>

#define ROW 3

int main()
{
   int *arr[ROW];
   int col;
   int i,j;
   
   
   printf("\nEnter col-size:: ");
   scanf("%d",&col);
   
   
   
   for(i=0;i<ROW;i++)
   {
       arr[i] = (int*)calloc(col, sizeof(int));
   }
 
    printf("\nEnter %d values:: ",ROW*col);
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<col;j++)
           scanf("%d",&arr[i][j]);
    }
    
    
    printf("\nElements::\n");
    for(i=0;i<ROW;i++)
    {
         for(j=0;j<col;j++)
             printf("%d  ",arr[i][j]);
        printf("\n");
    }
    
    
    for(i=0;i<ROW;i++)
          free(arr[i]);    


   return 0;
}











