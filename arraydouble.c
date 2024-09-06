#include<stdio.h>
int main()
{
	double c[7];
	int i;
	printf("enter a 7 real number below:\n");
	for (i=0;i<7;i++)
	{
		printf("enter number%d: ",i+1);
		scanf("%lf",&c[i]);
	}
		printf("\n");
		for (i=0;i<7;i++)
	{
		printf("%lf\t",c[i]);
	}
	return 0;
}
