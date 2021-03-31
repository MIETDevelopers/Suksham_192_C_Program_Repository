#include <stdio.h> //Pre processor directive to include standard input output functions header file
struct student { //structure body
    char name[50];        //Variable declarartion of character data type.
    int roll;        //Variable declarartion of integer data type.
    float marks;        //Variable declarartion of float data type.
}s;
int main(){ 		//main function body starting
    printf("Enter information:\n");    //Printf function calling.
    printf("Enter name: ");    //Printf function calling.
    fgets(s.name, sizeof(s.name), stdin);
    printf("\nEnter roll number: ");    //Printf function calling.
    scanf("%d", &s.roll);    //scanf function calling.
    printf("\nEnter marks: ");    //Printf function calling.
    scanf("%f", &s.marks);    //scanf function calling.
    printf("\nDisplaying Information:\n");    //Printf function calling.
    printf("\nName: ");    //Printf function calling.
    printf("%s", s.name);    //Printf function calling.
    printf("\nRoll number: %d\n", s.roll);    //Printf function calling.
    printf("\nMarks: %.1f\n", s.marks);    //Printf function calling.
  	return 0;
}
