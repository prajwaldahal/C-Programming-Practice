/*WAP to take a sentence from use and capitilize begining letter of each word.*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char a[50];int l;int i;
	printf("enter sentence: ");
	gets(a);
	l=strlen(a);
	a[0]=toupper(a[0]);
	for(i=1;i<l;i++)
	{
		if(a[i]==' ')
			a[i+1]=toupper(a[i+1]);
	}
	for(i=0;i<l;i++)
	{
		putchar(a[i]);
	}
	return 0;
}
