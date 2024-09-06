#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int **a,**b,**sum;int m,n,m1,n1;int i,j;
	printf("enter a number of rows and columns of matrix1: ");
	scanf("%d%d",&m,&n);
	a=(int**)malloc(m*sizeof(*a));
	b=(int**)malloc(m*sizeof(*b));
	for(i=0;i<n;i++)
	{
		a[i]=(int*)malloc(n*sizeof(a));
		b[i]=(int*)malloc(n*sizeof(b));
	}
	sum=a;
	printf("enter a 1st matrix");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",*(a+i)+j);
		}
	}
	printf("enter a second matsrix: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",*(b+i)+j);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
