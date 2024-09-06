#include<stdio.h>
int input()
{
	int k;
	int i;
	int a[10];
	printf("enter a 10 numbers: ");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	k=sum(a);
	return k;
}
int sum(int a[])
{
	int i;int sum=0;
	for(i=0;i<10;i++)
		sum+=a[i];
	return sum;
}
int main()
{
	int k;
	k=input();
	printf("sum=%d",k);
	return 0;
}
