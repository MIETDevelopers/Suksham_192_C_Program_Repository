//Program: Searching an element in an array using linear search
#include<stdio.h>     //Pre-process directive to include standard input and output functions header file
int main(){  //main function
    int num; //variable declaration
    int i,  keynum, found = 0;

    printf("Enter the number of elements: \n");
    scanf("%d", &num);  //This will set the maximum number of values to be entered by user based on their choice.
    int array[num];
    printf("Enter the elements one by one: \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]); //This will scan the user input.
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &keynum);
    for (i = 0; i < num ; i++)
    {
        if (keynum == array[i] )
        {
            found = 1;
            break;
        }
    }
    if (found == 1) 
        printf("Element is present in the array at position %d .",i+1);
    else
        printf("Element is not present in the array.\n");
    return 0;    
}