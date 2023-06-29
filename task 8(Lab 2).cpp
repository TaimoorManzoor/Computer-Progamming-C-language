#include<stdio.h>
int main(){
int a=2;
int b=0;
int c=1;
int d=1;
int sum=a+b+c+d	;
printf("sum of number is:%d\n",sum);
printf("in forward order:%d%d%d%d\n",a,b,c,d );
printf("in reverse order:%d%d%d%d\n",d,c,b,a );
printf("put the last dight in first position:%d%d%d%d\n",d,a,b,c);
printf("enchange the second and third digit:%d%d%d%d",a,c,b,d);
return 0;
}
