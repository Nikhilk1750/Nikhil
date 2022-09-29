// C program to set nth bit of a number.


#include<stdio.h>
int main()
{
	int num,n,bit_pos;
	printf("Enter the num value:");
	scanf("%d",&num);
	printf("Enter the bit_pos to set the nth bit:");
	scanf("%d",&bit_pos);
	n=num|(1<<bit_pos);
	printf("nth bit set with 1\n");
	printf("before the nth bit set value=%d\n binary value of %d is ",num,num);
	for(int i=31;i>=0;i--)
	{
		if((num>>i)&1)
			printf("1");
		else
			printf("0");
	}
	printf("\nAfter the nth bit set value=%d\n",n);
	printf("Binary value of %d is ",n);
	for(int i=31;i>=0;i--)
	{
		if((n>>i)&1)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}

