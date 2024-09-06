#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("number.txt","w");
	fprintf(fp,"%d",25);
	fclose(fp);
	return 0;
}
