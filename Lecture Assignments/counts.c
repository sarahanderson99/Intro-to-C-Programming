//Sarah Anderson
//CPSC 1110.001
//Programming Assignment 2
//12-2-18

//this file contains the counts() function which will find the number of
//words and the number of characters

#include "defs.h"

void counts(char allLines[MAX_LINE][MAX_LINE_LEN],int numLines){

	int i = 0, j = 0;
	int numWords = 0;
	int numChar = 0;

	for (i = 0; i < numLines; i++){
		j = 0;
		//ignores the number of characters (i.e. spaces) until the first word
		while(allLines[i][j] == ' ' || allLines[i][j] == '\n') {
			j++;
		}

		for (j = j; allLines[i][j] != '\0'; j++){
			//counts number of words
			if (allLines[i][j] == ' ' || allLines[i][j] == '\n') {
				numWords++;
			}
			//counts number of characters
			if (allLines[i][j] != ' ' && allLines[i][j] != '\n' 
				&& allLines[i][j] != '\0'){
				numChar++;
			}
		}
	}
	
	printf("Word count is: %d\n", numWords);
	printf("Character count is: %d\n", numChar);
}
