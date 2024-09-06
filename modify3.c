#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;char b[10][50];int i;FILE *myfile;
	fp=fopen("kcmit.txt","r+");
	myfile=fopen("kantipur.txt","w");
	if(fp==NULL)
	{
		printf("error!");
		return 1;
	}
	for(i=0;i<7;i++)
	{
		fscanf(fp,"%s",b[i]);	
	}
	for(i=0;i<6;i++)
	{
		if(strcmp(b[i],"information")==0||strcmp(b[i+1],"technology")==0)
		{
			strcpy(b[i],"IT");	
			break;
		}	
	}
	for(i=0;i<6;i++)
	{
		fprintf(myfile,"%s ",b[i]);
	}
	fclose(fp);
	remove("kcmit.txt");
	fclose(myfile);
	return 0;
}

