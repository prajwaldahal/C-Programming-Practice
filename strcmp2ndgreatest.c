#include<stdio.h> 
#include<string.h>
int main() 
{ 
    char a[20],b[20],c[20]; 
    int x,y,z; 
    printf("enter a three words: "); 
    gets(a);
    gets(b);
    gets(c);
    x=strcmp(a,b);  
    y=strcmp(a,c); 
    z=strcmp(b,c); 
    if(x>0&&y<0||x<0&&y>0) 
    { 
        printf("%s is middle word",a); 
    } 
    else if(x>0&&z>0||x<0&&z<0) 
    { 
        printf("%s is middle word",b); 
    } 
    else if(y<0&&z>0||y>0&&z<0) 
    { 
        printf("%s is middle word",c); 
    }     
    else 
    { 
        printf("two of them or all are same words"); 
    } 
    return 0; 
}
