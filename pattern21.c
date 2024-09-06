#include<stdio.h>
int main(){
	int i,k,j,a=0;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++){
			if(i>=j)
				printf("%4s"," ");
			else
				printf("%4d",j%2);
		}
		printf("\n");
	}
	return 0;
}

