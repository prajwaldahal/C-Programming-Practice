#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];int i;int k;
	printf("enter a string: ");
	gets(a);
	k=strlen(a);
	for(i=0;i<k;i++)
	{
		if(a[i]>=65 && a[i]<=90|| a[i]>=97 && a[i]<=122 || a[i]>=48&&a[i]<=57 || a[i]==32)
		{
			printf("%c",a[i]);
		}
	}
	return 0;
}
