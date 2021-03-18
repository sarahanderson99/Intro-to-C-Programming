#include "defs.h"

//function to change a binary number to a decimal number
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
