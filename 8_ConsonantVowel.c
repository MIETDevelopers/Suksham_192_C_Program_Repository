 //Program: Even or odd alphabets
#include <stdio.h>    //Pre-process directive to include standard input and output functions header file

int main()            //main function
{
	char ch;      //variable declaration with data type char
	printf("Enter character\n");  //printf function calling
	scanf("%c",&ch);        //scanf function calling
	//variable definition using switch case for both uppercase and lowercase variable "c"
	switch(ch)
	{
	    case'a':
	    case'e':
	    case'i':
	    case'o':
	    case'u':
	    case'A':
	    case'E':
	    case'I':
	    case'O':
	    case'U':
	    printf("%c is a vowel",ch);
	    break;
	    //if variable doesn't match any case variable 
	    default:
	    printf("%c is a consonant",ch);
	    break;
	}   
	 return 0; //return function 
}