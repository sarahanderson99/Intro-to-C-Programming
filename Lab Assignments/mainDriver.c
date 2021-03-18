/* Fall 2018, CPSC 1111, Lab 11
	
	mainDriver.c file
		the main function uses command-line arguments 
		(notice the function signature)

		to run the program, type a.out and the image file name, such as:
			./a.out tiger.ppm

		use fprintf to stderr for printing any messages or values to the user

		the parseHeader() function is called from here 

		
*/ 

#include "defs.h"


int main(int argc, char *argv[]) {
	int width, height;
	FILE *inputFile;   	// file pointer

	// if user only types the executable name and no other arguments, 
	// remind them to type the image file name also
	if (argc == 1) {
		fprintf(stderr, "<executable> <image_name>\n");
		exit(1);
	}

	// open the image file for reading
	// - - > fill in code here:
 
	inputFile = fopen(argv[1], "r");
	
	parseHeader(inputFile, &width, &height);

	//if (inputFile == NULL) {
	//	fprintf(stderr, "File open error. Exiting program./n");
	//	exit(1);
//	}

	// get the width and height of the image and print values to user
	// - - > fill in code here:

	fprintf(stderr, "\nwidth is %d, height is %d \n\n", width, height);


	return 0;
}
