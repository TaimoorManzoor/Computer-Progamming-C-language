#include<stdio.h>
int alphabetnumber();
int main()
{
	alphabetnumber();
}
int alphabetnumber()
	{
		for(char i='a'; i<='f'; i++)
		{
			for(char j='a'; j<=i; j++){
			
			printf("%c",i);
		}
		printf("\n");
	}
	
}
