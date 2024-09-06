#include<stdio.h>
int main(){
	int i,k,j,a=0;
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=a;k++){
			printf("%4s"," ");
		}
		a++;
		for(j=i;j<=5;j++){
			printf("%4d",j%2);
		}
		printf("\n");
	}
	return 0;
}

