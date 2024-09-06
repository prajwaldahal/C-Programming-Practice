#include<stdio.h>
struct person
{
	char name[50];
	char address[50];
	int age;
	float salary;
}p[10];
int main()
{
	int i;
	printf("enter a name address age and salary of 10 teacher: ");
	for(i=0;i<5;i++)
	{
		scanf("%s%s%d%f",p[i].name,p[i].address,&p[i].age,&p[i].salary);
	}
	for(i=0;i<5;i++)
	{
		if(p[i].salary>20000)
			printf("%s\t%s\t%d\n",p[i].name,p[i].address,p[i].age);
	}
	return 0;
}
