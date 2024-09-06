#include<stdio.h>
struct student 
{
	char name[20];
	int age;
	float height;
};
void display(struct student s)
{
	printf("%s\t%d\t%.2f",s.name,s.age,s.height);
}
int main()
{
	struct student s;
	printf("enter a name age and height: ");
	scanf("%s%d%f",s.name,&s.age,&s.height);
	display(s);
	return 0;
}
