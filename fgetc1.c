#include<stdio.h>
int main()
{
	FILE *fp;char a;
	fp=fopen("trial2.txt","r");
	if(fp==NULL)
		printf("error opening file ");
	top:
		if(!feof(fp))
		{
			a=fgetc(fp);
			putchar(a);	
			goto top;
		}	
	return 0;
}
