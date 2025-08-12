// Lesson 32 - (05/06/2025)
// This program calculates the sum of all elements in a 3x3 matrix.

#include <stdio.h>

int main(){
	
	int sum = 0, matrix[3][3];
	
	printf("========= MATRIX SUM ===========\n\n");
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("Enter the value for row %d, column %d: ", i+1, j+1);
			scanf("%d", &matrix[i][j]);
			sum += matrix[i][j];
		}
	}

	printf("\nThe sum of all elements is %d!\n", sum);
	
}
