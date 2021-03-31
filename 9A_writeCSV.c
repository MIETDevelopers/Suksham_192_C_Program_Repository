#include <stdio.h> 		//stdio.h is the header file for standard input and output.
#include <stdlib.h>		//Including standard library header files.
#include <string.h>		//Including string header files. 
int main() { 			//main function body.
    FILE* fp = fopen("C:\\Users\\ASUS\\OneDrive\\Desktop\\C_Repository\\Bharat_189_C_Programs_Repository\\9A_ReadCSV.csv", "a+"); //File path.
    char name[50]; 			//Variable declarartion of character data type.
    int rollno, marks; 		//Variable declarartion of integer data type.
    if (!fp) { 
        // Error in file opening 
        printf("Can't open file\n");    //Printf function calling. 
        return 0; 
    } 
    printf("\nEnter Student Name\n");    //Printf function calling. 
    scanf("%s", &name);				//scanf function calling. 
    printf("\nEnter Roll Number\n");    //Printf function calling. 
    scanf("%d", &rollno);			//scanf function calling. 
    printf("\nEnter Attendance\n");    //Printf function calling. 
    scanf("%d", &marks);			//scanf function calling. 
    fprintf(fp, "%s, %d, %d\n", name, rollno, marks); // Saving data in file 
    printf("\nNew student deatils added.");     //Printf function calling.
    fclose(fp); 		//It will close file
    return 0; 
}