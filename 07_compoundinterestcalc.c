#include <stdio.h>
#include <math.h>

int main(){

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int times_compounded = 0;
    double amount = 0.0;

    printf("Compound Interest Calculator\n");
    printf("\n");
    printf("Enter the principal amount(P): ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate(r) in percentage: ");
    scanf("%lf", &rate);
    rate = rate / 100; // Convert percentage to decimal
 
    printf("Enter the number of years(t): ");
    scanf("%d", &years);

    printf("Enter the number of times interest is compounded per year(n): ");
    scanf("%d", &times_compounded);

    amount = principal * pow((1 + rate / times_compounded), times_compounded * years);

    printf("The amount after %d years is: %.2lf\n", years, amount);

    return 0;
}