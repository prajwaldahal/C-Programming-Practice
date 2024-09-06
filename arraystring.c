#include<stdio.h>
int main()
{
	FILE *fptr;
	char str[6][20],i;
	fptr=fopen("arraystring.txt","w");
	printf("enter 6 words below:\n");
	for (i=0;i<6;i++)
	{
		printf("enter word%d: ",i+1);
		scanf("%s",&str[i]);
		fflush(stdin);
	}
	printf("\n");
		for (i=0;i<6;i++)
	{
		fprintf(fptr,"%s\t",str[i]);
	}
	return 0;
}
