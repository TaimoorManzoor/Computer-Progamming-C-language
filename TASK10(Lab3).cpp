#include<stdio.h>
int main(){
	int MONTH_NUMBER;
	printf("ENTER THE MONTH_NUMBER:");
	scanf("%d",& MONTH_NUMBER);
	switch(MONTH_NUMBER){
		case 1:
			printf("31",MONTH_NUMBER);
			break;
		case 2:
			printf("29",MONTH_NUMBER);
			break;
		case 3:
			printf("31",MONTH_NUMBER);
			break;
		case 4:
			printf("30",MONTH_NUMBER);
			break;
		case 5:
			printf("31",MONTH_NUMBER);
			break;
		case 6:
			printf("30",MONTH_NUMBER);
			break;
		case 7:
			printf("31",MONTH_NUMBER);
			break;
		case 8:
			printf("31",MONTH_NUMBER);
			break;
		case 9:
			printf("30",MONTH_NUMBER);
			break;
		case 10:
			printf("31",MONTH_NUMBER);
			break;
		case 11:
			printf("30",MONTH_NUMBER);
			break;
		case 12:
			printf("31",MONTH_NUMBER);
			break;
			
		default:
			printf("INVAID MONTH NUMBER");
			break;			
	}
}
