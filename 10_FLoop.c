//Suksham Gupta
//Program to find factorial using for loop
#include<stdio.h>   //Pre-process directive to include standard input and output functions header file 

int main()     //Main function
{
  int i,f=1,num;            //variable declaration using int datatype
 
  printf("Enter an integer");   //printf function calling
  scanf("%d",&num);      //scanf function calling to receive input
 
  for(i=1;i<=num;i++)  //for loop started 
      f=f*i;
 
  printf("Factorial of %d is: %d",num,f);  //print statement should be according to Question
  return 0; //return function
}