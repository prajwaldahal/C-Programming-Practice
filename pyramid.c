/*WAP to print following pattern:
     *
   * * *
 * * * * *
 
 */
   
#include<stdio.h>
int main()
{
	int rows;int i,j,a=0;int b=5;int k;
	rows = b;
	for(i=1;i<=5;i++)
	{
		for(k=b;k>=1;k--)
		{
			printf("\t");
		}
		b--;
		for(j=1;j<=i;j++)
			{
				printf("\t\t");
			printf("*");
			}
		printf("\n");
	}
	return 0;
}

