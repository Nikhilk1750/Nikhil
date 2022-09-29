//  C program to swap two numbers using bitwise operator

#include<stdio.h>
int main()
{
int a=10,b=20;
printf("Before swaping the values Binary value of a %d\n",a);
for(int i=31;i>=0;i--)
{
if((a>>i)&1)
printf("1");
else
printf("0");
}
printf("\n");
printf("Before swaping the values Binary value of b %d\n",b);
for(int i=31;i>=0;i--)
{
if((b>>i)&1)
printf("1");
else
printf("0");
}
printf("\n");
a^=b^=a^=b;
printf("After swaping the values Binary value of a %d\n",a);
for(int i=31;i>=0;i--)
{
if((a>>i)&1)
printf("1");
else
printf("0");
}
printf("\n");
printf("After swaping the values Binary value of b %d\n",b);
for(int i=31;i>=0;i--)
{
if((b>>i)&1)
printf("1");
else
printf("0");
}
printf("\n");
}
