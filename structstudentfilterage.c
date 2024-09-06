#include<stdio.h>
struct student
{
	char name[20];
	char address[50];
	int age;
	 float height;
}s[11];
int main()
{
	FILE *fptr;
	int i;
	fptr=fopen("structfilehandaling.txt","w");
	printf("enter a 11 student records below: \n\n");
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
		printf("\n");
	}
		for(i=0;i<11;i++)
		{
			if(s[i].age>20&&s[i].age<30)
			{
				fprintf(fptr,"%s\t%s\t%d\t%f",s[i].name,s[i].address,s[i].age,s[i].height);
			}
		}
		return 0;
}
