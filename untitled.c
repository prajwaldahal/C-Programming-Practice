#include<stdio.h> 

int main() 

{ 

    int a,b,i; 

    printf("enter a integer: "); 

    scanf("%d",&a); 

    printf("enter second integer(>first integer): "); 

    scanf("%d",&b); 

    for(i=a+1;i<b;i++) 

    { 

        printf("%d\t",i); 

    } 

    return 0; 

} 
