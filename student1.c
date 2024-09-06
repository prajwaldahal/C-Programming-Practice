#include<stdio.h>
struct student
{
	char name[20];
	char address[50];
	int age;
	float height;
}s[4];
int main()
{
	int i; FILE *fp;
	fp=fopen("student.txt","r");
	fread(s,sizeof(s),1,fp);
	for(i=0;i<4;i++)
		printf("%s %s %d %.2f",s[i].name,s[i].address,s[i].age,s[i].height);
	return 0;
}	

