#include <stdio.h>
int main(){
    char operator;
    double a, b;
    printf("Enter an operator (+, -, *, /):");//printing  the operator to be entered by the user
    scanf("%c", &operator);//scanning operators
    printf("Enter two operands:");//printing the numbers 
    scanf("%lf %lf",&a, &b);//scanning numbers
    switch(operator)
    {
        case '+':
            printf("%.lf + %.lf = %.lf",a, b, a+b);//addition funtion
            break;

        case '-':
            printf("%.lf - %.lf = %.lf",a, b, a-b);//subtraction function
            break;

        case '*':
            printf("%.lf * %.lf = %.lf",a, b, a*b);//mutliplication function
            break;

        case '/':
            printf("%.lf / %.lf = %.lf",a, b, a/b);//division function
            break;
    printf("Error encountered by the input values");
    }