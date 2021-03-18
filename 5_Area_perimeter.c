#include<stdio.h>           //Pre-process directive to include standard input and output functions header file

int main(){                 //Main Function
	float raduisOfCircle, sideOfSquare, legthOfRectangle, breadthOfRectangle;   //variable declaration with datatype float
	scanf("%f %f %f %f", &raduisOfCircle, &sideOfSquare, &legthOfRectangle, &breadthOfRectangle);   //scanf function calling
	printf("Area of Circle: %f",((22*raduisOfCircle*raduisOfCircle)/7));     //printf function calling to print the Area of Circle
	printf("\nPerimeter of Circle: %f",((2*22*raduisOfCircle)/7));           //printf function calling for printing the Perimeter of Circle 
	printf("\nArea of Square: %f",(sideOfSquare*sideOfSquare));              // printf function to print of Area of Square
	printf("\nPerimeter of Square: %f",(4*sideOfSquare));                        //printf function to print perimeter of square
	printf("\nArea of Rectangle: %f",(legthOfRectangle*breadthOfRectangle));            //printing the value of Area of Rectangle
	printf("\nPerimeter of Rectangle: %f",(2*(legthOfRectangle+breadthOfRectangle)));     //printf function to print perimeter of rectangle
	return 0;            //Return functio}
}