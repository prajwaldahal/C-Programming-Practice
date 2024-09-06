#include<stdio.h>
int main()
{
	char a[20],b[20],c[20];
	int rslt,rslt1,rslt2;
	printf("enter a word: ");
	scanf("%s",a);
	fflush(stdin);
	printf("enter a second word: ");
	scanf("%s",b);
	fflush(stdin);
	printf("enter third word: ");
	scanf("%s",c);
	rslt=strcmp(a,b); 
	rslt1=strcmp(a,c);
	rslt2=strcmp(b,c);
	if(rslt<=0&&rslt1<0)
	{
		printf("%s is smallest word",a);
	}
	else if(rslt>0&&rslt2<=0)
	{
		printf("%s is smallest word",b);
	}
    else if(rslt1>=0&&rslt2>0)
	{
		printf("%s is smallest word",c);
	}	
	else
	{
		printf("all are equal");
	}
    return 0;
}
