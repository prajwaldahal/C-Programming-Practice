#include<stdio.h>
#include<windows.h>
int main()
{
	
  FILE *fp;
  register unsigned long long int i;register int j; unsigned long long int num; 
  unsigned long long int x; unsigned long long int y; int a;
  printf("enter a num\n1: IPV4\n");
  printf("2: IPV6\n");
  scanf("%d",&a);
  switch(a)
  {
	  case 1:
	{
		printf("enter a number of ip adress to be displayed: ");
		scanf("%lu",&num);
		fp = fopen("ipadress.txt","w");
	   for(i=1;i<=num;i++)
	   {
	   	    for(j=1;j<=4;j++)
	        {
		    	x=rand();
		    	y=x % 256;
		    	printf("%lu",y);
		    	fprintf(fp,"%lu",y);
		    	if(j!=4)
				{
					printf(".");
					fprintf(fp,".");
				}
		
			}
			fprintf(fp,"\n");
			printf("\n");
			system("attrib ipadress.txt -h");
		}
		break;
	}
	 case 2:
	 {
		unsigned long long int i,j; unsigned long long int num; 
	  	unsigned long long int x; unsigned long long int y;
		printf("enter a number of ip adress to be displayed: ");
		scanf("%lu",&num);
		fp = fopen("ipadressipv6.txt","w");
	   	for(i=1;i<=num;i++)
		{
	   	    for(j=1;j<=8;j++)
	    {
	    	x=rand();
	    	y=x % 65536;
	    	printf("%X",y);
	    	fprintf(fp,"%X",y);
	    	if(j!=8)
			{
				printf(":");
				fprintf(fp,":");
			}
		}
			fprintf(fp,"\n");
			printf("\n");
	}
	}
}
	return 0;
}
