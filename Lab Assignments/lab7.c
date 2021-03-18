/* Sarah Anderson
CPSC 1111.002
Lab 7: Arrays
Description: Asks for decimal number from user and creates array and converts 
it to binary equivalent.
*/

#include <stdio.h> 
int main(void) {
	int dec = 0;
	int size = 0;
	int i = 0;
	int array[50];
	int j = 0;

	printf("Enter a decimal number:");
	scanf("%d", &dec);

/*Creates the size of the number, divides the input by two and keeps the 
remainder, and sets that remainder to a value in the array. */
	while (dec > 0)
	{
//		size = size + 1;
		array[i] = dec % 2;
		dec = dec / 2;
		i++;
	}

/*This for loop prints out the array but in opposite order. It goes from the 
last value in the array to the first value in the array.*/
	for (j = i - 1;j >= 0; j--) 
	{
		printf("%d",array[j]);
	}

return 0;
}
