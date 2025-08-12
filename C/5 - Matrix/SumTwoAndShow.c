// Lesson 32 - (05/06/2025)
// This program reads two 3x3 matrices, calculates their sum, and prints the result.

#include <stdio.h>
#include <stdlib.h>

int printMatrix(int matrix[3][3]);

int main(){
	
	int a[3][3], b[3][3], c[3][3];
	
	printf("========= MATRIX ADDITION ===========\n\n");
	
	// Reading Matrices A and B
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("Matrix A - Row %d, Column %d: ", i+1, j+1);
			scanf("%d", &a[i][j]);
			printf("Matrix B - Row %d, Column %d: ", i+1, j+1);
			scanf("%d", &b[i][j]);
			
			int sum  = a[i][j] + b[i][j];
			c[i][j] = sum;
		}
	}
	
	// Print Matrices
	system("cls"); // Use "clear" instead of "cls" on Linux/Mac
	printf("\n===== Matrix A ======\n\n");
	printMatrix(a);
	printf("\n===== Matrix B ======\n\n");
	printMatrix(b);
	printf("\n===== Matrix C ======\n\n");
	printMatrix(c);
}

int printMatrix(int matrix[3][3]){
	
	printf(" -----------\n");
	
    for (int l = 0; l < 3; l++) {
    	printf("|");
        for (int c = 0; c < 3; c++) {
            printf(" %d |", matrix[l][c]);
        }
        printf("\n");
    }
    
    printf(" -----------\n");
}
