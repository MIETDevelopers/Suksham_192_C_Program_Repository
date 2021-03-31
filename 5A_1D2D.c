#include <stdio.h> //Pre Processor directive to include standard input output function header file
void disp( char ch){
   printf("%c ", ch);  //printf function calling
}
int main(){ //main function body 
   	char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'}; 	// Array Declaration
   	for (int x=0; x<10; x++){ 		//Passing each element one by one using subscript
       disp (arr[x]);
   	}
   	return 0;// return statement 
}