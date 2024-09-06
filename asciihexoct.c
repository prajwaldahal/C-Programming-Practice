#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<128;i++)
	{
		printf("character=%c\n",i);
		printf("ascii value=%d\thexadecimal=%x\toctal=%o\n\n",i,i,i);
	}
	return 0;
}
