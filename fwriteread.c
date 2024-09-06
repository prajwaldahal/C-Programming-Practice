#include<stdio.h>
int main()
{
	FILE *fp;
	int a[20];int i;int b[20];
	fp = fopen("twenty.txt","w");
	for(i=0;i<20;i++)
		scanf("%d",&a[i]);
	fwrite(a,sizeof(a),1,fp);
	fclose(fp);
	return 0;
}
