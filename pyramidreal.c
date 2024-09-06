#include<stdio.h>
int main()
{
	int i,k; int a=1;int l;
	for(i=5;i>=1;i--)
	{
		for(l=1;l<=i;l++)
	   {
	   	printf(" ");
	   }
		for(k=1;k<=a;k++)
		{
		printf("*");
	}
		a=a+2;
		printf("\n");
	}
	a=9;
	for(i=5;i>=1;i--)
	{
		for(l=5;l>=i;l--)
	   {
	   	printf(" ");
	   }
		for(k=1;k<=a;k++)
		{
		printf("*");
	}
		a=a-2;
		printf("\n");
	}
}
