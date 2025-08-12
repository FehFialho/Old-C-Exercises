// Lesson 27 - (04/24/2025)
#include <stdio.h>

int main() {
    
    float a, b, c, x;
    
    FILE *sum;
    sum = fopen("sum.txt", "w");
    
    printf("Please enter 3 numbers to sum: ");
    scanf("%f %f %f", &a, &b, &c);
    
    x = a + b + c;

	fprintf(sum, "Your sum is: ");
    fprintf(sum, "%.2f + %.2f + %.2f = %.2f\n", a, b, c, x);
    fclose(sum);
    
    printf("Check your folder!");
}
