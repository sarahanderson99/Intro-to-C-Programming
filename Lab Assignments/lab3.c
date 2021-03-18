
Section 002
Lab 3
9-11-18

Answer to question in 10th part of the lab: I got that the first part worked butfor the second I got the output "Floating point exception" which means that I need to declare a number as float to get the numbers out.
*/

#include <stdio.h>
int main(void){
	int intVar1 = 0, intVar2 = 0, intVar3 = 0, intVar4 = 0; //creating integers intVar1-4

	intVar1 = 4;  //assigning the value of 4 to the integer intVar1
	intVar2 = 5;  //assigning the value of 5 to the intger intVar2

	int exp1 = 0, exp2 = 0, exp3 = 0, exp4 = 0; //creating integers exp1, exp2, exp3, exp4
	char charVar; //creating character variable charVar

	exp1 = intVar1 + ((5 * intVar2) / (3 * intVar1) ); //assigning the equation to exp1 which the final answer should be 6 
	exp2 = (intVar1 + (5 * (intVar2 / 3)) * intVar1); //assigning the equation to exp2 which the final answer should be 24
	
	/*the next 5 lines prints out eh values specified */
	//the difference between fprintf and printf is that fprintf specifies where the output is sent to and printf just sends it automatically
	fprintf(stdout,"intVar1 = %i", intVar1);  
	fprintf(stdout," and intVar2 = %i\n", intVar2);
	fprintf(stdout,"Expression values are:\n");
	fprintf(stdout,"exp1 = %i\n", exp1);
	fprintf(stdout,"exp2 = %i", exp2);

	intVar3 = 5; //assigning the value of 5 to intVar3
	intVar4 = 9; //assiging the value of 9 to intvar4

	exp3 = (intVar4 % 2) / (intVar4 / intVar3); //assigning the equation to exp3 which the final answer should equal 1
	exp4 = 2 + intVar3 * intVar4; //assigning the equation to exp4 which the final answer should equal 47

	/*the next 5 lines prints out the values specified */

	fprintf(stdout,"\n\nintVar3 = %i", intVar3);
	fprintf(stdout," and intVar4 = %i\n", intVar4);
	fprintf(stdout,"Expression values are:\n");
	fprintf(stdout,"exp3 = %i\n", exp3);
	fprintf(stdout,"exp4 = %i\n", exp4);

	char H; //defining the character H 
	charVar = H; //defining that charVar is equal to H
	
	//the next two lines prints out the values of ASCII for H and h

	fprintf(stdout,"charVar = H ASCII value: %d\n\n", 'H');
	fprintf(stdout,"charVar = h ASCII value: %d", 'h');

return 0;

}

