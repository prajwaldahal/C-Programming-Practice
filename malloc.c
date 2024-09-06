#include<stdio.h>
int main()
{
	int *a;int i;
	a=(int*)calloc(5,sizeof(int));
	printf("enter a five numbers: ");
	for(i=0;i<5;i++)
		scanf("%d",a+i);
	for(i=0;i<5;i++)
		printf("%4d",a[i]);
	free(a);
	return 0;
}
