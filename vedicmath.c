#include<stdio.h>
int main()
{
	int n,i,a;int count=0;int sum1=0,sum2=0;int b;int s;
	printf("enter a number: ");
	scanf("%d",&n);
	s=n;
	for(;n>0;)
	{
		if(count%2==0)
		{
			a=n%10;
			sum1=sum1+a;
			n=n/10;
		}
		else
		{
			a=n%10;
			sum2=sum2+a;
			n=n/10;
		}
		count++;
	}	
	b=sum1-sum2;
	if(b%11==0)
	{
		printf("%d is divisible by 11",s);	
	}
	else if(sum1==sum2)
	{
		printf("%d is divisible by 11",s);
	}
	else
	{
		printf("%d is not divisible by 11",s);
	}
	return 0;
}
