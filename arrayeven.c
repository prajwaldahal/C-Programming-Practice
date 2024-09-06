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
		printf("\nentered even numbers are:\n\n");
		for (i=0;i<15;i++)
	{
		if(a[i]%2==0)
		{
		printf("%d\t",a[i]);
		}
	}
	return 0;
}
