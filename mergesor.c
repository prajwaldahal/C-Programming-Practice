#include<stdio.h>
void printArray(int *A, int n)
{
	int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void merge(int *a,int mid,int low,int high)
{
	int i,j,k;int b[100];
	i = low;
	j=mid+1;
	k=low;
	while(i<=mid&&j<=high)
	{
		if(a[i]<a[j])
			b[k++]=a[i++];
		else
			b[k++]=a[j++];	
	}
	//printf("i=%d",i);
	for(;i<=mid;i++)
		b[k++]=a[i];
	for(;j<=high;j++)
	{
		b[k++]=a[j];	
	}
	for(i=low;i<=high;i++)
	{
		a[i]=b[i];	
	}	
}
void mergesort(int *a,int low,int high)
{
	int mid;
	if(low<high)
	{
		mid = (low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,mid,low,high);
	}
}
int main()
{
	int a[]={10,4};
	int n=2;
	mergesort(a,0,1);
	printArray(a,14);
	return 0;
}
