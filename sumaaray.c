#include<stdio.h>
int main()
{
	int a[14],i;int sum=0;
	for (i=0;i<14;i++)
	{
		printf("enter number%d: ",i+1);
		scanf("%d",&a[i]);
	    sum+=a[i];
	}
	printf("sum=%d",sum);
	return 0;
}
