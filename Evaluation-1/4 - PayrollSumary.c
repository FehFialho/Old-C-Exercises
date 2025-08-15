#include <stdio.h>
#include "_fernandaklechowiczfialho_.h"

int main(){

    double salary;

    printf("Enter Salary: ");
    scanf("%lf", &salary);

    printf("\n--- Payroll Summary ---\n");
    printf("Gross Salary: R$%.2lf\n", salary);
    printf("INSS Deduction: R$%.2lf\n", inss(salary));
    printf("IRRF Deduction: R$%.2lf\n", irrf(salary));
    printf("Transportation Benefit: R$%.2lf\n", vt(21));
    printf("------------------------------------\n");
    printf("Net Salary: R$%.2lf\n", salLiq(salary, 21));
    printf("------------------------------------\n");
    return 0;
}
