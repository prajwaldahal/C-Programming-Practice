	#include<stdio.h>
	struct book{
	char title[20];
	char author[20];
	float price;
	}b;
	int main()
	{
	   fflush(stdin);
       printf("enter a title author and price of book: ");
       gets(b.title);
       gets(b.author);
       scanf("%f",&b.price);
	   printf("\n");
   	   printf("\n%s\t%s\t%.2f",b.title,b.author,b.price);
	   return 0;
   	}
