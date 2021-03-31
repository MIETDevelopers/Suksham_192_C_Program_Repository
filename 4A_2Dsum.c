  
#include <stdio.h>      //stdio.h is the header file for standard input and output.
#define MAXROW		10
#define MAXCOL		10
int main(){
	int matrix[MAXROW][MAXCOL];       
	int i,j,r,c;        //Variable declarartion of integer data type.
	int sum,product;        //Variable declarartion of integer data type.
	printf("Enter number of Rows :");    //Printf function calling.
	scanf("%d",&r);    //scanf function calling.
	printf("Enter number of Cols :");    //Printf function calling.
	scanf("%d",&c);    //scanf function calling.
	printf("\nEnter matrix elements :\n");    //Printf function calling.
	for(i=0;i< r;i++){
		for(j=0;j< c;j++){
			printf("Enter element [%d,%d] : ",i+1,j+1);    //Printf function calling.
			scanf("%d",&matrix[i][j]);    //scanf function calling.
		}
	}
	sum		=0;			//Initializing sum variables.
	product	=1;			//Initializing product variables.
	for(i=0;i< r;i++){
		for(j=0;j< c;j++){
			sum		+=	matrix[i][j];
			product	*=	matrix[i][j];
		}
	}
	printf("\nSUM of all elements : %d \nProduct of all elements :%d",sum,product);    //Printf function calling.
	return 0;	//return statement 
}