#include<stdio.h>
void numberpattern();
int main(){
numberpattern();
}
void numberpattern(){
	
	int rows, col;
	printf("Enter your desired number of rows: ");
	scanf("%d", &rows);
	
	for(int i = 2; i<=rows; i=i+2){ 
		
		for(int j =2; j<=i; j=j+2){ 
			
			printf("%d",i);							
		}
		printf("\n");
	}
}

