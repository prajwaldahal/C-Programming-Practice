#include<stdio.h>
#include<string.h>
int main()
{
	char a[10];char b[10]; char c[10];int x,y,z;
	char grt[10],mid[10],small[10];
	printf("enter three string: ");
	scanf("%s %s %s",a,b,c);
	x=strcmp(a,b);	/*1:a>b  -1:a<b*/
	y=strcmp(b,c);  /*1:b>c  -1:b<c*/ 
	z=strcmp(a,c);	/*1:a>c  -1:a<c*/
	printf("ascending order: \n");
	if(x<0 && z<0)
	{
		strcpy(grt,a);
		if(y>0)
		{
			strcpy(mid,c);
			strcpy(small,b);
		}
		else
		{
			strcpy(mid,b);
			strcpy(small,c);
		}
	}
	else if(x>0 && y<0)
	{
		strcpy(grt,b);
		if(z>0)
		{
			strcpy(mid,c);
			strcpy(small,a);
		}
		else
		{
			strcpy(mid,a);
			strcpy(small,c);
		}
	}
	else
	{
		strcpy(grt,c);
		if(x>0)
		{
			strcpy(mid,b);
			strcpy(small,a);
		}
		else
		{
			strcpy(mid,a);
			strcpy(small,b);
		}
	}
	printf("%s %s %s",grt,mid,small);
	return 0;
}
