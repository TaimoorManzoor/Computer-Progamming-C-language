//Task# 7.Write a program in C to display the n terms of even natural number and their sum.
#include<stdio.h>
int even();
int main()
{
  even();	
}
  int even()
{	
  int x=0; 
  for(x=0;x<=10; x=x+2)
  {
  	printf("%d\n",x);  	
  }
  int n;// it is total number of term of the series!!
  int a;// it is first term of the series!!
  int l;// it is last term of the series!!
  printf("enter the value of integer:\n",n,a,l);
  scanf("%d %d %d",&n ,&a ,&l);
  int sum = (n/2)*(a+l);
  printf("\nthe sum of given even number is:%d",sum);	
}
