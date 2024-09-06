#include<stdio.h>
int main()
{
	int a;int i=1;int count=0;
	printf("enter a number: ");
	scanf("%d",&a);
	if(a==0||a==1)
	{
		printf("neither prime nor composite");
		return 0;
	}
	do
	{
		if(a%i==0)
		{
			count++;
		}
		i++;
	}while(i!=a);
	if(count<2)
	{
		printf("prime");
	}
	else
	{
		printf("composite");
	}
	return 0;
}
