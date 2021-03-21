//Program for swapping using call by value.
#include <stdio.h>//Pre-process directive to include standard input and output functions header file
 
void swap(int,int);        
 
void main( )//main function
{
    int n1,n2;
    printf("Enter the two numbers to be swapped\n");
    scanf("%d%d",&n1,&n2);//scanning numbers 
    printf("\nThe values of n1 and n2 before calling the swap function are n1=%d n2=%d",n1,n2);//values before calling function
    swap(n1,n2);                                          
    printf("\nThe values of n1 and n2 after calling the swap function are n1=%d n2=%d",n1,n2);//values after calling function
}
 
void swap(int n1,int n2)                           
{ 
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
    printf("\nThe values of n1 and n2 after swapping are n1=%d n2=%d",n1,n2); //values after swapping
}