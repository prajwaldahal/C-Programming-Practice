#include<stdio.h>
int main()
{
	int i,j;int v=4;
	for(i=4;i>=1;i--)
	{
		v=4;
		for(j=1;j<=4;j++)
		{
			if(i<=j)
			{
				printf("%4d",v);
				v--;
			}
				printf("%4c",' ');
		}
		printf("\n");
		v--;
	}
	return 0;
}
