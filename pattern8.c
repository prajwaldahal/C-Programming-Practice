#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		printf("\n");
		for(j=1;j<=4;j++)
		{
			if(i<=j)
			{
				printf("%4d",i);	
			}
			else
			{
				printf("%4c",' ');
			}
		}
	}
	return 0;
}
