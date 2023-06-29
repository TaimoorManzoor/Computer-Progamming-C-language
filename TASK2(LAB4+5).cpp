//Task#2:Write a function to check whether the entered number is a positive/negative number

#include<stdio.h>
int number();
int main()
{
  number();	
}
  int number()
{	
  int x;
  printf("Enter your number:");
  scanf("%d",&x);
	if(x>0)
	   printf("the given number is positive",x);
	else
	     printf("the given number is negative",x);
	
}
