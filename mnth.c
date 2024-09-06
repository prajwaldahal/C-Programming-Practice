#include<stdio.h>
int main()
{
	int mnth;
	printf("enter a positive integer value which represent months");
	scanf("%d",&mnth);
	if(mnth==1)
	{
		printf("january");
	}
else if(mnth==2)
	{
		printf("february");
	}
else if(mnth==3)
	{
		printf("march");
	}
else if(mnth==4)
	{
		printf("april");
	}
else if(mnth==5)
	{
		printf("may");
	}
else if(mnth==6)
	{
		printf("june");
	}
else if(mnth==7)
	{
		printf("july");
	}
else if(mnth==8)
	{
		printf("august");
	}
else if(mnth==9)
	{
		printf("september");
	}
else if(mnth==10)
	{
		printf("october");
	}
else if(mnth==11)
	{
		printf("november");
	}
else if(mnth==12)
	{
		printf("december");
	}

else 
{
	printf("invalid");
}
    return 0; 
}
