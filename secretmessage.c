#include<stdio.h>
#include<string.h>
int main()
{
	char a[50];register int x,k,i=0; register int ch;
	while(1)
	{
		i=0;
		printf("\nenter a string: ");
		gets(a);
		k=strlen(a);
		top:
		if(a[i]>=65 && a[i]<=77)
		{
			x=25;
			for(ch=65;ch<=77;ch++)
			{
				if(a[i]==ch)
					printf("%c",a[i]+x);
				x-=2;
			}
		}
		else if(a[i]>=97 && a[i]<=109)
		{
			x=25;
			for(ch=97;ch<=109;ch++)
			{
				if(a[i]==ch)
					printf("%c",a[i]+x);
				x-=2;
			}
		}
		else if(a[i]>=78 && a[i]<=90)
		{
			x=1;
			for(ch=78;ch<=90;ch++)
			{
				if(a[i]==ch)
					printf("%c",a[i]-x);
				x+=2;
			}
		}
		else if(a[i]>=110 && a[i]<=122)
		{
			x=1;
			for(ch=110;ch<=122;ch++)
			{
				if(a[i]==ch)
					printf("%c",a[i]-x);
				x+=2;
			}
		}
		else
		{
			printf("%c",a[i]);
		}
		i++;
		if(i<=k)
			goto top;
	}
return 0;
}
