//Name:Suksham Gupta
// Program: Euclidean Program
#include <stdio.h>//Pre-process directive to include standard input and output functions header file
#include <math.h> //Pre-process directive to include mathematical functions header file

int main()       //Main function
{
	float x1,y1,x2,y2,distance;        //variable declaration with data type float
	printf("Enter point one(x1,y1)\n");   //printf function calling
   //scanf function for taking x1, y1 cordinate
	scanf("%f %f",&x1,&y1);
	printf("Enter point two(x1,y1)\n");   //printf function calling
	scanf("%f %f",&x2,&y2);
	distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));       //variable defintion for Euclidean distance
	printf("distance between(%f,%f)&(%f,%f)is %f\n",x1,y1,x2,y1,distance);
	return 0;         //return function
}