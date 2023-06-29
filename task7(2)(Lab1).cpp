#include<stdio.h>
 int main(void)
{
int a=10,b=20,temp;    
printf("Before swapping a=%d b=%d\n",a,b);
temp = a;
a = b;
b = temp;
printf("After swapping a=%d b=%d",a,b);
}

