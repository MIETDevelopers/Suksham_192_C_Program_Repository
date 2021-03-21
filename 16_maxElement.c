//Program to find max element and index in array.
#include<stdio.h>  //pre processor directive to input output functions
int main()//main function
{
	int i;
	float arr[5];

	printf("Please enter five numbers:\n ");

	for (i = 0; i < 5; ++i) //for loop
	{
    scanf("%f", &arr[i]);
	}

		for (i = 1; i < 5; ++i) //for loop
		{
    	if (arr[0] < arr[i])
        	arr[0] = arr[i];
		}
	printf("Largest element = %.2f", arr[0]); //output

	return 0;
}