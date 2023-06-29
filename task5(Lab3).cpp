#include<stdio.h>
int main()
{
int rollno;
char studentname;
int physics;
int chemistry;
int computer;
//int obtainmark=physics+chemistry+computer;
//float percentage=obtainmark/300;
printf("the roll no is");
scanf("%d",&rollno);
printf("the student name is");
scanf("%s",&studentname);
printf("the  physics marks are");
scanf("%d",&physics);
printf("the chemistry marks are\n",chemistry);
scanf("%d",&chemistry);
printf("the computer marks are\n");
scanf("%d",&computer);
int obtainmark=physics+chemistry+computer;
float percentage=obtainmark*100/300;
printf("the obtain marks are:%d\n",obtainmark);
//printf("the totalmark are:%d\n",totalmark);
//scanf("%d",&totalmark);
printf("the percentage are: %f",percentage);
if(percentage>=80)
printf("first division");
else if(percentage>=60)
printf("second division");
else if(percentage>=50)
printf("third division");
else if(percentage>=0)
printf("fail");
}

