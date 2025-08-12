// Lesson 34 - (05/13/2025)
// This program registers and displays employee information, including
// name, date of birth, CPF, admission date, and wage.

#include <stdio.h>

struct person_register {
    char name[10];
    char surname[20];
    char birth[10];
    char cpf[11];
    char admission_date[10];
    float wage;
};

int main() {
    int n; // Number of employees.
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Employee array.
    struct person_register person[n]; 

    // Read each employee's data.
    for (int i = 0; i < n; i++) {
        printf("\nRegister employee %d:\n", i + 1);

        printf("First name: ");
        scanf("%s", person[i].name);

        printf("Last name: ");
        scanf("%s", person[i].surname);

        printf("Date of birth (DD/MM/YYYY): ");
        scanf("%s", person[i].birth);

        printf("CPF: ");
        scanf("%s", person[i].cpf);

        printf("Admission date (DD/MM/YYYY): ");
        scanf("%s", person[i].admission_date);

        printf("Wage: $");
        scanf("%f", &person[i].wage);
    }

    // Display data.
    printf("\n--- Employee Data ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s %s\n", person[i].name, person[i].surname);
        printf("Date of birth: %s\n", person[i].birth);
        printf("CPF: %s\n", person[i].cpf);
        printf("Admission date: %s\n", person[i].admission_date);
        printf("Wage: $%.2f\n", person[i].wage);
    }

    return 0;
}
