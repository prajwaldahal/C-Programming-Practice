#include<stdio.h>
int main()
{
	FILE *fp;
	int i;char a[6][20];
	fp = fopen("arraystring.txt","r");
	for(i=0;i<6;i++)
	{
		fscanf(fp,"%s",a[i]);
	}
	for(i=0;i<6;i++)
	{
		printf("%s\t",a[i]);
	}
	return 0;
}
