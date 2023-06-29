#include<stdio.h>
#include<stdlib.h>
void repeat (int arr1[], int arr_size)
{
  int i, j;
  printf("The repeating elements are: ");
  for(i = 0; i < arr_size; i++)
    for(j = i+1; j < arr_size; j++)
      if(arr1[i] == arr1[j])
        printf(" %d ", arr1[i]);
}     
 
int main()
{
  int arr1[] = {2, 7, 4, 7, 8, 3, 4};
  int hello = sizeof(arr1)/sizeof(arr1[0]);
  int i;  
	printf("The given array is :  ");
	for(i = 0; i < hello; i++)
	{
	printf("%d  ", arr1[i]);
    } 
    printf("\n");
  
  repeat(arr1, hello);
  return 0;
}
