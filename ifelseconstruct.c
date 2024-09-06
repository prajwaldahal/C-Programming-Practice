#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a number");
	scanf("%d",&a);
	printf("enter a second number");
	scanf("%d",&b);
	if(a>b)
	{
		printf("sum=%d",a+b);
	}
	else if (b>a)
	{
		printf("product=%d",a*b);
		
	}
	else
	{
		printf("average=%f",a);
	}
	return 0;
}
