#include<stdio.h>
#include"sumofArray.h"
int main()
{
	int a[3];int b[6];int k;int i;
	printf("enter 3 numbers: ");
	for(i=0;i<3;i++)
	{
		scanf("%d",a+i);
	}
	printf("sum1=%d\n",sum(a,3));
	printf("enter 6 elements: ");
	for(i=0;i<6;i++)
	{
		scanf("%d",b+i);
	}
	printf("sum1=%d\n",sum(b,6));
	return 0;
}
