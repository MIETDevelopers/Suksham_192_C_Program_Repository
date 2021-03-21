//Program to find factorial of a number using recursion.
#include <stdio.h>
int factorial(int);
int main()
{
   int num, fact;
   //Ask user for the input and store it in num
   printf("\nEnter any integer number:");
   scanf("%d",&num);
 
   //Calling our user defined function
   fact =factorial(num);
 
   //Displaying factorial of input number
   printf("\nfactorial of %d is: %d",num, fact);
   return 0;
}
int factorial(int n)
{
   //Factorial of 0 is 1 
   if(n==0)
      return(1);
 
   //Function calling itself: recursion
   return(n*factorial(n-1));
}