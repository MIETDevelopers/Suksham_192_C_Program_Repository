//Program for swapping using call by refrence.
#include <stdio.h> //Input output header file
void swap(int num1, int num2)//function defination
{
    int temp;

    printf("In Function values before swapping: %d %d\n", num1, num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("In Function values after swapping: %d %d\n\n", num1, num2);
}

//main() function definition 
int main()
{
    int n1, n2;

    // Input two integers from user 
    printf("Enter two numbers: ");
    scanf("%d%d", &n1, &n2);

    // Print value of n1 and n2 in before swapping 
    printf("In Main values before swapping: %d %d\n\n", n1, n2);

    // Function call to swap n1 and n2 
    swap(n1, n2);
    printf("In Main values after swapping: %d %d", n1, n2);

    return 0; //Return function
}