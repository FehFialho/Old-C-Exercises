// Lesson 32 - (05/06/2025)
// This program reads values into an NxN matrix and prints it without the main diagonal elements.

#include <stdio.h>
#define LEN 3 // Debug size

int main(){
	
	int matrix[LEN][LEN];
	
	printf("========= MATRIX WITHOUT DIAGONAL ========\n\n");
	
	for (int i = 0; i < LEN; i++){
		for (int j = 0; j < LEN; j++){
			printf("Enter the value for row %d, column %d: ", i+1, j+1);
			scanf("%d", &matrix[i][j]);
		}
	}

	// Print Result without main diagonal	
	printf(" -----------\n");
	
    for (int l = 0; l < LEN; l++) {
		printf("|");
        for (int c = 0; c < LEN; c++) {
        	if (l != c) {
            	printf(" %d |", matrix[l][c]);		
			} else {
                printf("   |"); // print empty space for diagonal
            }
        }
        printf("\n");
    }
    printf(" -----------\n");	
	
}
