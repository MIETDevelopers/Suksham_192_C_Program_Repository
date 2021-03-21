//Program: C program to create Simple Calculator using switch case and function for every operation

#include <stdio.h> //Pre-process directive to include standard input and output functions header file
int main() {   //main fucntion
  char operator; //variable declaraion with data type char
    double first, second; //variable declaration with datatype double 
    printf("Enter an operator (+, -, *,): "); //printf funtion to print operator
    scanf("%c", &operator);  //scanf function to read the opperator from the user
    printf("Enter two operands: "); //printf fucnction to print operands
    scanf("%lf %lf", &first, &second); //scanf function to read thetwo input operands

    switch (operator) {    //declaration of switch case operator
    case '+': 
        printf("%.1lf + %.1lf = %.1lf", first, second, first + second); //printf function calling for addition 
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", first, second, first - second); //printf function callinf for subtraction
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", first, second, first * second); //printf function callinf for multiplication
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", first, second, first / second); //printf function callinf for division
        break;
        // if operator doesn't match any case constant
    default:
        printf("Error! operator is not correct");
    }

    return 0; //return function
}