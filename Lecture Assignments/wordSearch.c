//Saarah Anderson
//CPSC 1110.001
//Programming Assignment 2
//12-2-18

//contains the searchforWord() function that calls for a user inputed string 
//that is then searched for in the .txt file that is provided. Once that 
//number is found, it then prints out that number.

#include "defs.h"

void searchForWord(char allLines[MAX_LINE][MAX_LINE_LEN], int numLines){
	FILE *inputFile;
	char inputWord[20];
	char tempOneD[15000];
	int inputCount = 0;
	int i = 0, j = 0, k = 0, l = 0;
	char tempArr[25];

	inputFile = fopen("poe-raven.txt","r");

	//input for word wanting to be searched
	printf("Search for what word? ");
	scanf("%s", inputWord);
	
	//inputs the number of rows
	for (i = 0; i < numLines; i++){
		//inputs the number of colums
		for (j = 0; j < MAX_LINE_LEN; j++){
			if (allLines[i][j] == '\0'){
				tempOneD[k] = allLines[i][j];
				k++;

				//clears the tempArr array
				for(l = 0; l < MAX_LINE_LEN; l++){
					tempArr[l] = '0';
				}

				l = 0;
				
				//puts the value from the 1D array into a temp array
				while((fscanf(inputFile,"%s",tempArr) == 1)){ 
					tempArr[l] = tempOneD[l];
				//	printf("%s", tempArr); tests to make sure the output is right
					l++;
				
				//checks to make sure that the two strings match and arent inside
				//of another word.
					if ((strcmp(tempArr, inputWord) == 0)
					&& !isalpha(tempOneD[l - 1])){
						inputCount++;
					}
				}
			}
		}
	}
	
	
	printf("\n> %s < appears %d times\n", inputWord, inputCount);
} 
