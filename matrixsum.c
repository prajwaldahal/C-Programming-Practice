#include<stdio.h>
int main()
{
	int a[3][4]; int b[3][4];int sum[3][4];
	int i,j;
	printf("enter elements of 1st 3*4 matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter elements of 2nd 3*4 matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%4d",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
