#include<stdio.h>
int main()
{
	char mnthname[10];int i;int j;int a;int x=1;
	printf("enter a month name: ");
	gets(mnthname);
	printf("enter a year: ");
	scanf("%d",&a);
	printf("\n\n\t  %d %s\n\n",a,mnthname);
	printf("      %4s    %4s    %4s    %4s %4s   %4s   %4s\n","sunday","monday","tuesday","wednesday","thrusday","friday","saturday");
	for(i=0;i<5;i++)
	{
		for(j=0;j<7;j++)
		{
			if(x>31)
			{
				break;
			}
			printf("%10d",x);
			x++;
		}
		printf("\n");
	}
	return 0;
}
