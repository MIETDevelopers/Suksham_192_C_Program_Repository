  
#include <stdio.h>      //stdio.h is the header file for standard input and output.
#define MAX_SIZE 100
int main(){
    int arr[MAX_SIZE];     
    int i, n, sum=0;        //Variable declarartion of integer data type.
    printf("Enter size of the array: ");    //Printf function calling.
    scanf("%d", &n);    //scanf function calling.
    printf("Enter %d elements in the array: ", n);  //Printf function calling.
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);   //scanf function calling.
    }
    for(i=0; i<n; i++){
        sum = sum + arr[i]; //Add each array element to sum
    }
    printf("Sum of all elements of array = %d", sum);  //Printf function calling.
    return 0; //return statement 
}