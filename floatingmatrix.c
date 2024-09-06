#include<stdio.h>
int main()
{
	float a[5][5];
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%8.2f",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
