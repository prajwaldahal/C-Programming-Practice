#include <stdio.h>
void TOH(int, char, char, char);
int main()
{
 int n;
 printf("Enter number of disk:");
 scanf("%d", &n);
 TOH(n, 'A','C','B');
 return 0;
}
void TOH(int n, char from_peg, char to_peg, char aux_peg)
{
 if(n>0)
 {
 TOH(n-1, from_peg, aux_peg, to_peg);
 printf("\n%s%d%s%c%s%c", "Move disk ", n ," from peg ", from_peg, " to peg ", to_peg);
 TOH(n-1, aux_peg, to_peg, from_peg);
 }
}
