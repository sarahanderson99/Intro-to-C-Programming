//Sarah Anderson
//CPSC 1111
//Lab 12 Pointers and Arrays
//11-27-18

//Description: This file copys one array into another and prints it out
#include "defs.h"

int main(void) {
	char str1[31];
	char str2[31];
	char str3[] = "You entered: ";
	
	printf("Enter a string of length at most 30:");
	scanf("%s",str2);
   
	//Runs the my_strcpy function
	my_strcpy(str1,str3);

	//prints out both str3 and str2
	printf("%s%s\n", str3, str2);
   	
	return 0;
}

void my_strcpy(char dest[], const char src[]){
	int i = 0;
	
	//Copys the string from scr[] to dest[] 
	for (i = 0; i != '\0'; i++){
		dest[i] = src[i];
	}
}
