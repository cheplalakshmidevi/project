//program to allocate memory at runtime 
#include<stdio.h>
#include<stdlib.h>


int main()
{
    int size,new_size;
    int *ptr;
    int i;
   int sum=0;
    
    
    printf("\nEnter size for array:: ");
    scanf("%d",&size);
    
    
    ptr = (int*)malloc(size * sizeof(int));    
    ptr = (int*)calloc(size,sizeof(int));
   
    printf("\nEnter values:: ");
    for(i=0;i<size;i++)
        scanf("%d",&ptr[i]);
      
    printf("\nElements::  ");
    for(i=0;i<size;i++)
    {
        printf("%d\t",ptr[i]);
    }

    printf("\nBefore realloc::%u ",ptr);
    
    
    printf("\nEnter how many extra elements? ");
    scanf("%d",&new_size);
    
    ptr = (int*)realloc(ptr, sizeof(int)*(size+new_size) );   
    
    
    printf("\nEnter new values:: ");
    for(i=size; i< size+new_size ;i++)
            scanf("%d",&ptr[i]); 
            
    printf("\nAll Elements::  ");
    for(i=0;i<size+new_size;i++)
    {
        printf("%d\t",ptr[i]);
    }       
    printf("\nAfter realloc::%u ",ptr);
 
    
    free(ptr);    

   return 0;
}







