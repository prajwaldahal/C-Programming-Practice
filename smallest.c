#include<stdio.h>
int main()
{
	int a[15],i;int smallest;
	printf("enter 15 numbers below:\n\n");
	for (i=0;i<15;i++)
	{
		printf("enter number%d: ",i+1);
		scanf("%d",&a[i]);
	}
		smallest=a[0];
		for (i=0;i<15;i++)
	{
		if(a[i]<smallest);
		{
		smallest =a[i];
		}
	}
	printf("\nsmallest num=%d",smallest);
	return 0;
}
