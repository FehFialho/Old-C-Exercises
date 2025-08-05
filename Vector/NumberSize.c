// Lesson 29 - (04/29/2025)
#include <stdio.h>

int main() {
    
    int arr[5];
    
    int len = sizeof(arr) / sizeof(arr[0]);
    
    printf("========= SMALLEST AND LARGEST ===========\n\n");
    
    for (int i = 0; i < len; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    int min = arr[0];
    int max = arr[0];
    
    for (int i = 0; i < len; i++) {    
        if (min > arr[i]) {
            min = arr[i];
        }
        if (max < arr[i]) {
            max = arr[i];
        }
    }
        
    printf("\nThe smallest number is %d!", min);
    printf("\nThe largest number is %d!", max);

    return 0;
}
