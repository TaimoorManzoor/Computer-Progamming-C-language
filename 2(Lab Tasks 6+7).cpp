#include<stdio.h>
int reverse_number();
int main()
{
	reverse_number();
}
int reverse_number()
	{
		for(int i=5; i>=0; i--)
		{
			for(int j=5; j>=i; j--){
			
			printf("%d",i);
		}
		printf("\n");
	}
	
}

