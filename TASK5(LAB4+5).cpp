//Task# 5.Write a program in C to display the multiplication table of a given integer.
#include<stdio.h>
int multipication_table();
int main()
{
  multipication_table();	
}
  int multipication_table()
{	
  int x;
  printf("enter the integer is:");
  scanf("%d",&x);
  int x1=x*1;
  int x2=x*2;
  int x3=x*3;
  int x4=x*4;
  int x5=x*5;
  int x6=x*6;
  int x7=x*7;
  int x8=x*8;
  int x9=x*9;
  int x10=x*10;
  printf("the multiplication table of a given integer is:\n");
  printf("%d\n",x1);
  printf("%d\n",x2);
  printf("%d\n",x3);
  printf("%d\n",x4);
  printf("%d\n",x5);
  printf("%d\n",x6);
  printf("%d\n",x7);
  printf("%d\n",x8);
  printf("%d\n",x9);
  printf("%d\n",x10);
}
