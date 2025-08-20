/* Evaluation 2 - (04/22/2025)
4) Create a C program to calculate an employee's payroll, 
including simplified taxes (INSS and IRRF) and benefits (transportation voucher), 
using functions declared in a header file (folha.h). 
The main program (main.c) will request the employee's salary 
and display the payroll summary.
*/

#include <stdio.h>
#include "_payroll.h"

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
    printf("Net Salary: R$%.2lf\n", netSalary(salary, 21));
    printf("------------------------------------\n");

    return 0;
}
