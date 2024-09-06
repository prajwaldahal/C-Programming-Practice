#include<stdio.h>
struct book{
char title[20];
char author[20];
int price;
}b[10];

int main()
{

int i;

for(i=0;i<10;i++)
{
    fflush(stdin);
    printf("enter the title of book:");
    scanf("%s",b[i].title);
    
    fflush(stdin);
    printf("enter the author of book:");
    scanf("%s",b[i].author);
    
    fflush(stdin);
    printf("enter the price of book:");
    scanf("%d",b[i].price);
    }
    for(i=0;i<10;i++)
    {
    printf("\ntitle=%s\nauthor=%s\nprice=%d\n\n",b[i].title,b[i].author,b[i].price);
}
	return 0;
}
