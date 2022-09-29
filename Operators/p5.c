// C program to clear nth bit of a number.


#include<stdio.h>
int main()
{
	int num,n,bit_pos;
	printf("Enter the num value:");
	scanf("%d",&num);
printf("\nBinary value of num= %d\n",num);
	for(int i=31;i>=0;i--)
	{
		if((num>>i)&1)
			printf("1");
		else
			printf("0");
	}
	printf("\nEnter the bit_pos to set the nth bit:");
	scanf("%d",&bit_pos);
	n=num & ~(1<<bit_pos);
	printf("nth bit cleared\n");
	printf("before the nth bit set value=%d\n",num);
	printf("After the nth bit set value=%d\n",n);
	for(int i=31;i>=0;i--)
	{
		if((n>>i)&1)
			printf("1");
		else
			printf("0");
	}

}

