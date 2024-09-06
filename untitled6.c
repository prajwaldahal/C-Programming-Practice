#include<stdio.h> 

int main() 

{ 

    char a[20],b[20],c[20]; 

    int rslt,rslt1,rslt2; 

    printf("enter a word: "); 

    scanf("%s",a); 

    fflush(stdin); 

    printf("enter a second word: "); 

    scanf("%s",b); 

    fflush(stdin); 

    printf("enter third word: "); 

    scanf("%s",c); 

    rslt=strcmp(a,b);  

    rslt1=strcmp(a,c); 

    rslt2=strcmp(b,c); 

    if(rslt>0&&rslt1<0||rslt<0&&rslt1>0) 

    { 

        printf("%s is middle word",a); 

    } 

    else if(rslt>0&&rslt2>0||rslt<0&&rslt2<0) 

    { 

        printf("%s is middle word",b); 

    } 

    else if(rslt1<0&&rslt2>0||rslt1>0&&rslt2<0) 

    { 

        printf("%s is middle word",c); 

    }     

    else 

    { 

        printf("two of them or all are same words"); 

    } 

    return 0; 

} 
