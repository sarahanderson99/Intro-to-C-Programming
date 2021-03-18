#include "defs.h"

//function to change a decimal number to a binary number
int dtob(int decimal)
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

	for (i = 0; i < j ; i++)
	{
		remain = num % 2;
		array[i] = remain;
		num = num / 2;
	}

	binary = 0;

	for (i = k; i >= 0; i--)
	{
		if(array[i] == 1)
			binary = binary + pow(10,i);
	}

	return (binary);
}

