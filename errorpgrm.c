#include<stdio.h>
struct password
{
	char fb[20];
	char google[20];
	char msteam[20];
	char name1[7];
	char name2[7];
	char name3[7];	
}m;
int main()
{
	FILE *fp;
	fp=fopen("pw.txt","wb");
	printf("enter a types of media and its password:\n");
	gets(m.name1);
	gets(m.fb);
	gets(m.name2);
	gets(m.google);
	gets(m.name3);
	gets(m.msteam);
	fwrite(&m,sizeof(m),1,fp);
	return 0;	
}
