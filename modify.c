#include<stdio.h>
#include<string.h>
struct student
{
	char name[50];
	int age;
	char address[20];
}s[3];
int main()
{
	FILE *fp;
	char a[50];int size;int i;int p=0;
	fp=fopen("read.txt","w+");
	for(i=0;i<3;i++)
	{
		printf("enter a name: ");
		fflush(stdin);
		gets(s[i].name);
		printf("enter a address: ");
		fflush(stdin);
		gets(s[i].address);
		printf("enter a age: ");
		scanf("%d",&s[i].age);
	}
	size=sizeof(s);
	fwrite(s,sizeof(s),1,fp);
	printf("enter a name to change: ");
	fflush(stdin);
	gets(a);
	top:
	if(strcmp(a,s[p].name)==0)
	{
		printf("enter a name: ");
		scanf("%s",s[p].name);
		printf("enter a address:");
		scanf("%s",s[p].address);
		printf("enter a age:");
		scanf("%d",s[p].age);
		fseek(fp,-size,1);
		fwrite(s,sizeof(s),1,fp);
		goto end;
	}
	p++;
	if(!feof(fp))
		goto top;
	end:
	return 0;
}
