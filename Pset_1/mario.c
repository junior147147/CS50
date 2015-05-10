#include "cs50.h"
#include <stdio.h>

int main(void)
{

	int height;

	do{
		printf("height：");
		scanf("%d", &height);
	}while(height<=0||height>=23);




	for(int row = 0; row < height; row++){
		
		for(int space = height; space > row + 1; space--){
			printf(" ");
		}

		for(int star = 0; star < row + 2; star++){
			printf("#");
		}

		printf("\n");

	}


// outter loop:
// basically a counter for rows

// note on the two inner loop:
// try to print height - row spaces & row + 1 stars
// use loop to acheive that , and then print out the symbol


	return 0;
}


