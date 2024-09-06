#include<stdio.h>
int main()
{
	int i;char c[6]="nepal";int k;int a=0;
	for(i=0;i<6;i++)
	{
		for(k=1;k<=a;k++)
		{
			printf("%4c",' ');
		}
		printf("%c\n",c[i]);
		a++;
	}
	return 0;
}
