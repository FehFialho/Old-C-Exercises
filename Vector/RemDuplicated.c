// Lesson 29 - (04/29/2025)
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5}; 
    int len = sizeof(arr) / sizeof(arr[0]); 

    printf("========= REMOVE DUPLICATES ===========\n\n");

    // Iterate over all indices
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) { // Compare indices after i
            if (arr[i] == arr[j]) { // If the same value is found
                printf("Duplicate found: %d (at indices %d and %d)\n", arr[i], i, j);

                // Shift elements left to fill the space left by the duplicate
                for (int k = j; k < len - 1; k++) {
                    arr[k] = arr[k + 1]; 
                }
                arr[len - 1] = 0;

                len--;  
                j--;   
            }
        }
    }

    // Print the array after removing duplicates
    printf("\nUpdated array: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]); 
    }

    return 0;
}
