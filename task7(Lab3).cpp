#include<stdio.h>
main()
{
char string;
printf("Enter any string:");
scanf("%c",&string);
if(('a'<=string&&string>='z')||('A'<=string&&string>='Z'))
{
printf("it is alphabet");
}
else if('0'>=string||string<='9')
{
printf("it is digit");
}
else
{
printf("it is special character");
}
}
