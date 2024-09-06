#include<stdio.h>
int main()
{
	FILE *f;	
	int a[6],i;
	f=fopen("num.txt","w");
	printf("enter 6 numbers below:\n");
	for (i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
		for (i=0;i<6;i++)
	{
		fprintf(f,"%4d",a[i]);  /*write a data into a file*/
	}
	return 0;
}
