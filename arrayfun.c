#include<stdio.h>
void input(int a[])
{
	printf("enter 10 numbers: ");
	for(i=0;i<10;i++)
		scanf("%d",a[i]);		
}
int sum(int a[])
{
	int i;int s=0;
	for(i=0;i<10;i++)
		s+=a[i];
	return s;
}
int  main()
{
	int a[10];int s;
	int i;
	input(a);
	s=sum(a);
	printf("%d",s);
	return 0;
}
