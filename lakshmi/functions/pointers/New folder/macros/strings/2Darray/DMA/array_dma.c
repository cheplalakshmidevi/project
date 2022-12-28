#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a1,*a2,*a3,s1,s2,s3,i,j,temp=0;
	printf("enter size for array1 and array2: \n");
	scanf("%d%d",&s1,&s2);
	a1=(int*)malloc(s1 * sizeof(int));
	a2=(int*)malloc(s2 * sizeof(int));
	a3=(int*)malloc(s3 * sizeof(int));
	printf("enter %d value for array1 \n",s1);
	for(i=0;i<s1;i++)
		scanf("%d",&a1[i]);
	printf("enter %d value for array2 \n",s2);
	for(i=0;i<s2;i++)
		scanf("%d",&a2[i]);
	printf("the elements in array1 are: \n");
	for(i=0;i<s1;i++)
		printf("%d\n",a1[i]);
	printf("the elements in array2 are: \n");
	for(i=0;i<s2;i++)
		printf("%d\n",a2[i]);
	printf("............................\n");
	for(i=0;i<s1;i++)
	{
		a3[i]=a1[i];
	}
	for(i=0,j=s1;i<s2;j++,i++)
	{
		a3[j]=a2[i];
	}
	printf("the elements of array1 and array2 in array3 are:\n");
	for(i=0;i<s1+s2;i++)
	{
		for(j=0;j<(s1+s2)-1;j++)
		{
			if(a3[j]<a3[j+1])
			{
				temp=a3[j+1];
				a3[j+1]=a3[j];
				a3[j]=temp;
			}
		}
	}
	for(i=0;i<s1+s2;i++)
	{
		printf("%d\n",a3[i]);
	}
	return 0;
}