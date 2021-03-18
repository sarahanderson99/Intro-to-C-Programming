//Sarah Anderson
//CPSC 1110.001
//Porgramming Assignment 2
//12-2-18

//This file contains the convertCase() function that converts uppercase to 
//lowercase and vice versa. It will have the .txt file go back to normal
//if you run it twice in a row.

#include "defs.h"

void convertCase(char allLines[MAX_LINE][MAX_LINE_LEN]){

	int i = 0, j = 0;
	char temp;

	for (i = 0; i <= MAX_LINE; i++){
		for (j = 0; allLines[i][j] != '\0'; j++){

			temp = allLines[i][j];
		
			if (temp >= 'A' && temp <= 'Z')
				allLines[i][j] = allLines[i][j] + 32;
		
			else if(temp >= 'a' && temp <= 'z')
				allLines[i][j] = allLines[i][j] - 32;
		}
	}
}
