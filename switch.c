#include<stdio.h>

int main(){
    printf("Pick a Food Item:\n1. Pizza,Rs 239 \n2.Burger,Rs129 \n3.Pasta,Rs179 \n4.French Fries,Rs99 \n5.Sandwich,Rs149\n");
    int choice=0;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("FOOD ITEM-PIZZA \n PRICE=RS239");
        break;
    case 2:
    printf("FOOD ITEM-BURGER \n PRICE=RS129");
    break;
    case 3:
    printf("FOOD ITEM-PASTA \n PRICE=RS179");
    break;
    case 4 :
     printf("FOOD ITEM-FRENCH FRIES \n PRICE=RS99");
     break;
     case 5:
      printf("FOOD ITEM-SANDWICH \n PRICE=RS149");
      break;

    default:
    printf("IVALID CHOICE");
        break;
    }
    
    return 0;
}