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
	if(x>0)
	{
		if(z>0)
		{
			printf("the greatest word is: %s",a);
		}
		else
		{
			printf("the greatest word is: %s",c);
		}
	}
	else
	{
		if(y>0)
		{
			printf("the greatest word is: %s",b);
		}
		else
		{
			printf("the greatest word is: %s",c);
		}
	}
	return 0;
}
