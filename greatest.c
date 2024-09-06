#include<stdio.h>
int main()
{
	int a[15],i;int s;
	printf("enter 15 numbers below:\n\n");
	for (i=0;i<15;i++)
	{
		printf("enter number%d: ",i+1);
		scanf("%d",&a[i]);
	}
		s=a[0];
		for (i=0;i<15;i++)
	{
		if(a[i]<s)
		{
		s=a[i];
		}
	}
	printf("\nsmallest num=%d",s);
	return 0;
}
