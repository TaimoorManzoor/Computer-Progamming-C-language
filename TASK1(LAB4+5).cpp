//Task#1 Write a function to check whether the entered number is an even/odd number.
#include<stdio.h>
int number();
int main()
{
  number();	
}
  int number()
{	
  int x;
  printf("my dear friend please enter your favourite number:");
  scanf("%d",&x);
	if(x%2==0)
	   printf("the given number is even number",x);
	else
	     printf("the given number is odd number",x);
	
}
