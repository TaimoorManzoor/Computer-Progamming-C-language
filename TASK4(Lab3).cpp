#include<stdio.h>
int main()
{
	int math;
    int physics;
    int chemistry;
    int totalmark=math+physics+chemistry;
    printf("the different criteria marks are:\n"); 
    scanf("%d%d%d",&math,&physics,&chemistry);
    if(math>=65 & physics>=55 &chemistry>=50)
    printf("the candidate is eligible");    
    else
	printf("the candidate is not eligible");
}

// As we know when candidate compelete this condition then its total marks naturally sum become greater than 180 actucally i want to  tell you that i tried alot,but i am not able to make program according to given condition in the question,so i apologize to you sir!! 
