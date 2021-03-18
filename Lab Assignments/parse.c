/* Sarah Anderson
CPSC 1111
Lab11
11-13-18

Fall 2018, CPSC 1111, Lab 11
	
	parse.c file, will be used for PA3 and will contain:

		1. parseHeader() - - > this lab
			is called from the main() function
			gets cols & rows from the header of the image file

		2. getImage() function - - > for the assignment, NOT this lab
			gets the image data and puts into the 2-D array (of struct pixels)

		3. any other helper functions you may write for parsing the file 

		use fprintf to stderr for printing any messages or values to the user
		
*/ 

#include "defs.h"


// parseHeader() function goes here:

void parseHeader(FILE *inputFile, int *wid, int *hei){
	char ch[1000];
	char width[500],height[500];
	int i = 0, j = 0;

	fgets(ch, 1000, inputFile);

	if (strlen(ch) == 3){
		//julia.ppm
		do{
			fgets(ch, 1000, inputFile);
			}
		while(ch[0] == '#');
		
		sscanf(ch,"%i %i", wid, hei);
	}
	
	else {
		//tiger.ppm and twotigers.ppm
		i = 3;
		while (ch[i] != ' '){
			width[j] = ch[i];
			i++;
			j++;
		}
		width[j] = '\0';
		
		i++;
		j = 0;

		while(ch[i] != ' ' && ch[i] != '\n'){
			height[j] = ch[i];
			i++;
			j++;
		}
		height[j] = '\0';

		sscanf(width,"%i",wid);
		sscanf(height,"%i",hei);
		}
}	
