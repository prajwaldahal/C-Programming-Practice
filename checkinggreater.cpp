#include<stdio.h>
int main()
{
	double a,b;
	printf("enter a 1st decimal number");
	scanf("%lf",&a);
	printf("enter a second number");
	scanf("%lf",&b);
	if(a>b)
	{
		printf("%lf is greater",a);
	}
	else
	{
	printf("%lf is greater",b);
	}
return 0;
}
