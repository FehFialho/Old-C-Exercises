// Lesson 27 - (04/24/2025)
#include <stdio.h>

int main() {
    
    double wage, rate = 0.2;
    
    FILE *calcWage;
    calcWage = fopen("calcWage.txt", "w");
    
    printf("Enter your current salary: ");
    scanf("%lf", &wage);
    
    wage = wage + (wage * rate);
    
    fprintf(calcWage, "Your new salary is $%.2lf! (Increase of %.0lf%%)", wage, rate * 100);
	printf("Check your Folder!");
    fclose(calcWage);
}
