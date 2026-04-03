#include <stdio.h>
#include <stdbool.h>

//Nested If Statements Example
int main() {
    float price = 10.0f;  // Base price before discounts
    bool isStudent = true;
    bool isSenior = true;

    //student = 9$
    //senior = 8$
    //normal = 10$
    //student and senior = 7$

   if (isStudent){
        if (isSenior){
            printf("You get a student discount of 10%%\n");
            printf("You get a senior discount of 20%%\n");
            price *= 0.7f; // Apply both discounts
        }
        else {
            printf("You get a student discount of 10%%\n");
            price *= 0.9f; // Apply student discount
        }
   }
   else if (isSenior){
        printf("You get a senior discount of 20%%\n");
        price *= 0.8f; // Apply senior discount
   }
   else {
        printf("You do not qualify for any discounts\n");
        price = 10.0f; // Normal price
   }

    printf("The final price is: $%.2f\n", price);

    return 0;
}