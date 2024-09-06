#include<stdio.h>
#include<windows.h>
int main()
{
	int a,b,c;
	for(a=0;a<=24;a++)
	{
		for(b=0;b<=60;b++)
		{
			c=0;
			for(c=0;c<=60;c++)
			{
				printf("\r%02d:%02d:%02d",a,b,c);
				Sleep(1000);
			}
		}
	}
	return 0;
}
