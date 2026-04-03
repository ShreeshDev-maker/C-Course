#include <stdio.h>
//Switch Statement Example
int main() {
    int dayofTheWeek = 0;
    printf("Enter the day of the week (1-7): ");
    scanf("%d", &dayofTheWeek);

   

    
    switch (dayofTheWeek){
        case 1:
            printf("It is Monday\n");
            break;
        case 2:
            printf("It is Tuesday\n");
            break;
        case 3:
            printf("It is Wednesday\n");
            break;
        case 4:
            printf("It is Thursday\n");
            break;
        case 5:
            printf("It is Friday");
            break;
        case 6:
            printf("It is Saturday");
            break;
        case 7:
            printf("It is Sunday");
            break;
        default:
            printf("Please only enter a number between 1 and 7");

    return 0;
}


    }