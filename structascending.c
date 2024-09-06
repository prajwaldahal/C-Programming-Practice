#include<stdio.h>
struct person
{
	int id;
	char adr[20];
	char name[10];
}*p[5];
int main()
{
	int i;
	printf("enter a name address and id of 5 person:");
	for(i=0;i<5;i++)
	{
		scanf("%s%s%d",p[i].name,p[i].adr,p[i].id);
	}	 
	return 0;
}
