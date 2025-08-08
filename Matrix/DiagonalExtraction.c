// Lesson 32 - (05/06/2025)
// This program reads values into a 3x3 matrix and extracts the main diagonal elements.

#include <stdio.h>

int main(){
	
	int diagonal[3], x = 0, matrix[3][3];
	
	printf("========= MAIN DIAGONAL ========\n\n");
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("Enter the value for row %d, column %d: ", i+1, j+1);
			scanf("%d", &matrix[i][j]);
			
			if (i == j){
				diagonal[x++] = matrix[i][j];
			}
		}
	}

	// Print Result
	printf("\nThe main diagonal of the entered matrix is: ");
	for (int i = 0; i < x; i++){
		printf("%d ", diagonal[i]);
	}
	
}
