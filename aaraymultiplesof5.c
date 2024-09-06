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
		printf("\n multiples of 5 are:\n\n");
		for (i=0;i<15;i++)
	{
		if(a[i]%5==0)
		{
		printf("%d\n",a[i]);
		}
	}
	return 0;
}
