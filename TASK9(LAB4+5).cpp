//Task#9Write a program in C to display the first n terms of Fibonacci series.Fibonacci series 0 1 2 3 5 8 13 .....
#include<stdio.h>
int fibonacci_series();
int main()
{
  fibonacci_series();	
}
  int fibonacci_series()
{	

    int t1 = 0;
	int t2 = 1;
	int nextTerm = 0; 
	int n;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    // displays the first two terms which is always 0 and 1
    printf("Fibonacci Series: %d, %d, ", t1, t2);
    nextTerm = t1 + t2;

    while (nextTerm <= n)
	 {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

}







