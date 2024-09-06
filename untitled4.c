#include<stdio.h> 

int main() 

{ 

    int a,b,i,sum=0; 

    printf("enter a integer: "); 

    scanf("%d",&a); 

    printf("enter second integer: "); 

    scanf("%d",&b); 

    if(b>a) 

{ 

    for(i=a+1;i<b;i++) 

    { 

        if(i%7==0) 

        { 

            sum+=i; 

        } 

    } 

} 

else 

{ 

        for(i=b+1;i<a;i++) 

    { 

        if(i%7==0) 

        { 

            sum+=i; 

        } 

    } 

} 

    printf("sum=%d",sum); 

    return 0; 

} 

 
