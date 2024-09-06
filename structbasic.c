#include<stdio.h>
struct book
{
	char title[20];
	char author[20];
	float price;
}b;
int main()
{
	printf("enter a title of book: ");
	gets(b.title);
	printf("enter a author of book: ");
	gets(b.author);
	printf("enter a price of book: ");
	scanf("%f",&b.price);
	printf("%s\t%s\t%.2f",b.title,b.author,b.price);
	return 0;
}

