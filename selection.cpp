#include<stdio.h>
#define SWAP(a,b) {a= a+b;b=a-b;a=a-b;}
void selection(int x[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(x[j]<x[i])
			{
				SWAP(x[i],x[j]);
			}
		}
	}	
}
int main()
{
	int i; 
	int a[]={12,6,9,3,2,0,1,7,8,9,2,45,6,7};
	selection(a,14);
	for(i=0;i<14;i++)
	{
	 printf("%4d",a[i]);
	}
}
