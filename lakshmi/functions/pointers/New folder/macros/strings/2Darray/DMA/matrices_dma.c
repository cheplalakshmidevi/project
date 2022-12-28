#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,row1,row2,col1,col2;
	int *arr1,*arr2,*sum;
	printf("enter the row and col of matrix A:\n");
	scanf("%d%d",&row1,&col1);
	printf("enter the row and col of matrix B:\n");
	scanf("%d%d",&row2,&col2);
	if(col1==row2)
	{
		arr1=(int*)calloc(row1*col1,sizeof(int));
		arr2=(int*)calloc(row2*col2,sizeof(int));
		sum=(int*)calloc(row1*col2,sizeof(int));
		printf("enter the elements of matrix A:\n");
		for(i=0;i<row1;i++)
		{
			for(j=0;j<col1;j++)
			{
				scanf("%d",(arr1+i*col1+j));
			}
		}
		printf("enter the elements of matrix B:\n");
		for(i=0;i<row2;i++)
		{
			for(j=0;j<col2;j++)
			{
				scanf("%d",(arr2+i*row2+j));
			}
		}
		printf("Addition:\n");
		for(i=0;i<row1;i++)
		{
			for(j=0;j<col1;j++)
			{
				*(sum+i*col1+j)=*(arr1+i*col1+j)+(*(arr2+i*row2+j));
			}
		}
		printf("Sum of matrices of A and B:\n");
		for(i=0;i<row1;i++)
		{
			printf("\n");
			for(j=0;j<col1;j++)
			{
				printf("%d\t",*(sum+i*col1+j));
			}
		}
	}
	return 0;
}