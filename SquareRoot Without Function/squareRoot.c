#include<stdio.h>

/*
    Question: How do you find the square root of a number
              without calling the square root function?

    Algorithm: Assuming variables output, input, temp
               Divide input by 2 (find midpoint)
               Set temp = output;
               Set output = (input/temp + temp) / 2;
               Repeat calculation until output and temp are equal.
*/


void main(){

	int input;
	float temp, squareRoot;

	printf("\nPlease enter a number: \n");
	scanf("%d", &input);

	// Divide the number by 2 and store
	squareRoot = input/2;
	temp = 0;

	while(squareRoot != temp){
		// Initially 0, updated as the loop continues
		temp = squareRoot;

		// Example:
		// First iteration: squareRoot(256) = (256 / 128 + 128) / 2 = 65.5
		// Second iteration: squareRoot = (256/65 + 65) / 2 = 34.469, etc.
		// Repeat until squareRoot = temp. This is the answer
		squareRoot = (input/temp + temp) /2;
	}//end while

	printf("\nResult of %d is %.2f\n", input, squareRoot);

	// Rerun for more inputs
	main();
}//end main
