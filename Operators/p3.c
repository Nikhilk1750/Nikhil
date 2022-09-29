//Write a C program to get nth bit of a number.

#include<stdio.h>
int main()
{
	int num,n;
	printf("Enter the num value:");
	scanf("%d",&num);
	printf("Binary value of %d=",num);
	for(int i=31;i>=0;i--)
	{
		if((num>>i)&1)
			printf("1");
		else
			printf("0");
	}
	printf("\nEnter the nth bit:");
	scanf("%d",&n);
	int nth=(num>>n)&1;
	printf("nth bit=%d\n",nth);
}

