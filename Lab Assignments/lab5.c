/* Sarah Anderson
CPSC 1111-005
9-25-18
Lab 5
Explaination: This program figures out if random number generated points (x,y)
are on the circle's circumference, inside or outside the circle.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main (void){
	int input=0;
	int answer=0;
	int xmin=0, xmax=0, ymin=0, ymax=0;
	int xrandomNumber=0, yrandomNumber=0;
	int j=0;
	int xrange_span=0,yrange_span=0;
	int final=0;

/*Asks for an input from the user that will become the radius of the circle by 
squarerooting the input*/
	printf("Enter 3 digit number:");
	scanf("%d",&input);
	answer = sqrt(input);
	
//Asks user for inputs for min/max x and min/max y
	printf("Enter a minimum x value:");
	scanf("%d",&xmin);
	printf("Enter a maximum x value:");
	scanf("%d",&xmax);
	printf("Enter a minimum y value:");
	scanf("%d",&ymin);
	printf("Enter a maximum y value:");
	scanf("%d",&ymax);

/*
Random number generator: takes two random numbers between the min and max of
both variables (x and y) and it creates a point. Then it checks to see if it 
is on the circle, inside the circle or on the circle.
*/
	srand( (int)time(0) );

	for(j=1; j<=10; j++)
	{
		xrange_span = (xmax-xmin+1);
		yrange_span = (ymax-ymin+1);
		xrandomNumber = (rand() % (xrange_span) + xmin);
		yrandomNumber = (rand() % (yrange_span) + ymin);
		if (xmin < 0 || xmin >= 10)
			printf("(%3d,",xrandomNumber);
		else 
			printf("(%4d,",xrandomNumber);
		if (ymin < 0 || ymin >= 10)
			printf("%3d)",yrandomNumber);
		else 
			printf("%4d)",yrandomNumber);
//Equation to see if the random point that was generated is on/inside/outside
//the circle.
	final = (xrandomNumber*xrandomNumber)+(yrandomNumber*yrandomNumber);

		if (final > input)
			printf(" is outside the circle with radius %d\n", answer);
		else if (final < input)
			printf(" is inside the circle with radius %d\n", answer);
		else if (final == input)
			printf(" is on the circumference of the circle with radius %d\n",
			answer);
	}
return 0;
}
 
