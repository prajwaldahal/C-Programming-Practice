/*WAP to read a text from file and capitalize  the text and store in another file .*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	FILE *fp;
	fp=fopen("capital.txt","w+");
	fputs("we are suffering from corona",fp);
	fgets(a,100,fp);
	fclose(fp);
	/*remove("capital.txt");*/
	strupr(a);
	fp=fopen("restore.txt","w");
	fputs(a,fp);
	fclose(fp);
	return 0;
}
