#include<stdio.h>
int main()
{
	int a[15],i;int sum=0;int count=0;
	printf("enter 15 numbers below:\n\n");
	for (i=0;i<15;i++)
	{
		printf("enter number%d: ",i+1);
		scanf("%d",&a[i]);
	}
		for (i=0;i<15;i++)
	{
		if(a[i]%2==1)
		{
		sum+=a[i];
		count++;
		}
		
	}
	printf("\navg=%f",sum/(float)count);
	return 0;
}
