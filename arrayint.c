#include<stdio.h>
int main()
{
	int a[15],i;
	printf("enter 6 numbers below:\n\n");
	for (i=0;i<6;i++)
	{
		printf("enter number%d: ",i+1);
		scanf("%d",&a[i]);
	}
		for (i=0;i<6;i++)
	{
		printf("%4d",a[i]);
	}
	return 0;
}
