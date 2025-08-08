// Lesson 32 - (05/06/2025)
// This program reads values into a 3x3 matrix and extracts the secondary diagonal elements.

#include <stdio.h>

int main(){
	
	int diagonal[3], x = 0, matrix[3][3];
	
	printf("========= SECONDARY DIAGONAL ========\n\n");
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("Enter the value for row %d, column %d: ", i+1, j+1);
			scanf("%d", &matrix[i][j]);
			
			// The sum of the two indices always results in matrix dimension - 1, which is 2 for a 3x3.
			// Need to subtract 1 because indices start at 0.
			// Learned this from a Numpy exercise; it works for square matrices.
			if ( (i + j) == 2 ){
				diagonal[x++] = matrix[i][j];
			}
		}
	}

	// Print Result
	printf("\nThe secondary diagonal of the entered matrix is: ");
	for (int i = 0; i < x; i++){
		printf("%d ", diagonal[i]);
	}
	
}
