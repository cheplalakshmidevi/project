#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size;
    int*ptr;
    int i;
    printf("\n enter size of array::");
    scanf("\n%d",&size);
    ptr=(int*)malloc(size*sizeof(int));
    printf("\nenter values::");
    for(i=0;i<size;i++)
    scanf("%d",&ptr[i]);
    printf("\n elements::");
    for(i=0;i<size;i++)
    printf("%d\t",ptr[i]);
    free(ptr);
    return 0;
}