#include <stdio.h>

#define HRA_SKILLED 3500
#define HRA_NON_SKILLED 1500
#define DA_PERCENTAGE 0.35
#define PENSION_PERCENTAGE 0.12
#define HEALTH_INSURANCE 500

struct Employee {
    
    int basicPay;
    int isSkilled;
 
};

float calculateDA(int basicPay) {
    return DA_PERCENTAGE * basicPay;
}

float calculateHRA(int basicPay, int isSkilled) {
    return isSkilled ? HRA_SKILLED : HRA_NON_SKILLED;
}

float calculateGrossPay(int basicPay, int isSkilled) {
    float da = calculateDA(basicPay);
    float hra = calculateHRA(basicPay, isSkilled);
    return basicPay+da+hra;
}

float calculateDeduction(float grossPay) {
    return PENSION_PERCENTAGE * grossPay + HEALTH_INSURANCE;
}

float calculateNetPay(float grossPay, float deduction) {
    return grossPay - deduction;
}

void printSalarySlip(struct Employee employee) {
    float grossPay = calculateGrossPay(employee.basicPay, employee.isSkilled);
    float deduction = calculateDeduction(grossPay);
    float netPay = calculateNetPay(grossPay, deduction);

    printf("Employee Basic Pay: %d\n", employee.basicPay);
    printf("Employee DA: %.2f\n", calculateDA(employee.basicPay));
    printf("Employee HRA: %.2f\n", calculateHRA(employee.basicPay, employee.isSkilled));
    printf("Employee Gross Pay: %.2f\n", grossPay);
    printf("Employee Deduction: %.2f\n", deduction);
    printf("Employee Net Pay: %.2f\n\n", netPay);
}

int main() {

    int n;
    printf("How many students: ");
    scanf("%d", &n);

    struct Employee employees[n];

    for (int i = 0; i < n; i++) {
        printf("Employee %d\n", i+1);
        printf("Enter the basic pay and whether skilled or not(1 and 0): ");
        scanf("%d %d", &employees[i].basicPay, &employees[i].isSkilled);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("Employee %d:\n", i+1);
        printSalarySlip(employees[i]);
    }

    return 0;
}