#include<stdio.h>
void danger_triangle();
int main(){
	danger_triangle();
}
void danger_triangle(){

	int i;
	int j;
	int k='a';
	int l='d';
	int m='e';
	int n='f';
	int rows;

	for(i=1;i<=6; i++){
		
		for(j=1;j<=i; j++){
			
			if(k==l){
				printf("A",l);
			}
			else if(k==m){
				printf("B",m);
			}
			else if(k==n){
				printf("C",n);
			}
			else
			   printf("%c",k);
			
		}
		printf("\n");
		k++;
	}
}
