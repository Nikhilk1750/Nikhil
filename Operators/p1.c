//Write a C program to check Least Significant Bit (LSB) of a number is set or not.


#include<stdio.h>
int main()
{
	int num,n;
	printf("Enter the num value:");
	scanf("%d",&num);
	printf("Binary value of=%d is ",num);
	for(int i=31;i>=0;i--)
	{
		if((num>>i)&1)
			printf("1");
		else
			printf("0");
	}
	n=num & (1<<0);
	printf("\nChecking for LSB bit is set or not:");
	if(n==1)
		printf("\nLSB bit is set with 1");
	else
		printf("\nLSB bit is set with 0\n");
	printf("After the LSB is set or not %d is ",n);
	for(int i=31;i>=0;i--)
	{
		if((num>>i)&1)
		printf("1");
		else
			printf("0");
	}
	printf("\n");
}
