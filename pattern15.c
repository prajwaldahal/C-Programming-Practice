#include<stdio.h>
int main()
{
	int i,j;int v=1;
	for(i=4;i>=0;i--)
	{
		for(j=1;j<=4;j++)
		{
			if(i<=j)
			{
				printf("%4d",v);
			}
			printf("%4c",' ');		
		}
		v++;
		printf("\n");
	}
	return 0;
}
