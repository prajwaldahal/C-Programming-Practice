#include<stdio.h>
int main()
{
	int i;int a[10];int temp;
	printf("enter a 10 numbers");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]>a[i+1])
		{
			temp=a[i+1];
			a[i+1]=a[i];
			temp =a[i];
		}
	}
	for(i=0;i<10;i++);
	{
		printf("%d",a[i]);
	}
}
