#include<stdio.h>
void add(int a, int b,float arr[50][50],float arr2[50][50])
{
	int i,j;
float sum[100][100];

	for(i=0;i<a;i++)
	{
		printf("\n");
		for(j=0;j<b;j++)
		{
			sum[i][j]=arr[i][j]+arr2[i][j];
			printf("%.2f\t", sum[i][j]);
		}
	}
}
void display(float arr[50][50],int r,int c)
{
	int i,j;
puts("Array elements are: ");
	for(i=0;i<r;i++)
	{
		printf("\n");
		for(j=0;j<c;j++)
		{
			printf("%.2f ",arr[i][j]);
		}
	}
}
int main()
{
	int i,j,r,c;
	puts("Enter the rows and columns: ");
	scanf("%d %d",&r,&c);
	float arr1[50][50],arr2[50][50];
	puts("Enter the array1 elements: ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%f",&arr1[i][j]);
		}
	}
	puts("\nEnter the array2 elements: ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%f",&arr2[i][j]);
		}
	}
	display(arr1,r,c);
printf("\n");
	display(arr2,r,c);
	add(r,c,arr1,arr2);
	printf("\n");
}
