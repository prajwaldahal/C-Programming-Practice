#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<=4;i++)
	{
		printf("\n");
		for(j=1;j<=4;j++)
		{
			if(i<=j)
			{
				printf("%4d",j);	
			}
			else
			{
				printf("%4c",' ');
			}
		}
	}
	return 0;
}
