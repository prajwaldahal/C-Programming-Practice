#include<stdio.h>
struct teacher
{
	char name[50];
	char address[50];
	float salary;
	int age;
}t[4];
int main()
{
FILE *fp;
int i;float a;
fp = fopen("highestsalary.txt","w");
printf("enter a name,age address and salary of 10 teachers");
fprintf(fp,"list of teachers\n");
for(i=0;i<4;i++)
{
	scanf("%s%d%s%f",t[i].name,&t[i].age,t[i].address,&t[i].salary);
	fprintf(fp,"%s\t%d\t%s\t%f\n",t[i].name,&t[i].age,t[i].address,&t[i].salary);	
}
a=t[0].salary;
for(i=0;i<4;i++)
{
	if(t[i].salary>a)
	{
		a=t[i].salary;
	}	
}
fprintf(fp,"teacher with highest salary: \n");
for(i=0;i<4;i++)
{
	if(t[i].salary==a)
	{
		fprintf(fp,"%s\t%d\t%s\t%f\n",t[i].name,t[i].age,t[i].address,t[i].salary);
		printf("%s\t%d\t%s\t%f\n",t[i].name,t[i].age,t[i].address,t[i].salary);

	}	
}
fclose(fp);
return 0;
}

