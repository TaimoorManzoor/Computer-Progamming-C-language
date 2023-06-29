#include<stdio.h>
void alphabetpattern();
int main(){
alphabetpattern();
}
void alphabetpattern(){
	
	//ASCII - American standard code for information interchange
	//A - 65
	//a - 97
	
	for(int i = 97;i<=101;i++){ 
		
		for(int j =97;j<=i;j++){
			
			printf("%c", i);
	}
		printf("\n");
	}

}
