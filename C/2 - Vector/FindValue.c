// Lesson 29 - (04/29/2025)
#include <stdio.h>

int main() {
    
    int arr[8] = {5, 2, 8, 9, 0, 3, 5, 1}, num;
    int len = sizeof(arr) / sizeof(arr[0]);
    
    printf("========= FIND VALUE ===========\n\n");
    
    printf("Enter the value you're looking for: ");
    scanf("%d", &num);
    
    for (int i = 0; i < len; i++) {
        if (arr[i] == num) {
            printf("\nThe number %d is in the array at position %d!", num, i);
        }
    }

    return 0;
}
