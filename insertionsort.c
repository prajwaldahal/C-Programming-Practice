#include<stdio.h>
void printArray(int a[], int n)
{
	int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void insertion(int a[],int n)
{
	int i, key, j;
    for (i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;
 
        /* Move elements of a[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
	}
}
int main()
{
	int a[]={12,23,45,67,8,76,9,56,34,1};
	int n=10;
	insertion(a,n);
	printArray(a,n);
	return 0;
}
