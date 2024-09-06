#include<stdio.h>
int main()
{
	char a;char b[100][50];int count=2;int i;
	FILE *fp;
	fp = fopen("kcmit.txt","w");
	if(fp==NULL)
	{
		printf("error opening file!");
	}
	fputs("kantipur college of information and technology",fp);
	fclose(fp);
	fp=fopen("kcmit.txt","r");
	while(!feof(fp))
	{
		a=fgetc(fp);
		if(a==' ')
		{
			count++;
		}
	}
	for(i=0;i<count;i++)
	{
		fscanf(fp,"%s",b[i]);
	}
	for(i=0;i<count;i++)
	{
		printf("%s",b[i]);
	}
	return 0;
}
