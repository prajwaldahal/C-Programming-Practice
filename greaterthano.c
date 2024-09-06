#include<stdio.h> 
int main() 
{ 
    char c; 
    printf("enter a character: "); 
    scanf("%c",&c); 
    if(c>'o') 
    { 
        printf("entered character  is greater than 'o'"); 
    } 
    if(c<'o') 
    {
		printf("entered character is less than 'o'"); 
	} 
    return 0; 
} 
