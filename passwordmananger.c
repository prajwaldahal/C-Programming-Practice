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
	int choice;char p[10];char a[100];char b[100];char pw[10];int k;
	printf("choose the option:\n1.read\n2.change\n3.add");
	scanf("%d",&choice);
	k=choice;
	if(choice == 3)
		choice=1;
	switch(choice)
	{
		case 2:
		{
			FILE *fp;FILE *fptr;
			top:
			fptr=fopen("str.txt","r");
			if(fptr==NULL)
			{
				printf("error opening file");
				return 1;	
			}
			fread(p,sizeof(p),1,fptr);
			printf("enter  a password: ");
			fflush(stdin);
			gets(pw);
			strcpy(p,secret(p));
			strcpy(p,reverse(p));
			if(strcmp(p,pw)==0)
			{
				fp=fopen("pw.txt","wb");
				if(fp==NULL)
				{
					printf("error opening file");
					return 1;
				}
				printf("\npw: ");
				gets(a);
				strcpy(b,secret(a));
				strcpy(b,reverse(b));
				fprintf(fp,"\n");
				fwrite(b,sizeof(b),1,fp);
			}
			else
			{
				printf("\npassword invalid: try again\n");
				goto top;
			}
			fclose(fp);
			break;
		}
		case 1:
		{
			FILE *fp;FILE *fptr;
			fptr=fopen("str.txt","r");
			if(fptr==NULL)
			{
				printf("error opening file");
				return 1;
			}
			top1:
			fread(p,sizeof(p),1,fptr);
			strcpy(p,secret(p));
			strcpy(p,reverse(p));
			printf("enter  a password: ");
			fflush(stdin);
			gets(pw);
			if(strcmp(p,pw)==0)
			{
				fp=fopen("pw.txt","rb");
				if(fp==NULL)
				{
					printf("error opening file");
					return 1;
				}
				fread(a,sizeof(a),1,fp);
				strcpy(b,secret(a));
				strcpy(b,reverse(b));
				if(k!=3)
				{
					puts(b);
				}
				else
				{
					FILE *fp;
					fp=fopen("pw.txt","wb");
					if(fp==NULL)
					{
						printf("error!");
						return 1;
					}
					printf("\npw: ");
					gets(a);
					strcat(a," ");
					strcat(a,b);
					strcpy(b,secret(a));
					strcpy(b,reverse(b));
					fwrite(b,sizeof(b),1,fp);
					fclose(fp);
				}
			}
			else
			{
				printf("\npassword invalid: try again\n");
				goto top1;
			}
			fclose(fp);
			break;
		}
	}
	return 0;
}
