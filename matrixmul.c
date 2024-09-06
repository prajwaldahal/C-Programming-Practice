#include<stdio.h>
int main()
{
	int a[3][3]; int b[3][3];int mul[3][3];
	int i,j,k;
	printf("enter elements of 1st 2*3 matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter elements of 2nd 3*2 matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			mul[i][j]=0;
			for(k=0;k<3;k++)
			{
				mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
	return 0;
}
