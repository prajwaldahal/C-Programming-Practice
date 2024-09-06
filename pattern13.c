#include<stdio.h>
int main()
{
	int i,j;int v=5;
	for(i=1;i<=5;i++)
	{
		v=5;
		for(j=1;j<=5;j++)
		{
			if(i<=j)
			{
				printf("%4d",v);
				v--;
			}
			else
			{
				printf("%4c", ' ');
			}
		}
		printf("\n");
	}
	return 0;
}

