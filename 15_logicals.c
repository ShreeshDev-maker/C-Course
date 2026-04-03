//Logical operators demonstration
#include <stdio.h>
int main() {
    int a = 5, b = 10, c = 15;

    // Logical AND (&&)
    if (a < b && b < c) {
        printf("Logical AND: Both conditions are true\n");
    }

    // Logical OR (||)
    if (a > b || b < c) {
        printf("Logical OR: At least one condition is true\n");
    }

    // Logical NOT (!)
    if (!(a > b)) {
        printf("Logical NOT: The condition is false, so this is true\n");
    }

    return 0;
}