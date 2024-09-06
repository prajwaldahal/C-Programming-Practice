#include<stdio.h>
int main()
{
	FILE *fptr;
	int a[15],i;int g;
	fptr=fopen("arraygreatest15.txt","w");
	printf("enter 15 numbers below:\n\n");
	for (i=0;i<15;i++)
	{
		printf("enter number%d: ",i+1);
		scanf("%d",&a[i]);
	}
		for (i=0;i<15;i++)
	{
		if(a[i]>g)
		{
		g=a[i];
		}
	}
	fprintf(fptr,"\ngreatest num=%d",g);
	return 0;
}
