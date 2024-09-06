#include<stdio.h>
int main()
{
	int a,b,c;int temphigh,tempmid,tempsmall; 
	printf("enter a three number: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	{
		temphigh=a;
		if(b>c)
		{
			tempmid=b;	
			tempsmall=c;
		}
		else
		{
			tempmid=c;
			tempsmall=b;

		}
	}
	else if(b>a && b>c)
	{
		temphigh=b;
		if(a>c)
		{
			tempmid=a;
			tempsmall=c;
		}
		else
		{
			tempmid=c;
			tempsmall=a;
		}
	}
	else
	{
		temphigh=c;
		if( a>b)
		{
			tempmid=a;
			tempsmall=b;
		}
		else
		{
		tempmid=b;
		tempsmall=a;
		}
	}
printf("%d,%d,%d\n",a,b,c);
printf("above num in descending order:\n%d %d %d",temphigh,tempmid,tempsmall);
return 0;

}

