#include<stdio.h>
int main(int argc,char* argv[])
{
	int i;int sum=0;
	if(argc>10)
	{
		for(i=0;i<argc;i++)
			sum+=atoi(argv[i]);
		printf("sum=%d",sum);
	}
	else
		printf("error less than 10 numbers");
	return 0;
}
