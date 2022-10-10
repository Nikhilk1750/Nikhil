#include<stdio.h>
void display(float (*arr)[50],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++,printf("\n"))
	{
		for(j=0;j<c;j++)
		{
			printf("%.2f\t",arr[i][j]);
		}
	}
}
int main()
{
	int row,col,i,j;
	printf("Enter the rows and columns value:");
	scanf("%d %d",&row,&col);
	float arr[50][50];
	puts("Enter the array elements: ");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%f",&arr[i][j]);
		}
	}
	display(arr,row,col);
	int r,c;
	puts("Enter to delete the position:");
	scanf("%d %d",&r,&c);
	arr[r][c]=0;
	puts("After deleting an array the elements are:");
	for(i=0;i<row;i++,printf("\n"))
	{
		for(j=0;j<col;j++)
		{
			printf("%.2f\t",arr[i][j]);
		}
	}
}

