#include<stdio.h>
int main()
{
	int a;int i;int c;int flag;
	printf("enter a number: ");
	scanf("%d",&a);
	if(a==0 || a==1)
	{
		printf("neither prime nor composite");
	}
	else if(a==2||a==3)
	{
		printf("prime");
	}
	else
	{
		c=a/2;
		for(i=1;i<=c;i++)
		{
			if(a % i==0)
			{
				flag=1;
			}
			else
			{
				flag=0;
			}
		}
		if(flag==1)
		{
			printf("composite");
		}
		else
		{
			printf("prime");
		}
	}
	return 0;
}
