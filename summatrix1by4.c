#include<stdio.h>
int main()
{
	int a[5],b[5],i,sum[5];
	printf("enter 5 numbers below:\n\n");
	for (i=0;i<5;i++)
	{
		printf("enter number%d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n\nenter again 5 numbers...\n");
	for (i=0;i<5;i++)
	{
		printf("enter number%d: ",i+1);
		scanf("%d",&b[i]);
	}
	for (i=0;i<5;i++)
	{
		sum[i]=a[i]+b[i];
	}
	printf("\ncorresponding sum result:\n");
	for (i=0;i<5;i++)
	{
		printf("%d\n",sum[i]);
	}
	return 0;
}

