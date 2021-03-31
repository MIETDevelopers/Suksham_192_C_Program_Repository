#include <stdio.h> //Pre-Process directive to include standard input output header file.
int main() { // main function body starting
  	int values[10]; // Array Declaration of size 10
  	printf("Enter 10 integers: "); //input integers
  	for(int i = 0; i < 10; ++i) {// taking input and storing it in an array
     	scanf("%d", &values[i]);
  	}
  	printf("Displaying integers: ");
  	// printing elements of an array
  	for(int i = 0; i < 10; ++i) {           //for loop
     	printf("%d\n", values[i]);
  	}
 	return 0;       //return statement 
}