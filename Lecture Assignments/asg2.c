//Sarah Anderson
//CPSC 1110-001
//PA2
//12-2-18

//Description: This file contains the main function that uses all of the 
//prototypes to do a set of counting, printing, and switching. The textToit
//function copys the .txt file into arrays. The textPrint() function 
//prints out the arrays containing the .txt file when called upon.

#include "defs.h"

int main(void){

	int numLines;
	char allLines[MAX_LINE][MAX_LINE_LEN];

	//Copys the .txt fileover to arrays
	numLines = textInit(allLines);

	//prints out the .txt file when called 
	textPrint(allLines, numLines);
	//printing out the number of lines
	printf("Number of lines is: %d\n", numLines);

	//Counts the amount of words and number of characters in the file
	counts(allLines, numLines);
	//Switches the uppercase to lowercase and vice versa
	convertCase(allLines);
	//prints out the .txt file after swtiching
	textPrint(allLines, numLines);
	//Converts the text back to origninal
	convertCase(allLines);
	//Prints the text back out 
	textPrint(allLines, numLines);

	//searches for a word that the user inputs
	searchForWord(allLines, numLines);

return 0;
}

int textInit(char allLines[MAX_LINE][MAX_LINE_LEN]){

	FILE *inputFile;
	int numLines = 0;
	int i = 0;
	
	//Opens the file 
	inputFile = fopen("poe-raven.txt", "r");

	//Using the fgets function, it gets the .txt file and copys it to an array
	while (fgets(allLines[i], MAX_LINE, inputFile) != NULL){
		i++;
		numLines++;
	}

	//Closes the file
	fclose(inputFile);

return (numLines);
}
 

void textPrint(char allLines[MAX_LINE][MAX_LINE_LEN], int numLines){

	int i = 0;
	int j = 0;

	//Accesses each of the characters in the array and prints it out
	for (i = 0; i < numLines; i++){
		for (j = 0; allLines[i][j] != '\0'; j++){
			printf("%c", allLines[i][j]);
		}
	}
}
