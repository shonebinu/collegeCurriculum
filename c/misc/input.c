#include <stdio.h>
#include <stdlib.h>

int main()
{

  char name2[20];
  printf("Enter your name: ");
  fgets(name2, 20, stdin); // Max 20 characters, "stdin", where we wanna get out info and stdin is the console. //Fgets prints a new line since it recognises out ENTER click as a new line
  printf("Your name is %s.", name2);

  char grade;
  printf("Enter your grade: ");
  scanf("%c", &grade);
  printf("Your grade is %c.\n", grade);

  int age;
  printf("Enter your age: ");
  scanf("%d", &age); // & => pointer

  printf("You are %d years old.\n", age);

  double gpa;
  printf("Enter your GPA: ");
  scanf("%lf", &gpa);
  printf("Your gpa is %f.\n", gpa);

  char name[20]; // Since we are not defining the variable right now we can't use just '[]' without any numbers.
  printf("Enter your name: ");
  scanf("%s", name); // Here, no need of '&'
  printf("Your name is %s.\n", name);

  return 0;
}