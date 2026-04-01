#include <stdio.h>

int main() {
    int choice = 0;

    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    
    while (choice != 1 && choice != 2) {
        printf("Invalid choice. Please enter 1 or 2.\n");
        printf("Enter your choice (1 or 2): ");
        scanf("%d", &choice);
    }

    printf("You entered a valid choice: %d\n", choice);

    return 0;
}