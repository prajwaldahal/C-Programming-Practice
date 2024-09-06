#include<stdio.h>
int main()
{
	int i,j;int a=1,b;int num; int sum=0;
	printf("enter a number of term to be added: ");
	scanf("%d",&num);
	b=num;
	for(i=1;i<=num;i++)
	{
		a=a+ pow(10,i);
		printf("%d\n",a);
		sum+=a;
		printf("\nsum is: %d\n",sum);
	}
	return 0;
}
