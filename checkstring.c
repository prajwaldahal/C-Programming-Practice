#include<stdio.h>
int main()
{
	char c[20];
	printf("enter a word: ");
	scanf("%s",c);
	if(c[0]=='R'&& c[1]=='a' && c[2]=='m')
	{
		printf("entered word is Ram");
    }
	if(c[0]!='R'||c[1]!='a'||c[2]!='m')
	{
	    printf("entered word is not Ram");
	}
    return 0;
}
