#include<stdio.h>
int main()
{
	int a;
	do
	{
		printf("enter a number divisible by 7: ");
		scanf("%d",&a);
	}while(a%7!=0);
	printf("input taken=%d",a);
	return 0;
}
