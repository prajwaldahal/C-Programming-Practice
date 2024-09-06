#include<stdio.h>
int main()
{
	int i;int n; int a[i];int sum=0;
	printf("enter a number of things you have bought: ");
	scanf("%d",&n);
	printf("enter a price of those things below: ");
	for(i=0;i<n;i++)
	{
		printf("enter price(%d): ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("total expenses=%d",sum);
	return 0;
}
