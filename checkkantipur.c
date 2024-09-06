#include<stdio.h>
int main()
{
	char c[20];
	printf("enter a word: ");
	scanf("%s",c);
	if(c[0]=='K'&& c[1]=='a' && c[2]=='n' && c[3]=='t' && c[4]=='i' && c[5]=='p' && c[6]=='u' && c[7]=='r')
	{
		printf("entered word is Kantipur");
    }
	if(c[0]!='K' || c[1]!='a' || c[2]!='n' || c[3]!='t' || c[4]!='i' || c[5]!='p' || c[6]!='u' || c[7]!='r')
	{
	    printf("entered word is not Kantipur");
	}
    return 0;
}
