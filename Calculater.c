//Program: Understanding different arithmetic operators using a simple calclator
#include <stdio.h>     //Pre-process directive to include standard input and output functions header file

int main() {                 //main fucntion
    char operator;           //variable declaraion with data type char
    double n1, n2;          //variable declaration with datatype double 
    printf("Enter an operator (+, -, *, /): ");  //printf funtion to print operator
    scanf("%c", &operator);                      //scanf function to read the opperator from the user
    printf("Enter two operands: ");
    scanf("%lf %lf",&n1, &n2);
    switch(operator)         //declaration of switch case operator
    {
        case '+':                                         
            printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);        
            break;                                               // this statement is correct syntaxt wise
        case '-':                                               //printf function calling for subtraction
            printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
        case '*':                                               //printf function calling for multiplication
            printf("%.1lf * %.3lf = %.2lf",n1, n2, n1*n2);
        case '/':                                               //printf function calling for division
            printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
            break;
        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
    }
    return 0;   //return function
}