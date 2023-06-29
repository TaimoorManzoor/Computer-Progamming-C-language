#include<stdio.h>
int main(){
	char grade;
	printf("enter the grade of the student:");
	scanf("%c",&grade);
	switch(grade){
		case 'E':
			printf("YOU HAVE CHOOSE:EXCELLENT",grade);
			break;
		case 'V':
			printf("YOU HAVE CHOOSE:VERY GOOD",grade);
			break;
		case 'G':
			printf("YOU HAVE CHOOSE:GOOD",grade);
			break;
		case 'A':
			printf("YOU HAVE CHOOSE:AVERAGE",grade);
			break;
		case 'F':
			printf("YOU HAVE CHOOSE:FAIL",grade);
			break;
		default:
			printf("INVAID GRADE");
			break;			
	}
}
