#include<stdio.h>
int main()
{
	int a[15],i;int g=0;
	printf("enter 15 numbers below:\n\n");
	for (i=0;i<15;i++)
	{
		printf("enter number%d: ",i+1);
		scanf("%d",&a[i]);
	}
	for (i=0;i<15;i++)
	{
		if(a[i]>g)
		{
			g=a[i];
		}
	}
	printf("\ngreatest num=%d",g);
	return 0;
}
