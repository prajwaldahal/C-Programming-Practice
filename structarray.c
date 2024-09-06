#include<stdio.h>
struct student
{
	char name[20];
	char address[50];
	int age;
	 float height;
}s;
int main()
{
	FILE *fp;int n;
	fp=fopen("struct1.txt","r");
	printf("enter a record number  to be displayed: ");
	scanf("%d",&n);
	fseek(fp,(n-1)*sizeof(struct student),0);
	fread(&s,sizeof(s),1,fp);
	printf("%s\t%d\t%f\t%s\n",s.name,s.age,s.height,s.address);
	return 0;
}
