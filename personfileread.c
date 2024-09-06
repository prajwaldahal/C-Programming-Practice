#include<stdio.h>
struct person
{
	char name[40];
	int age;
	float height;
}p[4];
int main()
{
	FILE *fp;
	int i;
	fp=fopen("person.txt","r");
	if(fp==NULL)
	{
		printf("error");
	}
	for(i=0;i<4;i++)
	{
		fscanf(fp,"%s%d%f",p[i].name,&p[i].age,&p[i].height);  
	}
	for(i=0;i<4;i++)
	{
		printf("%s\t%d\t%.2f\n",p[i].name,p[i].age,p[i].height);
	}
	return 0;
}
