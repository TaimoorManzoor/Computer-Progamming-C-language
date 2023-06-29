//Task# 4.Write a program in C to read 10 numbers from user and find their sum and average.
#include<stdio.h>
float number();
int main()
{
  number();	
}
  float number()
{	
  float num1;
  float num2;
  float num3;
  float num4;
  float num5;
  float num6;
  float num7;
  float num8;
  float num9;
  float num10;
  printf("enter 10 your favourite number:\n");
  scanf("%f%f%f%f%f%f%f%f%f%f",&num1,&num2,&num3,&num4,&num5,&num6,&num7,&num8,&num9,&num10);
  float sum =num1+num2+num3+num4+num5+num6+num7+num8+num9+num10;
  printf("the sum of given number is: %f",sum);
  float average= sum/10;
	  printf("the sum of given number is: %f",average);

}

