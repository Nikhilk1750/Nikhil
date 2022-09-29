// C program to check Most Significant Bit (MSB) of a number is set or not.

#include<stdio.h>
#define INT_SIZE sizeof(int)*8
int main()
{
	int num,msb;
	printf("Enter the num value:");
	scanf("%d",&num);
	printf("Binary value of %d is\n ",num);
	for(int i=31;i>=0;i--)
	{
		if((num>>i)&1)
			printf("1");
		else
			printf("0");
	}
	msb=1<<(INT_SIZE - 1);
	//int bit_value=(num & n);
	if(num&msb)
		printf("\nMSB bit is set\n");
	else
		printf("\nMSB bit is not set\n");
	printf("MSB vlaue %d is\n",msb);
	for(int i=31;i>=0;i--)
	{
		if((msb>>i)&1)
			printf("1");
		else
			printf("0");
	}
	//printf("%d\n",bit_value);
}

