#include<stdio.h>
#include <conio.h>
int main(){
	int num1;
	int num2;
	printf("enter first number:");
	scanf("%d",&num1);
	
	printf("enter second number:");
	scanf("%d",&num2);
	
	int resulth=num1/num2;
	printf("the resulth is:%d\n",resulth);
	
	int resulth1=num1-num2;
	printf("the resulth is:%d\n",resulth1);
	
	int resulth2=num1*num2;
	printf("the resulth is:%d\n",resulth2);
}
