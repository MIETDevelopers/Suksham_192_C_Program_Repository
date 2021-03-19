#include<stdio.h>            // include stdio.h library 

 int main()                //Main function 
 {
     int number,lastDigit,sum=0;   // variable declaration

     printf("Enter any number: ");     //Ask user to input number  
     scanf("%d",&number);

     while(number!=0)            // Loop started to calculate sum of digits
     {
         lastDigit=number%10;
         sum += lastDigit;
         number/=10;
     }

     printf("Sum of digits =  %d\n",sum);    //print statement should be according to Question
     return 0;      // return 0 to oprerating system
 }