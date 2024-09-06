#include<stdio.h>
int main()
{
	char a[50];
	FILE *fp;
	fp=fopen("trial.txt","r");
	fgets(a,50,fp);
	puts(a);
	return 0;
}
