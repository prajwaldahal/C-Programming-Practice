#include<stdio.h>
struct person
{
	char name[20];
	char address[50];
	int age;
	float height;
}s[3];
int main()
{
	int i;int a;
	printf("enter a name age,height and address of 3 person below: ");
	for(i=0;i<3;i++)
	{
		scanf("%s%d%f%s",s[i].name,&s[i].age,&s[i].height,s[i].address);
	}
	for(i=0;i<3;i++)
	{ 
		if(s[i].age>20&&s[i].age<30)
		{
			printf("%s\t%d\t",s[i].name,s[i].age);
			printf("%.2f\t%s",s[i].height,s[i].address);
		}
	}
	return 0;
}
