#include<stdio.h>
int star();
int main()
{
	star();
}
int star()
{
	int arr[6]={55,99,4,6,-9,10};
int i,minimum=arr[0], maximum=arr[0];
for(i=0;i<6;i++)
{
printf("%d\n",arr[i]);
}
for(i=0;i<6;i++)
{
if(arr[i]>maximum)
{
maximum=arr[i];
}
if(arr[i]<minimum)
{
minimum=arr[i];
}
}
printf("The largest value in Array arr: %d\n",maximum);
printf("The smallest value in Array arr: %d\n",minimum);
}
