#include <stdio.h>
//Temperature Conversion Calculator
int main(){
    char choice = '\0';
    float temp_c = 0.0f;
    float temp_f = 0.0f;

    printf("Temperature Conversion Calculator\n");
    printf("C. Convert Celsius to Fahrenheit\n");
    printf("F. Convert Fahrenheit to Celsius\n");
    printf("Is the temp in Celsius or Fahrenheit? (C/F): ");
    scanf(" %c", &choice);

    while(choice != 'C' && choice != 'c' && choice != 'F' && choice != 'f') {
        printf("Invalid choice. Please enter C or F.\n");
        printf("Is the temp in Celsius or Fahrenheit? (C/F): ");
        scanf(" %c", &choice);
    }
    

    if (choice == 'C' || choice == 'c'){
        // C to F conversion formula: F = (C * 9/5) + 32
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp_c);
        temp_f = (temp_c * 9.0f / 5.0f) + 32.0f;
        printf("%.2f °C is equal to %.2f °F\n", temp_c, temp_f);
    } else if (choice == 'F' || choice == 'f'){
        // F to C conversion formula: C = (F - 32) * 5/9
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp_f);
        temp_c = (temp_f - 32.0f) * 5.0f / 9.0f;
        printf("%.2f °F is equal to %.2f °C\n", temp_f, temp_c);
    } 
    }


