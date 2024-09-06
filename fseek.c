#include<stdio.h>
int main()
{
	FILE *fp;char a[100];
	fp=fopen("college.txt","w+");
	fputs("Kantipur College of Management and Information technology",fp);
	fseek(fp,1,0);
	fgets(a,100,fp);
	puts(a);
	fclose(fp);
	return 0;
}
