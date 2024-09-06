#include<stdio.h>
#include<string.h>
struct student
{
	char name[20];
	char address[50];
	int age;
	 float height;
}s[11];
int main()
{
	int i;
	for(i=0;i<11;i++)
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
	}
		for(i=0;i<11;i++)
		{
			if(s[i].name[0]=='a')
			{
				printf("%s\t%s\t%d\t%f",s[i].name,s[i].address,s[i].age,s[i].height);
			}
		}
		return 0;
}
