#include<stdio.h>
int main(){
	float raduisOfCircle, sideOfSquare, lengthOfRectangle, breadthOfRectangle;
	scanf("%f %f %f %f", &raduisOfCircle, &sideOfSquare, &lengthOfRectangle, &breadthOfRectangle);
	printf("Area of Circle: %f",((22*raduisOfCircle*raduisOfCircle)/7));
	printf("\nPerimeter of Circle: %f",((2*22*raduisOfCircle)/7));
	printf("\nArea of Square: %f",(sideOfSquare*sideOfSquare));
	printf("\nPerimeter of Square: %f",(4*sideOfSquare));
	printf("\nArea of Rectangle: %f",(lengthOfRectangle*breadthOfRectangle));
	printf("\nPerimeter of Rectangle: %f",(2*(lengthOfRectangle+breadthOfRectangle)));
	return 0;
}