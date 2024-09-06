//#define n 20
#include<stdio.h>
#include<stdlib.h>
void input(int *num)
{
	
}
int main()
{
	int *num;int i,grt;int n=5;
	num=(int*)malloc(n*sizeof(int));
	printf("enter a %d numbers",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",num+i);
	}
	grt=*(num+0);
	for(i=0;i<n;i++)
	{
		if(grt<*(num+i))
			grt=*(num+i);
	}
	printf("%d",grt)
	return 0;
}
