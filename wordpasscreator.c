#include<stdio.h>
#include<string.h>
char *secret(char a[])
{
	int i; register int ch; int k; int x;
	k=strlen(a);
	i=k;
	top:
	if(a[i]>=65 && a[i]<=77)
	{
		x=25;
		for(ch=65;ch<=77;ch++)
		{
			if(a[i]==ch)
		       a[i]=a[i]+x;
		    x-=2;
		}
	}
	else if(a[i]>=97 && a[i]<=109)
	{
		x=25;
		for(ch=97;ch<=109;ch++)
		{
			if(a[i]==ch)
			 a[i]=a[i]+x;
			x-=2;
		}
	}
	else if(a[i]>=78 && a[i]<=90)
	{
		x=1;
		for(ch=78;ch<=90;ch++)
		{
			if(a[i]==ch)
				a[i]=a[i]-x;
			x+=2;
		}
	}
	else if(a[i]>=110 && a[i]<=122)
	{
		x=1;
		for(ch=110;ch<=122;ch++)
		{
			if(a[i]==ch)
			   a[i]=a[i]-x;
			x+=2;
		}
	}
	else if(a[i]>=48&&a[i]<=52)
	{
		x=9;
		for(ch=48;ch<=52;ch++)
		{
			if(a[i]==ch)
				a[i]=a[i]+x;
			x-=2;
		}
	}
	else if(a[i]>=53&&a[i]<=57)
	{
		x=1;
		for(ch=53;ch<=57;ch++)
		{
			if(a[i]==ch)
				a[i]=a[i]-x;
			x+=2;
		}
	}
	else
	{
			a[i]=a[i];
	}
	i--;
	if(i>=0)
		goto top;
	return a;
}
char *reverse(char a[])
{
	strrev(a);
	
}
int main()
{
	FILE *fp;
	char p[10];
	fp=fopen("str.txt","wb");
	printf("enter a password: ");
	fflush(stdin);
	gets(p);
	strcpy(p,secret(p));
	strcpy(p,reverse(p));
	fwrite(p,sizeof(p),1,fp);
	fclose(fp);
	return 0;
}
