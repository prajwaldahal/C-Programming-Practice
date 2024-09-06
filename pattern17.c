#include<stdio.h>
int main()
{
	int i,j;
	for(i=4;i>=0;i--)
	{
		for(j=0;j<4;j++)
		{
			if(i<=j)
			{
				printf("%4c",'*');
			}
				printf("%4c",' ');		
		}
		printf("\n");
	}
	return 0;
}
