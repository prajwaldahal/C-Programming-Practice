#include<stdio.h>
union college{
	char name[50];
	int estd_year;
	char affiliation[50];
}c;
int main()
{
   printf("enter college name: ");
   scanf("%s",c.name);
   printf("enter college established year:: ");
   scanf("%d",&c.estd_year);
   printf("enter college affiliation university: ");
   scanf("%s",c.affiliation);
   printf("%s\t%d\t%s",c.name,c.estd_year,c.affiliation);
   return 0;
}
