#include<stdio.h>
struct employee
{
	float salary;
};
struct person
{
	char name[50];
	int age;
	float height;
	struct employee e;
}p;
int main()
{
struct person p = {"hari",24,180.5,{15000.50}};
	printf("%s\t%d\t%.2f\t%.2f",p.name,p.age,p.height,p.e.salary);
	return 0;		
}
