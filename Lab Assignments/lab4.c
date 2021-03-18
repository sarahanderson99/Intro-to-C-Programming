/*
Sarah Anderson
CPSC 1111-002
9/18/2018
Lab #4
This program has a user enter an integer and it prints out the multplication 
table from 1-N (which N is the number that the user entered).
*/

#include <stdio.h>
int main(void) {

	int input;  
	int i;
	int j;
	int result;

	printf("Enter an integer to display a multiplication table from 1 to N:"); 
	fscanf(stdin,"%d", &input); 

	printf(" X");

// This first for loop creates the values 1 - N horizontally across the top
	for(i = 1; i <= input; i++) 
	{
		printf(" %4d",i);
	}		
	printf("\n");

/*The first for statement creates the values 1-N and prints them vertically down
left side. */
	for(i = 1; i <= input; i++)
	{

/*if-else statement is necessary because it puts two spaces in front of a single
digit (i.e. 9) but only 1 space in front of a two digit number (i.e. 10).*/
		if (i <= 9)
		{ 
			printf("%2d",i);
		}
		else
		{ 
			fprintf(stdout,"%d",i);
		}
/*The for statement below multiplies i and j and prints out the result then adds
1 to the value of j*/
		for (j = 1; j <= input; j++) 
		{
			result = j*i;
			fprintf(stdout,"%5d",result);
		}
		fprintf(stdout,"\n"); 
	}

return 0;
}

