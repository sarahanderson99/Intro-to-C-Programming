/*	CPSC 1111, Fall 2018
   reverse_echo.c program for Lab 10

	see README file for description
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	int i;

	printf("argc is:  %d\n", argc);	

	// finish the rest of the for loop 
	for (i = argc - 1; i >= 0; i--) 
	{
	printf("%s ", argv[i]);		
	}

	printf("\n\n");

	return 0;
}
