#include<stdio.h>
int main()
{
	int a,b,i,sum=0;
	printf("enter a integer: ");
	scanf("%d",&a);
	printf("enter second integer(>first integer): ");
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
		if(i%7==0)
		{
			sum+=i;
		}
	}
	printf("sum=%d",sum);
	return 0;
}
