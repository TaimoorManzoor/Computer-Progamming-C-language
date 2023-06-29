//Task# 8. Write a program in C to display the n terms of square natural number and their sum.
#include<stdio.h>
int square();
int main()
{
  square();	
}
  int square()
{	
  int x;
  printf("the square of given number are:\n");
  for(x=1;x<=5; x=x+1)
  {
  	printf("%d\n",x*x);  	
  }
  int n; //it is last term of the series,without taking the square:::
  printf("enter the last term:",n);
  scanf("%d",&n);
  int sum=n*(n+1)*(2*n+1)/6;
  printf("\nthe sum of given square number is:%d",sum );	
}

