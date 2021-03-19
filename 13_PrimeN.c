//Program: Program to check whether the number is prime or not

#include <stdio.h>         //Pre-process directive to include standard input and output functions header file
int main(){ //main function
     int n, i, count = 0;

        printf("Enter the Number.\n"); //printf function calling
        scanf("%d",&n);//This will scan (read) the number entered by user.

        for(i=2; i<=n/2; ++i){ //Declaration of a forloop
    //Check for non prime number 
        if(n%i==0){
            count=1;
            break;
        }
    }
    //Declaration of if else statement
    if (count==0)
        printf("%d is a Prime number.",n);
    else
        printf("%d is not a Prime number.",n);
    return 0; //return function

} 