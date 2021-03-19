//Fibonacci series using for loop
#include<stdio.h>     //Pre-process directive to include standard input and output functions header file 

int main()   //Main function 
{    
 int n1=0,n2=1,n3,i,number;    
 printf("Enter the number of elements:");   //Ask user to input number of terms   
 scanf("%d",&number);    
 printf("\n%d %d",n1,n2);//printing 0 and 1    
 for(i=2;i<number;++i)   //loop starts from 2 because 0 and 1 are already printed    
 {    
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;    
 }  
  return 0;  // return 0 to oprerating system
 }   