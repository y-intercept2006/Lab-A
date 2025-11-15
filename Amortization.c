//Amortization Calculator
#include <stdio.h>
#include <math.h>

int main() {
    
    double principal = 0.0;
    double annualRate = 0.0;
    int years = 0;
    
    printf("Enter the loan amount: ");
    scanf("%lf", &principal);
    
    printf("Enter the annual interest rate: ");
    scanf("%lf", &annualRate);
    
    printf("Enter the loan term in years: ");
    scanf("%d", &years);
   
    double monthlyRate = annualRate / 12 / 100;
    int totalPayments = years * 12;
    
    double M;
    M = (principal * monthlyRate * pow(1 + monthlyRate, totalPayments)) / (pow(1 + monthlyRate, totalPayments) - 1);
    
    printf("Monthly Payment: %.2lf\n", M);
    
   

    return 0;
}