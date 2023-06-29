//Task# 6.Write a program in C to display the n terms of odd natural number and their sum:
#include<stdio.h>
int odd();
int main()
{
  odd();	
}
  int odd()
{	
  int x;
  printf("the odd number series is given below:\n");
  for(x=1;x<=20; x=x+2)
  {
  	printf("%d\n",x);  	
  }
  int n;// it is total number of term of the series!!
  int a;// it is first term of the series!!
  int l;// it is last term of the series!!
  printf("enter the value of integer:\n",n,a,l);
  scanf("%d %d %d",&n ,&a ,&l);
  int sum = (n/2)*(a+l);
  printf("\nthe sum of given odd number is:%d",sum);
}


