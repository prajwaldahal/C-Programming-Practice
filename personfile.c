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
	fp=fopen("person.txt","w");
	printf("enter name age and height of 4 person:\n");
	for(i=0;i<4;i++)
	{
		scanf("%s%d%f",p[i].name,&p[i].age,&p[i].height);
	}
	for(i=0;i<4;i++)
	{
		fprintf(fp,"%s\t%d\t%.2f\n",p[i].name,p[i].age,p[i].height);
	}
	return 0;
}
