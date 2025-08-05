// Lesson 29 - (04/29/2025)
#include <stdio.h>

int main() {
    
    int arr[3], total = 0;
    
    int len = sizeof(arr) / sizeof(arr[0]);
    
    printf("========= SUM VALUES ===========\n\n");
    
    for (int i = 0; i < len; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
        total += arr[i];
    }
    
    printf("\nThe total sum of the numbers is %d!\n", total);
    
    return 0;
}
