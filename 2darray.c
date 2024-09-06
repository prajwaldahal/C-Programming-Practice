#include<stdio.h>
void input(int p[2][2],int a)
{
	int i,j;
	printf("enter 2*2 matrix: ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)	
			scanf("%d",&p[i][j]);
	}
	printf("enter one number again: ");
	scanf("%d",&a);
}
void output(int p[2][2],int a)
{
	int i,j;
	for(i=0;i<2;i++)
	{
		printf("\n");
		for(j=0;j<2;j++)	
			printf("%4d",p[i][j]);
	}
	printf("\nsingle num=%d",a);
}
int main()
{
	int b;
	int a[2][2];
	input(a,b);
	output(a,b);
	return 0;
}
