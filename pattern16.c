#include<stdio.h>
int main()
{
	int i,j;
	for(i=4;i>0;i--)
	{
		for(j=1;j<=4;j++)
		{
			if(i<=j)
			{
				printf("%4c",'*');
			}
			else
			{
				printf("%4c",' ');	
			}	
		}
		printf("\n");
	}
	return 0;
}
