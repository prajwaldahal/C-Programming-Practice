#include<stdio.h>
int main()
{
	int i,j;int a=1;int b=7;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(j==a || j==b)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
		a++;
		b--;
	}
	return 0;
}
