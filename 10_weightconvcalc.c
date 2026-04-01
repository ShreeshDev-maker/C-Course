#include <stdio.h>
//Weight Conversion Calculator
int main() {
    double weight_kg = 0.0;
    double weight_lb = 0.0;
    int choice = 0;

    printf("Weight Conversion Calculator\n");
    printf("\n");
    printf("1. Convert kilograms to pounds\n");
    printf("2. Convert pounds to kilograms\n");
    
    // Loop until user enters 1 or 2
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    
    while (choice != 1 && choice != 2) {
        printf("Invalid choice. Please enter 1 or 2.\n");
        printf("Enter your choice (1 or 2): ");
        scanf("%d", &choice);
    }
    
    // Process the valid choice
    if (choice == 1){
        printf("Enter weight in kilograms: ");
        scanf("%lf", &weight_kg);
        weight_lb = weight_kg * 2.20462; // 1 kg = 2.20462 lbs
        printf("%.2lf kg is equal to %.2lf lbs\n", weight_kg, weight_lb);
    } else if (choice == 2){
        printf("Enter weight in pounds: ");
        scanf("%lf", &weight_lb);
        weight_kg = weight_lb / 2.20462; // 1 lb = 0.453592 kg
        printf("%.2lf lbs is equal to %.2lf kg\n", weight_lb, weight_kg);
    }

    return 0;
}