#include<stdio.h>
int main()
{
	int a[10];int i,j;int temp;
	printf("enter a 10 number: ");
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}	
	}
	for(i=0;i<10;i++)
	{
		printf("%4d",a[i]);
	}
	return 0;
}
