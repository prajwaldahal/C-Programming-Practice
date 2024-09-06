#include<stdio.h> 

int main() 

{ 

    int a[15],i;int sum=0,count=0; 

    printf("enter 15 numbers below:\n\n"); 

    for (i=0;i<15;i++) 

    { 

        printf("enter number%d: ",i+1); 

        scanf("%d",&a[i]); 

    } 

        for (i=0;i<15;i++) 

    { 

        if(a[i]%7==0) 

        { 

        sum+=a[i]; 

        count++; 

        }         

    } 

    printf("avg=%f",sum/(float)count); 

    return 0; 

} 
