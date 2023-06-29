#include<stdio.h>
int main(){
int stu_id=0;
int math = 0;
int phy = 0;
int chem = 0;
int urdu = 0;
int total =0;
float per=0;
printf("enter student id:");
scanf("%d",&stu_id);
printf("enter marks of math:");
scanf("%d",&math);
printf("enter marks of physics:");
scanf("%d",&phy);
printf("enter marks of urdu:");
scanf("%d",&urdu);
printf("enter marks of chem:");
scanf("%d",&chem);
total=math+phy+chem+urdu;
per=total*100/400;
printf("student id:%d\n",stu_id);
printf("total marks obtained:%d\n",total);
printf("percentage:%.2f\n",per);
if(per>90)
printf("grade: A+");
else if(per>=80)
printf("grade: A");
else if(per>=70)
printf("grade:B");
else if(per>=60)
printf("grade:c");
else if(per>=50)
printf("grade:D");
else if(per<50)
printf("grade:F");
}

