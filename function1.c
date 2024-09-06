#include<stdio.h>
int num[10];int i; int sum;
void input()
{
	printf("enter a 10 numbers:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
}
void add()
{
	for(i=0;i<10;i++)
	{
		sum+=num[i];	
	}
}
void display()
{
	printf("sum is %d",sum);
}
int main()
{
	input();
	add();
	display();
  return 0;	
}
