#include<stdio.h>
struct book{
	char title[20];
	char author[20];
	float price;
	}b[10];
	int main()
	{
		int n;
		for(n=0;n<10;n++)
		{
       printf("enter a price");
       scanf("%f",&b[n].price);
       printf("enter a title of book");
       scanf("%s",b[n].title);
       printf("enter a author of book");
       scanf("%s",b[n].author);
   		}
   		for(n=0;n<10;n++)
   		{
   			printf("  book title\n%s\tauthor\n%s\tprice\n%f",b[n].price,b[n].title,b[n].price);
		}
   		
	}
