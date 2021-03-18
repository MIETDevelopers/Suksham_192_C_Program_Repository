//Program: Check whether an entered number is even or odd
#include <stdio.h>  //Pre-process directive to include standard input and output functions header file

int main()             //main function
{
	int n;                 //variable delaration with data type int
	printf("Enter point number");          //printf function calling
	scanf("%d",&n);                     //scanf function calling to receive input 
	if (n%2==0)                                  //declaration of if else statement
	   printf("number is even %d",n);           //if  the remainder of a number is 0 after dividing with two, print even
	else
	     printf("number is odd %d",n);               //if  the remainder of a number is not 0 after dividing with two, print odd
	return 0;     //return function
}