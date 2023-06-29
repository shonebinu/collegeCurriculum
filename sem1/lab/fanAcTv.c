#include <stdio.h>
#include <string.h>

void main()
{
  struct product
  {
    char productName[20];
    int quantity;
    int price;
    int disQuantity;
    float discount;
    int totalPrice;
    char discountApplied[10];
  } fan, ac, tv;
  int f, a, t;

  strcpy(fan.productName, "Fan");
  strcpy(ac.productName, "AC");
  strcpy(tv.productName, "TV");

  // Default Prices
  fan.price = 120;
  ac.price = 200;
  tv.price = 150;

  // Discounts (Given in the Qn. Paper)
  fan.disQuantity = 20;
  fan.discount = 12;
  fan.disQuantity = 15;
  fan.discount = 10;
  fan.disQuantity = 8;
  fan.discount = 5;

  printf("What all product's('1' for yes, '0' for no): \n");
  printf("Fan (1/0): ");
  scanf("%d", &f);
  printf("AC (1/0): ");
  scanf("%d", &a);
  printf("TV (1/0): ");
  scanf("%d", &t);

  if (f)
  {
    printf("\nEnter the number of Fan's: ");
    scanf("%d", &fan.quantity);
    if (fan.quantity >= fan.disQuantity)
    {
      fan.totalPrice = (fan.quantity * fan.price) * (100 - fan.discount) / 100;
      strcpy(fan.discountApplied, "yes");
    }
    else
    {
      fan.totalPrice = (fan.quantity * fan.price);
      strcpy(fan.discountApplied, "no");
    }
  }
  if (a)
  {
    printf("Enter the number of AC's: ");
    scanf("%d", &ac.quantity);
    if (ac.quantity >= ac.disQuantity)
    {
      ac.totalPrice = (ac.quantity * ac.price) * (100 - ac.discount) / 100;
      strcpy(ac.discountApplied, "yes");
    }
    else
    {
      ac.totalPrice = (ac.quantity * ac.price);
      strcpy(ac.discountApplied, "no");
    }
  }
  if (t)
  {
    printf("Enter the number of TV's: ");
    scanf("%d", &tv.quantity);
    if (tv.quantity >= tv.disQuantity)
    {
      tv.totalPrice = (tv.quantity * tv.price) * (100 - tv.discount) / 100;
      strcpy(tv.discountApplied, "yes");
    }
    else
    {
      tv.totalPrice = (tv.quantity * tv.price);
      strcpy(fan.discountApplied, "no");
    }
  }

  printf("\n\nProduct\tPrice\tQuantity\tDiscount\tTotal");
  if (f)
  {
    printf("\n%s\t%d\t%d\t\t%s\t\t%d", fan.productName, fan.price, fan.quantity, fan.discountApplied, fan.totalPrice);
  }
  if (a)
  {
    printf("\n%s\t%d\t%d\t\t%s\t\t%d", ac.productName, ac.price, ac.quantity, ac.discountApplied, ac.totalPrice);
  }
  if (t)
  {
    printf("\n%s\t%d\t%d\t\t%s\t\t%d", tv.productName, tv.price, tv.quantity, tv.discountApplied, tv.totalPrice);
  }
}