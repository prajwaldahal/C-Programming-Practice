#include<stdio.h>
int main()
{
	int a[2][2];
	int i,j;
	printf("enter elements of 2*2 matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nthe matrix is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
