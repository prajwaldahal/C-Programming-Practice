#include<stdio.h>
int main()
{
	int a[10];int temp, temp1; int i;
	for(i=0;i<10;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
	if(a[i]<a[i+1])
	{
		temp=a[i];
		if(a[i+1]>a[i+2])
		{
			temp1=a[i+1];
			a[i+1]=a[i+2];
			a[i+2]=temp;	
		}
	}
}
	printf("above num in ascending order:");
		for(i=0;i<10;i++)
{
printf("\n%d",a[i]);
}
return 0;
}

