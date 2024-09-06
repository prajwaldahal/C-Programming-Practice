#include<stdio.h>
int main()
{
	FILE *fp;	
	int a[6],i;
	fp=fopen("num.txt","r");
	for (i=0;i<6;i++)
	{
		fscanf(fp,"%d",&a[i]);
	}
		for (i=0;i<6;i++)
	{
		 printf("%4d",a[i]); 
	}
	return 0;
}
