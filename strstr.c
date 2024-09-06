#include<stdio.h>
#include<string.h>
int main()
{
	char a[50]; char *cp;
    printf("enter a text: ");
    gets(a);
    cp = strstr(a,"23");
    printf("%s",cp);
    return 0;
}
