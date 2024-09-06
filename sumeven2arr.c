#include<stdio.h>
void sum(int *a,int n)
{
	int i;int sum=0;
	printf("enter a %d numbers: ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
		if(a[i]%2!=0)
			continue;
		sum+=a[i];
	}
	printf("sum=%d",sum);
}
int main()
{
	int *a;int n;
	printf("enter a list of number you have: ");
	scanf("%d",&n);
	sum(a,n);
	return 0;
}
