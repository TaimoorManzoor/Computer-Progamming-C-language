#include<stdio.h>
#include<string.h>
 int pattern1();
 int pattern2();
 int pattern3();
 int pattern4();
 int pattern5();
 int pattern6();
 int largest();
 int mark();
 int percentage();
 int sum();
 int series();
 int array();
 int second();
 int specific();
 int sort();
 int add_sub();
 int multiply();
 int string1();
 int string2();
 int string3();
 int string4();
 int string5();
int main()
{
	pattern1();
	pattern2();
	pattern3();
    pattern4();
    pattern5();
    pattern6();
    largest();
    mark();
    percentage();
    sum();
    series();
    array();
    second();
    specific();
    sort();
    add_sub();
    multiply();
    string1();
    string2();
    string3();
    string4();
    string5();
}
/*Question 6.
Write a program to print following:
i) **********
**********
**********
ii)*
**
***
iii) *
**
***
********** ****
*****
****
*****
iv) *
***
*****
*******
*********
v) 1
222
33333
4444444
555555555
vi) 1
212
32123
4321234
543212345*/
int pattern1()
{
	
	int i;
	int j;
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=10; j++)
		{
			printf("*");		
		}
	        printf("\n");
	        printf("\n");
	}
}
int pattern2()
{
	int i;
	int j;
	for(i=0;i<5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
		printf("*\n");
	}
}
int pattern3()
{
	int i;
	int j;
	for(i=1; i<6; i++)
	{
	    for(j=1;j<6; j++)
		   {
			if(j>=6-i)
			{
			printf("*");
		    }
		    else
		    printf(" ");
	        }
	    printf("\n");
    }
}
int pattern4()
{
	int i;
	int j;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=9; j++)
		{
			if(j>=6-i && j<=4+i)
			{
			printf("*");
		    }
		    else
		    {
		    	printf(" ");
			}
		}
		printf("\n");
	}
}
int pattern5()
{
	int i;
	int j;
	int k=0;
	for(i=1; i<=5; i++)
	{
		k++;
		for(j=1; j<=9; j++)
		{
			if(j>=6-i && j<=4+i)
			{
			printf("%d",k);
		    }
		    else
		    {
		    printf(" ");
			}
		}
		printf("\n");
	}
}
int pattern6()
{
	int i;
	int j;
	int k=1;
	
	        for(i=1; i<=5; i++)
	        {
		        k=i;
		            for(j=1; j<=9; j++)
		            {
			            if(j>=6-i && j<=4+i)
			            {
			                printf("%d",k);
			                j<5?k--:k++;
		                }
		                else
		               {
		                    printf(" ");
			           }
		            }
		                    printf("\n");
		   }
}
//Question 1. Write a C program to find the largest of three numbers.
int largest()
{
	int a;
	printf("Enter the value a:");
	scanf("%d",&a);
	int b;
	printf("Enter the value b:");
	scanf("%d",&b);
	int c;
	printf("Enter the value c:");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("The a larger number");
	}
	 else if(b>a && b>c)
	{
		printf("The b larger number");
	}
	else if(c>a && c>b)
	{
		printf("The c larger number");
	}
	
}
//Question 2. Suppose that score is a variable of type double. Write the c statement that increases the score by 5 marks if score is between 80 and 90.
int mark()
{
	float score;
	printf("Enter your score:",score);
	scanf("%f",&score);
	if(score>=80 && score<=90)
	{
		float resulth=score+5;
		printf("you got bonus of 5 marks and now your total score is:%f",resulth);
	}
	else
	{
		printf("you does not got the bonus points");
	}
	

}
//Question 3. A shop will give discount of 10% if the cost of purchased quantity is more than 1000. Ask user for quantity. Suppose, one unit will cost 100. Judge and print total cost for user.
int percentage()
{
	float rate_of_discount=0.1;
	float discount;
	float cost;
	printf("Enter your cost price");
	scanf("%f",&cost);
	if(cost>1000)
	{
		//discount=orginal price *rate of discount
		//cost price==orginal price
		discount=rate_of_discount*cost;
		printf("you get %.2f rupees discount",discount);
	}
	else
	{
		printf("you doesn't get discount");
	}
	
}
// Question 4.Write a program to read in numbers until the number -999 is encountered. The sum of all number read until this point should be printed out.
int sum()
{
	int a;
	int b=999999;
	int i;
	int summ=0;
	for(i=1;i<=b; i++)
	{
		    printf("Enter any number\n");
		    scanf("%d",&a);
		    if(a==-999)
	    	{   
		    printf("you are find the valid number");
		    break;
	        }
	        summ+=a;
	}
	
	  printf("The sum is:%d",summ);
	
    
}
//Question 5. Read a positive integer value and compute the following sequence: If the number is even, halve it; if it's odd, multiply by 3 and add 1. Repeat this process until the value is 1, printing out each value.
int series()
{
	int a;
	int b=999999;
	int i;
	int z;
	printf("\nEnter any number\n");
		    scanf("%d",&a);
		    if(a%2==0)
			{
				z=a/2;
				printf("%d",z);
			}
           else if(a%2==1)
			{
				z=(a*3)+1;
				printf("%d",z);

			}
	for(i=1;i<=b; i++)
	{
		    printf("\nEnter any number\n");
		    scanf("%d",&z);
		    if(z==1)
	        {
	        	printf("%d",z);
	        	break;
			}
		    else if(z%2==0)
			{
				z=z/2;
				printf("%d",z);
			}
			else if(z%2==1)
			{
				z=(z*3)+1;
				printf("%d",z);

			}
	        
	}
}

// Question 7 Create an array that can hold ten integers, and get input from user. Display those values on the screen, and then prompt the user for an integer. Search through the array, and count the number of times the item is found.
int array()
{
	int i,j;
	int k;
	printf("Enter your searching value:",k);
	scanf("%d",&k);
	int count=0;
	int a[10];
	printf("Enter the 10 number of an array:\n");
	for(i=0;i<10; i++)
	{
		printf("the element index is [%d] and its number is:",i,a[i]);
		scanf("%d",&a[i]);
	}
	for(i=0; i<10; i++)
	{
	    if(a[i]==k)
		count++;
    }
    printf("\nThe total number of count is %d\n",count);
        if(count>0)

		printf("\nThe value of k  is found");	
	    
	    else
	    printf("The value of k is not found");
    }
//Question 8 Write a program to find the second largest number in the array.   
int second()
{
	int a[5];
	int i;
	int j=0;
	int largest=0;
	int largest2=0;
	for(i=0; i<5; i++)
	{
		printf("The element index is[%d] and value is:",i,a[i]);
		scanf("%d",&a[i]);
	}
	for(i=0; i<5; i++)
	{
		if(a[i]>largest)
		{
			largest=a[i];
			j=i;
		}
	}
	printf("THE LARGEST ELEMENT IS INDEX[%d] AND NUMBER%d:\n:",j,largest);
	 for(i=0;i<5;i++)
  {
     if(i==j)
        {
          i++;  
		  i--;
        }

     else
        {
          if(largest2<a[i])
	     {
               largest2=a[i];
             }
        }
  }

  printf("The Second largest element in the array is :  %d \n\n", largest2);
}

//Question 9 Write a program to search the array for any specific number.
int specific()
{
	int i,j;
	int k;
	printf("Enter your searching value:",k);
	scanf("%d",&k);
	int a[10];
	printf("Enter the 10 number of an array:\n");
	for(i=0;i<10; i++)
	{
		printf("the element index is [%d] and its number is:",i,a[i]);
		scanf("%d",&a[i]);
	}
	for(i=0; i<10; i++)
	{
	    if(a[i]==k)
	    printf("The number is found\n");
	    else
	    printf("The number is not found\n");
    }
        
}
//Question 10 Write a program to sort an integer array in ascending form.
int sort()
{
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	int i;
	int j;
	int temp;
	int a[n];
	printf("Enter the element of an array\n");
	for(i=0; i<n; i++)
	{
		printf("THE ELEMENT WITH INDEX[%d] and value is:",i,a[i]);
		scanf("%d",&a[i]);	
	}
	for(i=0; i<(n-1); i++)
	{
		for(j=0; j<(n-i-1); j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;	
		   }
		}
	}
	printf("after sorting the value is\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",a[i]);
	}
}
//Question 11.Take two 3x3 2D-Arrays as input from the user and show the addition and subtraction of the matrices.
int add_sub()
{
	int i;
	int j;
	int r;
	printf("ENTER THE VALUE OF ROWS");
	scanf("%d",&r);
	int c;
	printf("ENTER THE VALUE OF columns");
	scanf("%d",&c);
	int a[r][c];
	int b[r][c];
	int d[r][c];
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("'a'Enter the number of element and index is(%d,%d):",i,j ,a[i][j]);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("'b'Enter the number of element and index is(%d,%d):",i,j ,b[i][j]);
			scanf("%d",&b[i][j]);
		}
		
	}
		for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
				d[i][j]=a[i][j]+b[i][j];
				printf("%d\t",d[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0; i<r; i++)
		{
		for(j=0; j<c; j++)
		{
				d[i][j]=a[i][j]-b[i][j];
				printf("%d\t",d[i][j]);
		}
		printf("\n");
	}

	
}
//Question 12. Take a 3x2 and a 3x3 2D-Array as input from the user and show the multiplication of the matrices.
int multiply()
{
	int i;
	int j;
	int r;
	int k;
	int sum=0;
	printf("ENTER THE VALUE OF ROWS");
	scanf("%d",&r);
	int c;
	printf("ENTER THE VALUE OF columns");
	scanf("%d",&c);
	int a[r][c];
	int b[r][c];
	int d[r][c];
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("'a'Enter the number of element and index is(%d,%d):",i,j ,a[i][j]);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("'b'Enter the number of element and index is(%d,%d):",i,j ,b[i][j]);
			scanf("%d",&b[i][j]);
		}
		
	}
		for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			for(k=0; k<c;k++)
			{
				sum=sum+a[i][k]*b[j][k];
			}
				d[i][j]=sum;
				printf("%d\t",d[i][j]);
		}
		printf("\n");
	}


	
}
//Question 13. Write a program in C to print individual characters of string in reverse order.
int string1()
{
	int i;
	char s[8];
	gets(s);
	for(i=0; i<8; i++)
	{
		printf("%c",s[i]);
	}
	printf("\n");
	for(i=8; i>-1; i--)
	{
		printf("%c\t",s[i]);
	}
}
//Question 14.Write a program in C to count the total number of words in a string.
int string2()
{
	int i;
	char str[100];
	int c=0;
	gets(str);
	for(i=0;str[i]!='\0'; i++)
	if(str[i]==' ')
	c++;
	printf("the gap is:%d\n",c);
	int a=c+1;
	printf("the total word are %d",a);
}
//Question 16. Write a program in C to count total number of vowel or consonant in a string.
int string3()
{
	char s[100];
	gets(s);
	int l;
	int i;
	int v=0;
	int c=0;
	int w=0;
	l=strlen(s);

	printf("The total lenght is:%d\n",l);
	for(i=0; i<l;i++)
	{
		if(s[i]=='a'|| s[i]=='e' || s[i]=='i' ||s[i]=='o'||s[i]=='u'||s[i]=='A'|| s[i]=='E' || s[i]=='I' ||s[i]=='O'||s[i]=='U')
		{
			v++;
		}
		else if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
		{
			c++;
		}
		else if(s[i]==' ')
		{
			w++;
		}
	}
	int k=w+1;
	printf("The total  vowel are :%d\n",v);
	printf("The total  consonant are:%d\n",c);
	printf("The total  words are:%d\n",k);
}
//Question 17. Write a program in C to find maximum occurring character in a string.
int string4()
{
	char str[20];
	printf("Enter the string\n");
    gets(str);
	int i;
	int l;
	char j;
	printf("Enter the value j \n");
	scanf("%c",&j);
	int c=0;
	l=strlen(str);
	printf("The total lenght is:%d\n",l);
	for(i=0; str[i]!=0; i++)
	{if(str[i]==j)
			{
				c++;	
			}
		
	}
	printf("The frequency of word and %d",c);
}
//Question 15.Write a program in C to count total number of alphabets, digits and special characters in a string.
int string5()
{
	char s[100];
	gets(s);
	int l;
	int i;
	int A=0;
	int S=0;
	int D=0;
	l=strlen(s);

	printf("The total lenght is:%d\n",l);
	for(i=0; i<l;i++)
	{
		 if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
		{
			A++;
		}
		else if(s[i]>='0' && s[i]<='9')
		{
			
			D++;
		}
		else
		{
			S++;
		}
	}
	printf("The total ALPHABETS are :%d\n",A);
	printf("The total  DIGITS are:%d\n",D);
	printf("The total  SPECIAL DIGITS are:%d\n",S);
}
	

 

	
	

