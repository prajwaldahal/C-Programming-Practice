#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];int l,i;
	printf("enter a sentence: ");
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]==' '||i%2==0)
				continue;
		a[i]=toupper(a[i]);
	}
	for(i=0;i<l;i++)
	{
		putchar(a[i]);
	}
	return 0;
}
