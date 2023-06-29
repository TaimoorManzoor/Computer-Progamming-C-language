#include<stdio.h>
int alphabetnumber();
int main()
{
	alphabetnumber();
}
int alphabetnumber()
	{
		for(char i='A'; i<='F'; i++)
		{
			for(char j='A'; j<=i; j++){
			
			printf("%c",i);
		}
		printf("\n");
	}
	
}
