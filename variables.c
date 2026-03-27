#include<stdio.h>
#include <string.h>

int main(){
float percentage = 0.0f;
int age = 0;
char name[30]="";

printf("Enter your age : ");
scanf("%d", &age);
printf("Enter your 8th percentage : ");
scanf("%f", &percentage);
printf("Enter your full name: ");
getchar();
fgets(name, sizeof(name), stdin);
name[strlen(name) - 1 ] = '0';
printf("\n");
printf("Your name is : %s",name);
printf("You are %d  years old\n", age);
printf("You have percentage of %.2f%%\n", percentage );

return 0;
}