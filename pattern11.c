#include<stdio.h>
int main()
{
	int i,j;int b=1,c=1;int value=1;
	for(i=1; i<=4; i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%4d",value);
			value++;
		}
		printf("\n");
	}
	return 0;
}
