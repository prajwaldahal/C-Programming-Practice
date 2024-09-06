#include<stdio.h>
void printArray(int *a, int n)
{
	int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int partation(int a[],int low,int high )
{
	int i,j,temp;
	int pivot=a[low];
	i = low+1;
	j= high;
	do{
		while(a[i]<=pivot)
		{
			i++;	
		}
		while(a[j]>pivot)
		{
			j--;
		}
		if(i<j)
		{
			temp = a[i];
            a[i] = a[j];
            a[j] = temp;
		}
	}while(i<j);
	temp = a[low];
    a[low] = a[j];
    a[j] = temp;
	return j;
}
void quicksort(int a[],int low ,int high)
{
	int pindex;
	if(low<high)
	{
		pindex = partation(a,low,high);
		quicksort(a,low,pindex-1);
		quicksort(a,pindex+1,high);	
	}
}

int main()
{
	int i;
	int a[]={25,57,48,37,12,92,86,33};
	int n=8;
	quicksort(a,0,n-1);
	printArray(a,8);
	return 0;
}
