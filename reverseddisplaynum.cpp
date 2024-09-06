#include<stdio.h>
int main()
{
	int a[15],i;
	printf("enter 15 numbers below:\n\n");
	for (i=0;i<15;i++)
	{
		printf("enter number%d: ",i+1);
		scanf("%d",&a[i]);
	}
		printf("\t");
		for (i=14;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
