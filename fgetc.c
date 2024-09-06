#include<stdio.h>
int main()
{
	FILE *fp;int a;
	fp = fopen("highestsalary.txt","r");
	top:
		a=getc(fp);
		putchar(a);
	if(!feof(fp))
		goto top;
	return 0;
}
