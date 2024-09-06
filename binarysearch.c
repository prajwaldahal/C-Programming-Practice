#include<stdio.h>
#include<conio.h>
int BinarySearch(int arr[], int first, int last, int key)
{
	int mid, flag = last+1;
	if(first <= last)
	{
		mid = (first+last)/2;
		if(key == arr[mid])
			flag = mid;
		else if(key < arr[mid])
			return BinarySearch(arr, first, mid-1, key);
		else
			return BinarySearch(arr, mid+1, last, key);
	}
	else
		return flag;
}
void main()
{
	int n, arr[10], i, key, flag;
	printf("Enter the number of elements in array: ");
	scanf("%d", &n);
	printf("Enter %d numbers in sorted order: ", n);
	for(i=0; i<n; i++)
	scanf("%d", &arr[i]);
	printf("Enter the number to search:");
	fflush(stdin);
	scanf("%d", &key);
	flag = BinarySearch(arr, 0, n-1, key);
	if(flag == n)
		printf("%d is not found", key);
	else
		printf("%d is found at %d index.", key, flag);
}
