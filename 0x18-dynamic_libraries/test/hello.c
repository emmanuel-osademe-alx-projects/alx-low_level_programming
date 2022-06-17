#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define MATH_PI 3.14

int main(void)
{
	double pi = MATH_PI;
	printf("Hello World, pi is: %f \n", pi);



	//needed to create a random number
	time_t t;
	srand((unsigned) time(&t));
	int rNum = rand();

	double sr = sqrt(rNum);

	printf("Square root of %d is %f\n", rNum, sr);

	return 0;
}