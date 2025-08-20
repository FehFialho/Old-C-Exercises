// Evaluation 2 - (04/22/2025)
// 5) Create a C program that prints a sequence of integers from 1 up to a  
// positive integer provided by the user, using a recursive function.
#include <stdio.h>

// Function prototype: recursive function to print integers
int integers(int, int);

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    integers(1, num); // Start recursion from 1 up to num
    return 0;
}

// Recursive function that prints numbers from 'current' up to 'num'
int integers(int current, int num) {
    if (current > num) {
        return 0; // Base case: stop recursion
    }

    printf("%d\n", current);
    return integers(++current, num); // Recursive call with incremented value
}
