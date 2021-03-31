#include <stdio.h> //Pre processor directive to include standard input output functions header file
int main() //main function body starting
{
    int a;  
    a = 10;
    int *p = &a; 
    // Declaring and initializing the pointer
    printf("%d\n", *p);//prints the value of 'a'  
    printf("%d\n", *&a);  
    printf("%u\n", &a);//prints the address of 'a'    
    printf("%u\n", p);        
    printf("%u\n", &p); //prints address of 'p'      
    return 0;    //return statement  
}