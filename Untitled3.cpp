void search(char a[])
{
	char *ptr;
	ptr=strstr(a,"hel");
	if(ptr==NULL)
	{
		printf("\nsub string not found!");
	}
	else
	{
		printf("\nsubstring found!");
	}
}
