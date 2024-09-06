#include<stdio.h>
int main()
{
	FILE *fp;int a;
	fp=fopen("trial2.txt","r");
	printf("cursor at begining:%d\n",ftell(fp));
	fseek(fp,21,0);
	printf("cursor at%d position after using fseek\n",ftell(fp));
	rewind(fp);
	printf("cursor is at %d position after using rewind\n",ftell(fp));
	return 0;
}
