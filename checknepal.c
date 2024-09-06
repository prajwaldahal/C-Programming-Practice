#include<stdio.h>
int main()
{
	char c[20];
	printf("enter a word: ");
	scanf("%s",c);
	if(c[0]=='N'&& c[1]=='e' && c[2]=='p' && c[3]=='a' && c[4]=='l')
	{
		printf("entered word is Nepal");
    }
	if(c[0]!='N' || c[1]!='e' || c[2]!='p' || c[3]!='a' || c[4]!='l')
	{
	    printf("entered word is not Nepal");
	}
    return 0;
}
