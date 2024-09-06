#include<stdio.h>
int main()
{
	int i,j;
	int a[3][2]= { {64,57},{34,23},{31,43} };
	for(i=0;i<3;i++)
	{
		printf("%d\n",*(a+i));
		for(j=0;j<2;j++)
		{
			printf("address of [%d][%d]=%d=%d\n",i,j,*(a+i)+j,*(*(a+i)+j));
		}
	}
	return 0;	
}
