#include<stdio.h>
int main()
{
	int a[4][5];int i,j;
	printf("enter a element of 4*5 matrix: \n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%4d",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}
