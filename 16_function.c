#include <stdio.h>
#include <string.h>


void birthday_song(char name[], int age) {
    printf("Happy birthday to you!\n");
    printf("Happy birthday to you!\n");
    printf("Happy birthday dear %s!\n", name);
    printf("Happy birthday to you!\n");
    printf("You are %d years old now!\n", age);
    printf("\n");
}
int main(){

    char name[100] = "";
    int age = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0'; 

    printf("Enter your age: ");
    scanf("%d", &age);

    birthday_song(name,age);
    birthday_song(name,age);
    birthday_song(name,age);
    return 0;
}