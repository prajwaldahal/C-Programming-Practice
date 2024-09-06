#include<stdio.h>
struct student
{
	char name[20];
	char address[50];
	int age;
	float height;
}s[4];
int i;
void input()
{
	printf("enter a 4 student records below: \n\n");
	for(i=0;i<4;i++)
	{
		fflush(stdin);
		printf("enter a name of student%d: ",i+1);
		scanf("%s",s[i].name);
		printf("enter a age of student%d: ",i+1);
		scanf("%d",&s[i].age);
		fflush(stdin);
		printf("enter a address of student%d: ",i+1);
		scanf("%s",s[i].address);
    	printf("enter a height of student%d: ",i+1);
		scanf("%f",&s[i].height);
		printf("\n");
	}
}
void output()
{
	for(i=0;i<4;i++)
	{
		printf("%s\t%s\t%d\t%f\n",s[i].name,s[i].address,s[i].age,s[i].height);
	}
}
void operation()
{
	for(i=0;i<4;i++)
		{
			if(s[i].age>20&&s[i].age<30)
			{
				output();
			}
		}
		
}
int main()
{
	input();
	operation();
	return 0;
}
