#include<stdio.h>
#include<stdlib.h>
#define SWAP(a,b) a=a+b;b=a-b;a=a-b
int main()
{
	int *a;int i,j;
	int n;int temp;
	printf("enter how many numbers u want to sort: ");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(*(a+j)<*(a+j+1))
			{
				SWAP(*(a+j),*(a+j+1));
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",*(a+i));
	}
	free(a);
	return 0;
}
