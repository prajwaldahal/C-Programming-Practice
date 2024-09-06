#include<stdio.h>
int main()
{
	FILE *fp;char a;
	fp=fopen("trial2.txt","w");
	fputs("we are student of BCA from tribhuvan university",fp);
	return 0;
}
