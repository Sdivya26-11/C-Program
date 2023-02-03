#include<stdio.h>
int main()
{
	int arr1[3][3],arr2[3][3],arr3[3][3],i,j,a,b;
	printf("enter the number of first matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d ",&arr1[i][j]);
		}
		printf("\n");
	}
	printf("enter the number of second matrix:\n");
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			scanf("%d ",&arr2[a][b]);
		}
		printf("\n");
	}
	printf("first matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	printf("second matrix:\n");
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++)
		{
			printf("%d ",arr2[a][b]);
		}
		printf("\n");
	}
	printf("sum of matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			arr3[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",arr3[i][j]);
		}
		printf("\n");
	}
}
