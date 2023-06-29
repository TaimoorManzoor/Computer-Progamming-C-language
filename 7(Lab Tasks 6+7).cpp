#include<stdio.h>
void floyd_triangle();
int main(){
	floyd_triangle();
}
void floyd_triangle(){

	int i;
	int j;
	int k=1;
	int rows;
	printf("the enter the rows",rows);
	scanf("%d",&rows);
	for(i=1;i<=rows; i++){
		
		for(j=1;j<=i; j++){
			printf("%d",k);
			k++;
		}
		printf("\n");
	}
}
