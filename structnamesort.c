//Write a c program to enter id,name and address of 25 employees into structure variable called employcc and sort them in ascending order on the basis of their name with the use of pointer.
#include <stdio.h>
#include <string.h>
struct employee
{
  int id;
  char name[20];
  char address[250];
};
int main()
{
  int i, j;
  //char temp[20];
  struct employee e[5];
  struct employee *p;
  struct employee temp;
  p = e;
  printf("Enter the id,name and address of 25 students:\n");
  for (i = 0; i < 5; i++)
  {
    scanf("%d%s%s", &(p + i)->id, (p + i)->name, (p + i)->address);
  }
  for (i = 0; i < 5; i++)
  {
    for (j = i + 1; j < 5; j++)
    {
      if ( (strcmp((p + i)->name, (p + j)->name)) > 0)
      {
        strcpy(temp, ((p + i)->name));
        strcpy(((p + i)->name), ((p + j)->name));
        strcpy(((p + j)->name), temp); 
		 
      }
    }
  }
  printf("The details of employee in ascending order:\n");
  for (i = 0; i < 5; i++)
  {
    printf("%d %s %s\n", (p + i)->id, (p + i)->name, (p + i)->address);
  }
  return 0;
}
