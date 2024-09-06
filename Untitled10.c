#include<stdio.h>
struct person{
 char name[30];
 int age;
 float height;
}p[5];
int main()
{
 
 int i;
  printf("enter the name,age & height of the 5 person: ");
 for(i=0;i<5;i++)
 {

  gets(p[i].name);
  scanf("%d%f",&p[i].age,&p[i].height);
 }
 for(i=0;i<5;i++)
 {
  if(p[i].age<25)
  {
   printf("%s\t%d\t%f\n",p[i].name,p[i].age,p[i].height);
  }
 }
 return 0;
}
