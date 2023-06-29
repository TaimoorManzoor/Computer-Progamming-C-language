#include<stdio.h>
int main(){
	int MONTH_NUMBER;
	printf("ENTER THE MONTH_NUMBER:");
	scanf("%d",& MONTH_NUMBER);
	switch(MONTH_NUMBER){
		case 1:
			printf("January",MONTH_NUMBER);
			break;
		case 2:
			printf("February",MONTH_NUMBER);
			break;
		case 3:
			printf("March",MONTH_NUMBER);
			break;
		case 4:
			printf("April",MONTH_NUMBER);
			break;
		case 5:
			printf("May",MONTH_NUMBER);
			break;
		case 6:
			printf("June",MONTH_NUMBER);
			break;
		case 7:
			printf("July",MONTH_NUMBER);
			break;
		case 8:
			printf("August",MONTH_NUMBER);
			break;
		case 9:
			printf("September",MONTH_NUMBER);
			break;
		case 10:
			printf("October",MONTH_NUMBER);
			break;
		case 11:
			printf("November",MONTH_NUMBER);
			break;
		case 12:
			printf("December",MONTH_NUMBER);
			break;
			
		default:
			printf("INVAID MONTH NUMBER");
			break;			
	}
}
