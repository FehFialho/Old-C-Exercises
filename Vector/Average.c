// Lesson 29 - (04/29/2025)
#include <stdio.h>

int main() {
    
    float arr[5], total = 0, aboveAverage[5];
    int len = sizeof(arr) / sizeof(arr[0]);
    
    printf("========= AVERAGE OF VALUES ===========\n\n");
    
    // Input values
    for (int i = 0; i < len; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &arr[i]);
        total += arr[i];
    }
    
    // Calculate average
    total /= len;
    printf("\nThe average of the elements is %.2f!\n", total);
    
    // Check elements above the average
    int countAbove = 0;
    for (int i = 0; i < len; i++) {
        if (arr[i] > total) {
            aboveAverage[countAbove] = arr[i];
            countAbove++;
        }
    }
    
    // Print only values above the average
    printf("\nThere are %d numbers above the average!\n", countAbove);
    for (int i = 0; i < countAbove; i++) {
        printf("\n-> %.2f", aboveAverage[i]);
    }

    return 0;
}
