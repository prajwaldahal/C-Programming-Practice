#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr;
	int ch;
	fptr=fopen("myfile.txt","w");
	if(fptr==NULL)
	{
		printf("error finding file:\n");
		exit(1);
	}
	fputc('a',fptr);
	fclose(fptr);
	return 0;
}
