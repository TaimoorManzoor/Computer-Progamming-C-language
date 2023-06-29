//Task# 3:Write a function to check whether the entered number is an rational/irrational number.
#include<stdio.h>
float number();
int main()
{
  number();	
}
  float number()
{	
  float p;
  float q;
  float x;
  printf("my dear friend please enter your favourite numbers:");
  scanf("%f%f%f",&x,&p,&q);
	if(p/q==x)
	   printf("the given number is rational number");
	else if(p/q!=x)
	     printf("the given number is irrational number");
	
}

