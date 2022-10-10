#include<stdio.h>
int row,col,arr;
void scan(int (*arr1)[row][col]);
void print(int (*arr1)[row][col]);
void Add(int (*arr1)[row][col],int (*arr2)[row][col]);
int main()
{
	puts("Enter the arr:");
	scanf("%d",&arr);
	puts("Enter the row and columns value:");
	scanf("%d %d",&row,&col);
	int arr1[arr][row][col],arr2[arr][row][col];
	puts("Ente the array1n elements:");
	scan(arr1);
	print(arr1);
	puts("Ente the array2 elements:");
	scan(arr2);
	print(arr2);
	Add(arr1,arr2);
}

void scan(int (*arr1)[row][col])
{
	int i,j,k;
	for(i=0;i<arr;i++)
	{
		for(j=0;j<row;j++)
		{
			for(k=0;k<col;k++)
			{
				scanf("%d",&arr1[i][j][k]);
			}
		}
	}
}
void print(int (*arr1)[row][col])
{
	int i,j,k;
	for(i=0;i<arr;i++)
	{
		for(j=0;j<row;j++,printf("\n"))
		{
			for(k=0;k<col;k++)
			{
				printf("%d\t",arr1[i][j][k]);
			}
		}
		printf("\n");
	}
}
void Add(int (*arr1)[row][col],int (*arr2)[row][col])
{
	int i,j,k;
	int sum[arr][row][col];
	for(i=0;i<arr;i++)
	{
		for(j=0;j<row;j++)
		{
			for(k=0;k<col;k++)
			{
				sum[i][j][k]=arr1[i][j][k]+arr2[i][j][k];
			}
		}
	}
	printf("sum of arrays:\n");
	print(sum);
}
