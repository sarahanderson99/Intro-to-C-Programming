//Sarah Anderson
//CPSC 1111.005
//lab 12 
//11-27-18

//Description: This file asks for a length of a string and uses malloc to 
//allocate enough space. If there isnt enough room to allocate it, then it 
//prints out "failed". IF there is it asks for a inout from user and then
//it is copied from one string to another. 

#include "defs.h"

int main(void){
	char *str1;
	char *str2;
	char *str3 = "You entered:  ";
	int howLarge = 0;
	char *myString;

	printf("What is the longest length of a string that you will enter?");
	scanf("%d", &howLarge);

	//allocated the amount of memeory necessary to hold the string inputed
	myString = malloc((howLarge + 1) * sizeof(char));

	//checks to see if there is enough memeory to allocate
	if (myString == NULL){
		printf("malloc failed to allocate enough memory!\n");
		return 1;
	}

	printf("Enter a string: ");
	scanf("%s", str2);
	
	//copies string from one to another and prints it out
	my_strcpy(str1, str3);
	printf("%s%s\n", str3, str2);

	return 0;
}

void my_strcpy(char dest[], const char src[]){
	int i = 0;
	
	//copies the string from src[] to dest[]
	for (i = 0; i != '\0'; i++)
	{
		dest[i] = src[i];
	}
}
