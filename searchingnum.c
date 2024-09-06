#include<stdio.h>
void search(int a[],int el,int n)
{
	int i,count=0;
	for (i=0;i<n;i++)
	{
		if(a[i]==el)
		{
			printf("found in %d position\n",i+1);
			count++;
		}
	}
	if(count==0)
	{
		printf("\n%d isnot found",el);
	}	
}
int main()
{
	int el,n;
	int a[]={1,56,89,43,2,3,14,45,67,89,76,54,32,12,15,16,17};
	printf("enter number to be search: ");
	scanf("%d",&el);
	n=sizeof(a)/4;
	search(a,el,n);
	return 0;
}
