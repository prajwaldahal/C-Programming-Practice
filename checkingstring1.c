#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];int rslt;
	printf("enter a word: ");
	scanf("%s",str);
	rslt = strcmp(str,"Ram");
	if(rslt==0)
	{
		printf("enter word is Ram");
	}
	if(rslt!=0)
	{
		printf("entered word is not Ram");
	}
	return 0;
}
