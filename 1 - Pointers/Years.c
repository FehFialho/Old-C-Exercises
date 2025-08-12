// Lesson 27 - (04/24/2025)
#include <stdio.h>

int main() {
    
    int current, birth, age;
    
    FILE *years;
    years = fopen("years.txt", "w");
    
    printf("Enter the current year and birth year separated by a space: ");
    scanf("%d %d", &current, &birth);
    
    age = current - birth;
    
    fprintf(years, "Your current age is %d years!\n", age);
    printf("Check your Folder!");
    fclose(years);
}
