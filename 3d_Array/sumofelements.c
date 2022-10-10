#include<stdio.h>
int main()
{
	int i,k,j,arr;
	puts("Enter number of two arrays: ");
	scanf("%d",&arr);
	int row,col;
	puts("Enter the rows and columns: ");
	scanf("%d %d",&row,&col);
	float arr1[50][50][50];
	puts("Enter the 3d array elements: ");
	for(i=0;i<arr;i++)
	{
		for(j=0;j<row;j++)
		{
			for(k=0;k<col;k++)
			{
				scanf("%f",&arr1[i][j][k]);
			}
		}
	}

	puts(" 3d array elements are: ");
	for(i=0;i<arr;i++)
	{
		for(j=0;j<row;j++,printf("\n"))
		{
			for(k=0;k<col;k++)
			{
				printf("%.2f\t",arr1[i][j][k]);
			}
		}printf("\n");
	}
	float sum=0;
	for(i=0;i<arr;i++)
	{
		for(j=0;j<row;j++)
		{
			for(k=0;k<col;k++)
			{
				sum=sum+arr1[i][j][k];
			}
		}
	}
	printf("Sum of 3D_array=%.2f\n",sum);
}
