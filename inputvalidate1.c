#include<stdio.h>
int main()
{
	int a;
	printf("enter a even number: ");
	scanf("%d",&a);
	while(a%2!=0)
	{
		printf("enter a even number: ");
		scanf("%d",&a);
	}
	printf("you entered: %d",a);
	return 0;
}
