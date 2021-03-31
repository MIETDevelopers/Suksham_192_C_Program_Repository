#include <stdio.h> //Pre processor directive to include standard input output functions header file
int main () { //main function body starting
   
   double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};   /* an array with 5 elements */
   double *p;
   int i;
   p = balance;
   /* output each array element's value */
   printf( "Array values using pointer\n");	
   for ( i = 0; i < 5; i++ ) {
      printf("*(p + %d) : %f\n",  i, *(p + i) );
   }
   printf( "Array values using balance as address\n");	//printf function calling
   for ( i = 0; i < 5; i++ ) {
      printf("*(balance + %d) : %f\n",  i, *(balance + i) );
   }
   return 0;   //return statemnet 
}