/* Sarah Anderson
CPSC 1111.002
Lab 8: Functions
Description: Asks for a binary  number from user and creates array and converts 
it to decimal equivalent. Then it asks for a decimal number and it converts
that to the binary equivalent.
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

//prototypes
int btod(int size, char inputBin[size]);
int dtob(int inputDec);

//main function
int main(void) {

	int size = 0, decimalVal = 0, decimal = 0, binary = 0;
	char inputBin[50];

//Binary to Decimal 
	printf("Enter a binary number:");
	scanf("%s", inputBin);

	size = strlen(inputBin);

	decimalVal = btod(size, inputBin);
	printf("The decimal number is %d.", decimalVal);
	printf("\n");

//Decimal to Binary 
	printf("Enter a decimal:");
	scanf("%d", &decimal);
	binary = dtob(decimal);
	printf("The binary number is %d.", binary);
	printf("\n");

	return (0);
}

//Function to change decimal to binary 
int dtob (int decimal)
{
	int remain = 0, num = 0, j = 0, i = 0, binary = 0, k = 0;
	
	num = decimal;

	while (decimal >= 1)
	{
		decimal = decimal / 2;
		j = j + 1;
	}

	char array[j];
	k = j - 1;

	for (i = 0; i < j; i++){
		remain = num % 2;
		array[i] = remain;
		num = num / 2;
	}

	binary = 0;

	for (i = k; i >= 0; i--)
	{
		if (array[i] == 1)
			binary = binary + pow(10,i);
	}	
	
	return (binary);
}

//Binary to Decimal 
int btod(int size, char inputBin[size]){
		int i = 0, j = 0, decimalVal = 0;

		for (i = (size - 1), j = 0; i >= 0; i--, j++)
		{
			if (inputBin[i] == '1')
			{
				decimalVal = decimalVal + pow(2,j);
			}
		}
return (decimalVal);
}
