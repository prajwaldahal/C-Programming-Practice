#include<stdio.h>
static int x=0;
void diskmove(int n,int start,int end)
{
	printf("move %d : disk %d move from rod%d to rod%d\n",++x,n,start,end);
}
void hanoi(int n,int start,int end)
{
	int auxilary;
	if(n==1)
	{
		diskmove(n,start,end);
		return;	
	}
	auxilary = 6-(start+end);
	hanoi(n-1,start,auxilary);
	diskmove(n,start,end);
	hanoi(n-1,auxilary,end);
}
int main()
{
	int n;
	printf("enter a no. of disk ?");
	scanf("%d",&n);
	hanoi(n,1,3);
	return 0;	
}
