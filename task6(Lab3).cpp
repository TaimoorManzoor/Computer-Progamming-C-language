#include<stdio.h>
int main()
{
float temp;
printf("enter the temperature");
scanf("%f",&temp);
if(temp<0)
printf("freezing point");
else if(temp<=0||10>=temp)
printf("very cold weather");
else if(temp<=10||20>=temp)
printf("cold weather");
else if(temp<=20||30>=temp)
printf("normal weather");
else if(temp<=30||40>=temp)
printf("hot weather");
else if(temp>40)
printf("very hot weather");
}
