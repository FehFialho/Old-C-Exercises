// Lesson 29 - (04/29/2025)
#include <stdio.h>

int main() {
    int arr[5];
    
    int len = sizeof(arr) / sizeof(arr[0]);
    
    printf("=========== INSERT INTO ARRAY ==============\n\n");
    
    for (int i = 0; i < len; i++) {
        printf("Enter the number for position %d: ", i);
        scanf("%d", &arr[i]);
    }
        
    for (int i = 0; i < len; i++) {
        printf("\nValue at position %d: %d", i, arr[i]);
    }
    
    return 0;
}
