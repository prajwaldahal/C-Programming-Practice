#include<stdio.h>
int main()
{
	float c[8];
	int i;
	printf("enter a 8 real number below:\n");
	for (i=0;i<8;i++)
	{
		printf("enter number%d: ",i+1);
		scanf("%f",&c[i]);
	}
		for (i=0;i<8;i++)
	{
		printf("%f\t",c[i]);
	}
	return 0;
}
