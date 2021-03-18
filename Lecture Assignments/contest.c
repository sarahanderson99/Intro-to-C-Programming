/*
Sarah Anderson
CPSC 1110.001
Programming Assignment 1

Description: This program asks for the scores from six judges for a pumpkin 
carving contest held at a corn maze. The inputs are put into an array and 
then sortd. The lowest score is dropped, then they are averaged to get a
mean score. Prints out the average score and prints "That contestant won a
t-shirt if the score is above 9.0. Lastly, it asks to see if they want to
add another pumpkins scores. If you input a 1 you can input another set of
scores and if you input a 0 it will end the program. When you end the 
program, it will give you a summary that includes the number of pumpkins
scored, number of tshirts won, and the total avergae of all the pumpkins 
scored.
*/

#include <stdio.h>
#include <float.h>

int main(void){

	int judge = 6;
	float scores[judge];
	float avg = 0, total_avg = 0;
	int i = 0, j = 0, k = 0, g = 0, contin = 1, count = 0, tshirt_count = 0;
	double temp = 0, sum = 0, sum2 = 0;

	printf("-+-+-+-+-+-+-+-+-+-+-PUMPKIN CONTEST-+-+-+-+-+-+-+-+-+-+-\n");
	
	do 
	{
		printf("Enter the %d judges scores:\n", judge);
		
		//Enters the scores into an arry 
		for (j = 0; j < judge; j++) 
		{
		scanf("%f", &scores[j]);
		}

		//Sorts the array with an exchange sort 
		for (i = 0; i < (judge - 1); ++i)
		{
			for (k = i + 1; k < judge; ++k)
			{
				if (scores[i] > scores[k])
				{
					temp = scores[i];
					scores[i] = scores[k];
					scores[k] = temp;
				}	
			}
		}

		//saves the value of sum for the total avg
		sum2 = sum;
		//makes the value of sum equal to 0 so that it starts over
		sum = 0;

		//Sums the scores but doesnt include the lowest
		for (g = 1; g <= (judge - 1); g++)
		{
			sum += scores[g];
		}
		
		//Counts the number of pumpkins scored
		count = 1 + count; 

		//Averages the scores and prints out the average 
		avg = sum / ((judge - 1));
		printf("Average score for the pumpkin is: %.2f\n", avg);

		//Prints out if the contestant wins a t-shirt (if score >= 9).
		//Also adds 1 to tshirt_count if the avg is greater than 9.
		if (avg >= 9.0)
		{
			printf("That contestant wins a t-shirt!\n\n");
			tshirt_count = tshirt_count + 1;
		}

		//Asks user if they want to enter scores for another pumpkin
		printf("Do you have another pumpkin to enter scores for?(y=1, n=0)\n");
		scanf(" %d", &contin);
		printf("\n");
		
	}

	//runs the program again if the user inputs 1
	while (contin == 1); 

	//Finds the total average of the pumpkin(s) entered
	if (contin == 0) 
	{
		total_avg = (sum + sum2) / (count*(judge - 1)); 
	}
	
	//If user inputs the value of 0, the program ends and gives summary.
	if (contin == 0);
		printf("-+-+-+-+-+-+-+-+-+-+-+-+-SUMMARY-+-+-+-+-+-+-+-+-+-+-+-+-\n");
		printf("There were %d pumpkin(s) in the contest.\n",count);
		printf("%d t-shirts were won!\n", tshirt_count);
		printf("The total average of the scores is %.2f.\n", total_avg);

return 0;
}
