/*to print series:

9,28,14,7,22 until the number is 1
 */
 #include<stdio.h>
 int main()
 {
	int i,a=9;
	for(;a!=1;)
{
	 if(a%2==0)
 	{
 		a/=2;
	}
	else
	{
		a=a*3+1;
	}
	printf("%4d",a);
}
	return 0;
 }
 

