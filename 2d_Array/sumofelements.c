#include<stdio.h>
int main()
{
	int r,c;
	int i,j;
	printf("Enter the number of row and columns:");
	scanf("%d %d",&r,&c);
	int arr[r][c];
	puts("Enter the array elements: ");

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		printf("\n");
		for(j=0;j<c;j++)
		{
			printf("%d ",arr[i][j]);
		}
	}
	printf("\n");
	int sum=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum=sum+arr[i][j];
		}
	}
	printf("sum=%d\n",sum);
}

