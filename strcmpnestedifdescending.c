#include<stdio.h>
#include<string.h>
int main()
{
	char a[10];char b[10]; char c[10];int x,y,z; 
	printf("enter three string: ");
	scanf("%s %s %s",a,b,c);
	x=strcmp(a,b);  
	y=strcmp(b,c);   
	z=strcmp(a,c);	
	printf("descending order: \n");
	if(x>0 && z>0)
	{
		printf(" %s",a);
		if(y>0)
		{
			printf(" %s",b);
			printf(" %s",c);
		}
		else
		{
			printf(" %s",c);
			printf(" %s",b);
		}
	}
	else if(x<0 && y>0)
	{
		printf(" %s",b);
		if(z>0)
		{
			printf(" %s",a);
			printf(" %s",c);
		}
		else
		{
			printf(" %s",c);
			printf(" %s",a);
		}
	}
	else
	{
		printf(" %s",c);
		if(x>0)
		{
			printf(" %s",a);
			printf(" %s",b);
		}
		else
		{
			printf(" %s",b);
			printf(" %s",a);
		}
	}
	return 0;
}
