#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;char a[50];char b; char c[8][50];int i=0;char d[2];
	fp=fopen("kcmit.txt","w");
	fputs("kantipur college of management and information technology",fp);
	fclose(fp);
	fp=fopen("kcmit.txt","r+");
	if(fp==NULL)
	{
		printf("error!");
		return 1;
	}
	while(!feof(fp))
	{
		b=getc(fp);
		if(b==' ')
		{
		   i++;		
		}
		else
		{
			d[0]=b;
			strcat(c[i],d);
		}
	}
	for(i=0;i<8;i++)
	{
		printf("\n");
		puts(c[i]);
	}
	return 0;
}
