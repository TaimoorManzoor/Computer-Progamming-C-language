#include <stdio.h>
int main(){
	
	int a = 2;
	int b = 3;
	
	printf("AND\n");
	
	int result =(a*b) && (a<b);
	printf("%d\n",result);
	
	int result1 =(a<b) && (a==b);
	printf("%d\n",result1);
	
	int result2 = (a>b) && (a<b);
	printf("%d \n",result2);
	
	int result3 =(a*b) && (a/b);
	printf("%d\n",result3);
	
	printf("OR\n");
	
	int result4 =(a*b) || (a<b);
	printf("%d\n",result4);
	
	int result5 =(a<b) || (a==b);
	printf("%d\n",result5);
	
	int result6 = (a>b) || (a<b);
	printf("%d \n",result6);
	
	int result7 =(a>b) || (a==b);
	printf("%d\n",result7);
	
	
	
	
	
	
}
