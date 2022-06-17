#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "doMath.h"

int main(void)
{

	//needed to create a random number
	time_t t;
	srand((unsigned) time(&t));
	int fNum = rand();
	int sNum = rand();
	int result;

	result = add(fNum, sNum);
	printf("Addition of %d + %d = %d\n", fNum, sNum, result);


	result = sub(fNum, sNum);
	printf("Subtraction of %d - %d = %d\n", fNum, sNum, result);

	return 0;
}