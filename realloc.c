#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main () {
   char *str;
   /* Initial memory allocation */
   str = (char *) malloc(15);
   strcpy(str, "tutorialspoint");
   printf("String = %s,  Address = %u\n", str,str);
   /* Reallocating memory */
	scanf("%s",str+25);
	//printf("String = %s,  Address = %u\n", *(str+25));
	printf("a");
   str = (char *) realloc(str,25);
   //strcpy(str, ".com");
   printf("String = %c,  Address = %u\n", str+25, str+25);
   free(str);
   return(0);
}
