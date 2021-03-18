#include <stdio.h>
#include <math.h>//header file to include mathematical functions
int main(){
	char purpose;
	printf("Enter the mode of operation.\n 1.Area of Circle.\n 2.Area of Square.\n 3.Area of Rectangle.\n");
	scanf("%c", &purpose); //scanning the operater entered by user.
	float value1, value2;
	printf("Enter values of the shape:\n");
	scanf("%f %f", &value1, &value2); //scanning the numbers entered by user.
	switch(purpose) //Switch-Case Function used.
	{
		case'1':
			printf("Area of Circle = %f", ((22*value1*value1)/7));//printing area of circle
			break;
		case'2':
			printf("Area of Square = %f", value1*value1);//printing area of square
			break;	
		case'3':
			printf("Area of Rectangle = %f", value1*value2);//printing area of rectangle
			break;
		
		default:
            printf("Error eccoured, Please enter the values correctly!");	//default
	}
	return 0; 
}