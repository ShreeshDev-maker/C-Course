#include <stdio.h>
#include <string.h>

int main(){
   //SHOPPING CART PROGRAM
   
   char item[50] = "";
   float price = 0.0f;
   int quantity = 0;
   char currency[] = "Rs";
   float total = 0.0f;

   printf("What item would you like to buy?: ");
   fgets(item, sizeof(item), stdin);
   item[strlen(item) - 1] = '\0' ;

   printf("what is the price for each?: ");
   scanf("%f",&price);

   printf("How many would you like?: ");
   scanf("%d",&quantity);

   total = price * quantity;
   printf("\nYou have bought %d %ss\n",quantity,item);
   printf("The total is: ");
   printf("%s %.2f\n",currency,total);

  


}
