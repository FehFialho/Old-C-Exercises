#ifndef _PAYROLL_H
#define _PAYROLL_H

// Rates and values for calculation (simplified)
#define INSS_RATE 0.11 // Fixed 11%
#define IRRF_EXEMPTION_LIMIT 1903.98
#define IRRF_STANDARD_RATE 0.075 // Simplified 7.5% above exemption
#define DAILY_TRANSPORT_ALLOWANCE 6.00
#define WORK_DAYS_MONTH 22 // Assuming a fixed value

double inss(double salary){ 
    return salary * INSS_RATE;
}

double irrf(double salary){ 
    if (salary > IRRF_EXEMPTION_LIMIT){ // Check if IRRF tax applies
        return salary * IRRF_STANDARD_RATE;
    }
    return 0.;
}

double vt(int days){ // Transportation allowance for x working days
    return DAILY_TRANSPORT_ALLOWANCE * days;
}

double netSalary(double salary, int days){ // Net salary calculation
    return salary - inss(salary) - irrf(salary) - vt(days);
}

#endif